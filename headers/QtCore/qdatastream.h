#if (__LSB_VERSION__ >= 31 )
#ifndef _QTCORE_QDATASTREAM_H_
#define _QTCORE_QDATASTREAM_H_

class QDataStream;
// *INDENT-OFF*

class QDataStream;

enum QDataStream::Version	
{
Qt_1_0 = 1,	
Qt_2_0 = 2,	
Qt_2_1 = 3,	
Qt_3_0 = 4,	
Qt_3_1 = 5,	
Qt_3_3 = 6,	
Qt_4_0 = 7,	
Qt_4_1 = 7
}
;

enum QDataStream::ByteOrder	
{
BigEndian = 0,	
LittleEndian = 1
}
;

enum QDataStream::Status	
{
Ok = 0,	
ReadPastEnd = 1,	
ReadCorruptData = 2
}
;


/* Function prototypes */

#if __LSB_VERSION__ >= 32
extern 
