__asm__(".globl _lsb_dladdr");
__asm__("	.type _lsb_dladdr,@function");
__asm__("_lsb_dladdr:");
__asm__("	ret");
__asm__(".symver _lsb_dladdr,dladdr@@GLIBC_2.0");
__asm__(".globl _lsb_dlclose");
__asm__("	.type _lsb_dlclose,@function");
__asm__("_lsb_dlclose:");
__asm__("	ret");
__asm__(".symver _lsb_dlclose,dlclose@@GLIBC_2.0");
__asm__(".globl _lsb_dlerror");
__asm__("	.type _lsb_dlerror,@function");
__asm__("_lsb_dlerror:");
__asm__("	ret");
__asm__(".symver _lsb_dlerror,dlerror@@GLIBC_2.0");
__asm__(".globl dlopen");
__asm__("	.type dlopen,@function");
__asm__("dlopen:");
__asm__("	ret");
__asm__(".globl _lsb_dlsym");
__asm__("	.type _lsb_dlsym,@function");
__asm__("_lsb_dlsym:");
__asm__("	ret");
__asm__(".symver _lsb_dlsym,dlsym@@GLIBC_2.0");
