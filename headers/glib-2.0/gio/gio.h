#if (__LSB_VERSION__ >= 50 )
#ifndef _GLIB_2_0_GIO_GIO_H_
#define _GLIB_2_0_GIO_GIO_H_

#include <glib-2.0/gio/gdbusobject.h>
#include <glib-2.0/gio/gsettings.h>
#include <glib-2.0/gio/gdbusobjectskeleton.h>
#include <glib-2.0/gio/gbufferedoutputstream.h>
#include <glib-2.0/gio/gtcpwrapperconnection.h>
#include <glib-2.0/gio/gdbusauthobserver.h>
#include <glib-2.0/gio/gtlsdatabase.h>
#include <glib-2.0/gio/gdbusinterface.h>
#include <glib-2.0/gio/gdbusconnection.h>
#include <glib-2.0/gio/gdbusaddress.h>
#include <glib-2.0/gio/gsocketlistener.h>
#include <glib-2.0/gio/gsimpleaction.h>
#include <glib-2.0/gio/gasyncinitable.h>
#include <glib-2.0/gio/gsimpleactiongroup.h>
#include <glib-2.0/gio/gcancellable.h>
#include <glib-2.0/gio/gtlsclientconnection.h>
#include <glib-2.0/gio/gthemedicon.h>
#include <glib-2.0/gio/gfileiostream.h>
#include <glib-2.0/gio/gasyncresult.h>
#include <glib-2.0/gio/gtlsbackend.h>
#include <glib-2.0/gio/gappinfo.h>
#include <glib-2.0/gio/gactiongroupexporter.h>
#include <glib-2.0/gio/gdbusserver.h>
#include <glib-2.0/gio/gfileinfo.h>
#include <glib-2.0/gio/gtlsserverconnection.h>
#include <glib-2.0/gio/gdbusutils.h>
#include <glib-2.0/gio/gdbusinterfaceskeleton.h>
#include <glib-2.0/gio/gtlspassword.h>
#include <glib-2.0/gio/gcharsetconverter.h>
#include <glib-2.0/gio/gicon.h>
#include <glib-2.0/gio/gbufferedinputstream.h>
#include <glib-2.0/gio/gapplication.h>
#include <glib-2.0/gio/gfileattribute.h>
#include <glib-2.0/gio/gconverteroutputstream.h>
#include <glib-2.0/gio/gpollableoutputstream.h>
#include <glib-2.0/gio/gioscheduler.h>
#include <glib-2.0/gio/gdbusobjectmanager.h>
#include <glib-2.0/gio/gioenumtypes.h>
#include <glib-2.0/gio/gproxyresolver.h>
#include <glib-2.0/gio/gdbusproxy.h>
#include <glib-2.0/gio/gfilterinputstream.h>
#include <glib-2.0/gio/gmemoryinputstream.h>
#include <glib-2.0/gio/gdbusnameowning.h>
#include <glib-2.0/gio/gdbusobjectmanagerclient.h>
#include <glib-2.0/gio/gmountoperation.h>
#include <glib-2.0/gio/gvolume.h>
#include <glib-2.0/gio/gnativevolumemonitor.h>
#include <glib-2.0/gio/gfilenamecompleter.h>
#include <glib-2.0/gio/gactionmap.h>
#include <glib-2.0/gio/gcontenttype.h>
#include <glib-2.0/gio/gzlibdecompressor.h>
#include <glib-2.0/gio/ginetaddressmask.h>
#include <glib-2.0/gio/gthreadedsocketservice.h>
#include <glib-2.0/gio/gvolumemonitor.h>
#include <glib-2.0/gio/ginetsocketaddress.h>
#include <glib-2.0/gio/gproxyaddressenumerator.h>
#include <glib-2.0/gio/gmenu.h>
#include <glib-2.0/gio/gnetworkservice.h>
#include <glib-2.0/gio/gsocketaddress.h>
#include <glib-2.0/gio/gpollableinputstream.h>
#include <glib-2.0/gio/gsettingsschema.h>
#include <glib-2.0/gio/gfileicon.h>
#include <glib-2.0/gio/gsrvtarget.h>
#include <glib-2.0/gio/gmenumodel.h>
#include <glib-2.0/gio/gsocketcontrolmessage.h>
#include <glib-2.0/gio/gfile.h>
#include <glib-2.0/gio/gioerror.h>
#include <glib-2.0/gio/gseekable.h>
#include <glib-2.0/gio/gfileinputstream.h>
#include <glib-2.0/gio/gmenuexporter.h>
#include <glib-2.0/gio/gactiongroup.h>
#include <glib-2.0/gio/gdrive.h>
#include <glib-2.0/gio/gpermission.h>
#include <glib-2.0/gio/gsocketconnection.h>
#include <glib-2.0/gio/gioenums.h>
#include <glib-2.0/gio/gmemoryoutputstream.h>
#include <glib-2.0/gio/gaction.h>
#include <glib-2.0/gio/gemblemedicon.h>
#include <glib-2.0/gio/gconverterinputstream.h>
#include <glib-2.0/gio/giomodule.h>
#include <glib-2.0/gio/gresource.h>
#include <glib-2.0/gio/gsocket.h>
#include <glib-2.0/gio/gsocketconnectable.h>
#include <glib-2.0/gio/gdataoutputstream.h>
#include <glib-2.0/gio/gdbusactiongroup.h>
#include <glib-2.0/gio/gsocketaddressenumerator.h>
#include <glib-2.0/gio/gloadableicon.h>
#include <glib-2.0/gio/gdatainputstream.h>
#include <glib-2.0/gio/gtlsinteraction.h>
#include <glib-2.0/gio/gcredentials.h>
#include <glib-2.0/gio/gzlibcompressor.h>
#include <glib-2.0/gio/gvfs.h>
#include <glib-2.0/gio/gmount.h>
#include <glib-2.0/gio/gdbusobjectproxy.h>
#include <glib-2.0/gio/gdbusmessage.h>
#include <glib-2.0/gio/gremoteactiongroup.h>
#include <glib-2.0/gio/gsimpleasyncresult.h>
#include <glib-2.0/gio/gproxyaddress.h>
#include <glib-2.0/gio/giostream.h>
#include <glib-2.0/gio/gsimplepermission.h>
#include <glib-2.0/gio/gapplicationcommandline.h>
#include <glib-2.0/gio/gfileenumerator.h>
#include <glib-2.0/gio/gnetworkmonitor.h>
#include <glib-2.0/gio/giotypes.h>
#include <glib-2.0/gio/gtcpconnection.h>
#include <glib-2.0/gio/gfilemonitor.h>
#include <glib-2.0/gio/ginitable.h>
#include <glib-2.0/gio/ginputstream.h>
#include <glib-2.0/gio/goutputstream.h>
#include <glib-2.0/gio/gfileoutputstream.h>
#include <glib-2.0/gio/gtlscertificate.h>
#include <glib-2.0/gio/gdbuserror.h>
#include <glib-2.0/gio/gfilteroutputstream.h>
#include <glib-2.0/gio/gdbusmethodinvocation.h>
#include <glib-2.0/gio/gdbusnamewatching.h>
#include <glib-2.0/gio/gconverter.h>
#include <glib-2.0/gio/gdbusintrospection.h>
#include <glib-2.0/gio/ginetaddress.h>
#include <glib-2.0/gio/gnetworkaddress.h>
#include <glib-2.0/gio/gtlsfiledatabase.h>
#include <glib-2.0/gio/gsocketservice.h>
#include <glib-2.0/gio/gproxy.h>
#include <glib-2.0/gio/gresolver.h>
#include <glib-2.0/gio/gdbusobjectmanagerserver.h>
#include <glib-2.0/gio/gsocketclient.h>
#include <glib-2.0/gio/gdbusmenumodel.h>
#include <glib-2.0/gio/gtlsconnection.h>

#ifdef __cplusplus
extern "C" {
#endif


#define __GIO_GIO_H_INSIDE__


#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
