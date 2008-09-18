#if (__LSB_VERSION__ >= 10 )
#ifndef _X11_ICE_ICEMSG_H_
#define _X11_ICE_ICEMSG_H_

#include <X11/ICE/ICElib.h>
#include <X11/ICE/ICEconn.h>

#ifdef __cplusplus
extern "C" {
#endif


#if __LSB_VERSION__ >= 12
#define IceWriteData16(_iceConn,_bytes,_data)	IceWriteData (_iceConn, _bytes, (char *) _data)
#define IceWriteData32(_iceConn,_bytes,_data)	IceWriteData (_iceConn, _bytes, (char *) _data)
#define IceDisposeCompleteMessage(_iceConn,_pData)	if ((char *) _pData < _iceConn->inbuf || (char *) _pData >= _iceConn->inbufmax) free ((char *) _pData)
#define IceGetHeaderExtra(_iceConn,_major,_minor,_headerSize,_extra,_msgType,_pMsg,_pData)	if ((_iceConn->outbufptr + _headerSize + ((_extra) << 3)) > _iceConn->outbufmax) IceFlush (_iceConn) _pMsg = (_msgType *) _iceConn->outbufptr if ((_iceConn->outbufptr + _headerSize + ((_extra) << 3)) <= _iceConn->outbufmax) _pData = (char *) _pMsg + _headerSize else _pData = NULL _pMsg->majorOpcode = _major _pMsg->minorOpcode = _minor _pMsg->length = ((_headerSize - SIZEOF (iceMsg)) >> 3) + (_extra) _iceConn->outbufptr += (_headerSize + ((_extra) << 3)) _iceConn->send_sequence++
#define IceGetHeader(_iceConn,_major,_minor,_headerSize,_msgType,_pMsg)	if ((_iceConn->outbufptr + _headerSize) > _iceConn->outbufmax) IceFlush (_iceConn) _pMsg = (_msgType *) _iceConn->outbufptr _pMsg->majorOpcode = _major _pMsg->minorOpcode = _minor _pMsg->length = (_headerSize - SIZEOF (iceMsg)) >> 3 _iceConn->outbufptr += _headerSize _iceConn->send_sequence++
#define IceValidIO(_iceConn)	_iceConn->io_ok
#define IceReadData(_iceConn,_bytes,_pData)	_IceRead (_iceConn, (unsigned long) (_bytes), (char *) _pData)
#define IceReadSimpleMessage(_iceConn,_msgType,_pMsg)	_pMsg = (_msgType *) (_iceConn->inbuf)
#define IceReadPad(_iceConn,_bytes)	{ char _dummy[7] _IceRead (_iceConn, (unsigned long) (_bytes), _dummy) }
#define IceErrorHeader(_iceConn,_offendingMajorOpcode,_offendingMinorOpcode,_offendingSequenceNum,_severity,_errorClass,_dataLength)	{ iceErrorMsg *_pMsg IceGetHeader (_iceConn, _offendingMajorOpcode, ICE_Error, SIZEOF (iceErrorMsg), iceErrorMsg, _pMsg) _pMsg->length += (_dataLength) _pMsg->offendingMinorOpcode = _offendingMinorOpcode _pMsg->severity = _severity _pMsg->offendingSequenceNum = _offendingSequenceNum _pMsg->errorClass = _errorClass }
#define IceSimpleMessage(_iceConn,_major,_minor)	{ iceMsg *_pMsg IceGetHeader (_iceConn, _major, _minor, SIZEOF (iceMsg), iceMsg, _pMsg) }
#define IceWritePad(_iceConn,_bytes)	{ if ((_iceConn->outbufptr + (_bytes)) > _iceConn->outbufmax) { char _dummy[7] IceFlush (_iceConn) _IceWrite (_iceConn, (unsigned long) (_bytes), _dummy) } else { _iceConn->outbufptr += (_bytes) } }
#define IceWriteData(_iceConn,_bytes,_data)	{ if ((_iceConn->outbufptr + (_bytes)) > _iceConn->outbufmax) { IceFlush (_iceConn) _IceWrite (_iceConn, (unsigned long) (_bytes), _data) } else { memcpy (_iceConn->outbufptr, _data, _bytes) _iceConn->outbufptr += (_bytes) } }
#define IceSendData(_iceConn,_bytes,_data)	{ if (_iceConn->outbufptr > _iceConn->outbuf) IceFlush (_iceConn) _IceWrite (_iceConn, (unsigned long) (_bytes), _data) }
#define IceReadCompleteMessage(_iceConn,_headerSize,_msgType,_pMsg,_pData)	{ unsigned long _bytes IceReadMessageHeader (_iceConn, _headerSize, _msgType, _pMsg) _bytes = (_pMsg->length << 3) - (_headerSize - SIZEOF (iceMsg)) if ((_iceConn->inbufmax - _iceConn->inbufptr) >= _bytes) { _IceRead (_iceConn, _bytes, _iceConn->inbufptr) _pData = _iceConn->inbufptr _iceConn->inbufptr += _bytes } else { _pData = (char *) malloc ((unsigned) _bytes) if (_pData) _IceRead (_iceConn, _bytes, _pData) else _IceReadSkip (_iceConn, _bytes) } }
#define IceReadData16(_iceConn,_swap,_bytes,_pData)	{ _IceRead (_iceConn, (unsigned long) (_bytes), (char *) _pData) }
#define IceReadData32(_iceConn,_swap,_bytes,_pData)	{ _IceRead (_iceConn, (unsigned long) (_bytes), (char *) _pData) }
#define IceReadMessageHeader(_iceConn,_headerSize,_msgType,_pMsg)	{ _IceRead (_iceConn, (unsigned long) (_headerSize - SIZEOF (iceMsg)), _iceConn->inbufptr) _pMsg = (_msgType *) (_iceConn->inbuf) _iceConn->inbufptr += (_headerSize - SIZEOF (iceMsg)) }
#endif				/* __LSB_VERSION__ >= 1.2 */




/* Function prototypes */

#if __LSB_VERSION__ >= 40
    extern int _IceRead(IceConn, unsigned long int, char *);
    extern void _IceReadSkip(IceConn, unsigned long int);
    extern void _IceWrite(IceConn, unsigned long int, char *);
#endif				/* __LSB_VERSION__ >= 4.0 */

#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
