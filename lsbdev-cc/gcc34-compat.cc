/*
 * Copyright 2006-2012 Linux Foundation
 *
 * Originally written by Jeff Licquia <licquia@freestandards.org>.
 *
 * This file is part of lsbcc.  lsbcc is free software, covered
 * under the terms of the BSD license.
 */

/*
 * This library is intended to facilitate backward compatibility
 * between Linux distributions using gcc 3.4 and applications being
 * compiled with gcc 4.  Between gcc 3.4 and 4.0, a new ABI function
 * was added to fix a bug in rethrowing exceptions with complex
 * objects.  Statically linking this library before the standard C++
 * library will allow the resulting binary to run on older systems
 * with libstdc++6 from gcc 3.4.
 *
 * When running on newer systems, this code should amount to a no-op;
 * the resulting binary should act exactly as it would without it.
 * This includes benefiting from the bug fix the ABI was intended to
 * provide.  On older gcc-3.4-based systems, the bug should still be
 * there.
 * 
 * On LSB 3 systems, this library will also need -ldl.  The most
 * current version of lsbcc should add the proper libraries without
 * any intervention.
 */

#include <exception>
#include <dlfcn.h>
#include <unwind.h>

namespace __cxxabiv1
{
  extern "C" void *__cxa_get_exception_ptr (void *) throw();
}

/* The following struct is based on libstdc++'s unwind-cxx.h.  It's
   used to calculate the proper size for the C++ exception object.
   Most type information has been stripped out of the struct for
   pointers, since pointers are the same size no matter the
   destination type. */

struct fake_cxa_exception
{
  void *exceptionType;
  void *exceptionDestructor;
  std::unexpected_handler unexpectedHandler;
  std::terminate_handler terminateHandler;
  void *nextException;
  int handlerCount;
  int handlerSwitchValue;
  void *actionRecord;
  void *languageSpecificData;
  _Unwind_Ptr catchTemp;
  void *adjustedPtr;
  _Unwind_Exception unwindHeader;
};

/* This function is called if we can't find the C++ library's
   __cxa_get_exception_ptr.  It should emulate its behavior as closely
   as possible. */
void *
fake_cxa_get_exception_ptr(void *exc_obj_in) throw()
{
  _Unwind_Exception *exc = reinterpret_cast<_Unwind_Exception *>(exc_obj_in);
  return reinterpret_cast<fake_cxa_exception *>(exc + 1) - 1;
}

/* Entry point for the substitute ABI function. */
extern "C" void *
__cxxabiv1::__cxa_get_exception_ptr(void *exc_obj_in) throw()
{
  void *cpplib;
  void *(*real_cxa_get_exception_ptr)(void *);
  char *errstr;

  /* Load the standard system C++ library. */
  cpplib = dlopen("libstdc++.so.6", RTLD_LAZY);
  if (cpplib == 0)
    return fake_cxa_get_exception_ptr(exc_obj_in);

  /* Load the library's ABI function.  If it's not there, use the fake
     one. */
  dlerror();
  real_cxa_get_exception_ptr = 
    (void *(*)(void *))dlsym(cpplib, "__cxa_get_exception_ptr");
  errstr = dlerror();
  if (errstr != 0)
    return fake_cxa_get_exception_ptr(exc_obj_in);

  /* We found the real function.  Use it. */
  return real_cxa_get_exception_ptr(exc_obj_in);
}
