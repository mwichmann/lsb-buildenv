#if (__LSB_VERSION__ >= 50 )
#ifndef _TIFF_H_
#define _TIFF_H_

#include <tiffconf.h>

#ifdef __cplusplus
extern "C" {
#endif


#define CLEANFAXDATA_CLEAN	0
#define DCSIMAGERFILTER_IR	0
#define DCSIMAGERMODEL_M3	0
#define EXTRASAMPLE_UNSPECIFIED	0
#define PERSAMPLE_MERGED	0
#define PHOTOMETRIC_MINISWHITE	0
#define PIXARLOGDATAFMT_8BIT	0
#define SGILOGDATAFMT_FLOAT	0
#define SGILOGENCODE_NODITHER	0
#define DCSINTERPMODE_NORMAL	0x0
#define FAXMODE_CLASSIC	0x0000
#define JPEGCOLORMODE_RAW	0x0000
#define FAXMODE_NORTC	0x0001
#define JPEGCOLORMODE_RGB	0x0001
#define JPEGTABLESMODE_QUANT	0x0001
#define FAXMODE_NOEOL	0x0002
#define JPEGTABLESMODE_HUFF	0x0002
#define FAXMODE_BYTEALIGN	0x0004
#define FAXMODE_WORDALIGN	0x0008
#define DCSINTERPMODE_PREVIEW	0x1
#define FILETYPE_REDUCEDIMAGE	0x1
#define GROUP3OPT_2DENCODING	0x1
#define FILETYPE_PAGE	0x2
#define GROUP3OPT_UNCOMPRESSED	0x2
#define GROUP4OPT_UNCOMPRESSED	0x2
#define FILETYPE_MASK	0x4
#define GROUP3OPT_FILLBITS	0x4
#define MDI_BIGENDIAN	0x4550
#define TIFF_LITTLEENDIAN	0x4949
#define TIFF_BIGENDIAN	0x4d4d
#define MDI_LITTLEENDIAN	0x5045
#define CLEANFAXDATA_REGENERATED	1
#define COLORRESPONSEUNIT_10S	1
#define COMPRESSION_NONE	1
#define DCSIMAGERFILTER_MONO	1
#define DCSIMAGERMODEL_M5	1
#define EXTRASAMPLE_ASSOCALPHA	1
#define FILLORDER_MSB2LSB	1
#define GRAYRESPONSEUNIT_10S	1
#define INKSET_CMYK	1
#define JPEGPROC_BASELINE	1
#define OFILETYPE_IMAGE	1
#define ORIENTATION_TOPLEFT	1
#define PERSAMPLE_MULTI	1
#define PHOTOMETRIC_MINISBLACK	1
#define PIXARLOGDATAFMT_8BITABGR	1
#define PLANARCONFIG_CONTIG	1
#define PREDICTOR_NONE	1
#define RESUNIT_NONE	1
#define SAMPLEFORMAT_UINT	1
#define SGILOGDATAFMT_16BIT	1
#define SGILOGENCODE_RANDITHER	1
#define THRESHHOLD_BILEVEL	1
#define YCBCRPOSITION_CENTERED	1
#define PHOTOMETRIC_ITULAB	10
#define JPEGPROC_LOSSLESS	14
#define CLEANFAXDATA_UNCLEAN	2
#define COLORRESPONSEUNIT_100S	2
#define COMPRESSION_CCITTRLE	2
#define DCSIMAGERFILTER_CFA	2
#define DCSIMAGERMODEL_M6	2
#define EXTRASAMPLE_UNASSALPHA	2
#define FILLORDER_LSB2MSB	2
#define GRAYRESPONSEUNIT_100S	2
#define INKSET_MULTIINK	2
#define OFILETYPE_REDUCEDIMAGE	2
#define ORIENTATION_TOPRIGHT	2
#define PHOTOMETRIC_RGB	2
#define PIXARLOGDATAFMT_11BITLOG	2
#define PLANARCONFIG_SEPARATE	2
#define PREDICTOR_HORIZONTAL	2
#define RESUNIT_INCH	2
#define SAMPLEFORMAT_INT	2
#define SGILOGDATAFMT_RAW	2
#define THRESHHOLD_HALFTONE	2
#define YCBCRPOSITION_COSITED	2
#define TIFFTAG_SUBFILETYPE	254
#define TIFFTAG_OSUBFILETYPE	255
#define TIFFTAG_IMAGEWIDTH	256
#define TIFFTAG_IMAGELENGTH	257
#define TIFFTAG_BITSPERSAMPLE	258
#define TIFFTAG_COMPRESSION	259
#define TIFFTAG_PHOTOMETRIC	262
#define TIFFTAG_THRESHHOLDING	263
#define TIFFTAG_CELLWIDTH	264
#define TIFFTAG_CELLLENGTH	265
#define TIFFTAG_FILLORDER	266
#define TIFFTAG_DOCUMENTNAME	269
#define TIFFTAG_IMAGEDESCRIPTION	270
#define TIFFTAG_MAKE	271
#define TIFFTAG_MODEL	272
#define TIFFTAG_STRIPOFFSETS	273
#define TIFFTAG_ORIENTATION	274
#define TIFFTAG_SAMPLESPERPIXEL	277
#define TIFFTAG_ROWSPERSTRIP	278
#define TIFFTAG_STRIPBYTECOUNTS	279
#define TIFFTAG_MINSAMPLEVALUE	280
#define TIFFTAG_MAXSAMPLEVALUE	281
#define TIFFTAG_XRESOLUTION	282
#define TIFFTAG_YRESOLUTION	283
#define TIFFTAG_PLANARCONFIG	284
#define TIFFTAG_PAGENAME	285
#define TIFFTAG_XPOSITION	286
#define TIFFTAG_YPOSITION	287
#define TIFFTAG_FREEOFFSETS	288
#define TIFFTAG_FREEBYTECOUNTS	289
#define TIFFTAG_GRAYRESPONSEUNIT	290
#define TIFFTAG_GRAYRESPONSECURVE	291
#define TIFFTAG_GROUP3OPTIONS	292
#define TIFFTAG_T4OPTIONS	292
#define TIFFTAG_GROUP4OPTIONS	293
#define TIFFTAG_T6OPTIONS	293
#define TIFFTAG_RESOLUTIONUNIT	296
#define TIFFTAG_PAGENUMBER	297
#define COLORRESPONSEUNIT_1000S	3
#define COMPRESSION_CCITTFAX3	3
#define COMPRESSION_CCITT_T4	3
#define DCSIMAGERFILTER_OTHER	3
#define GRAYRESPONSEUNIT_1000S	3
#define OFILETYPE_PAGE	3
#define ORIENTATION_BOTRIGHT	3
#define PHOTOMETRIC_PALETTE	3
#define PIXARLOGDATAFMT_12BITPICIO	3
#define PREDICTOR_FLOATINGPOINT	3
#define RESUNIT_CENTIMETER	3
#define SAMPLEFORMAT_IEEEFP	3
#define SGILOGDATAFMT_8BIT	3
#define THRESHHOLD_ERRORDIFFUSE	3
#define TIFFTAG_COLORRESPONSEUNIT	300
#define TIFFTAG_TRANSFERFUNCTION	301
#define TIFFTAG_SOFTWARE	305
#define TIFFTAG_DATETIME	306
#define TIFFTAG_ARTIST	315
#define TIFFTAG_HOSTCOMPUTER	316
#define TIFFTAG_PREDICTOR	317
#define TIFFTAG_WHITEPOINT	318
#define TIFFTAG_PRIMARYCHROMATICITIES	319
#define TIFFTAG_COLORMAP	320
#define TIFFTAG_HALFTONEHINTS	321
#define TIFFTAG_TILEWIDTH	322
#define TIFFTAG_TILELENGTH	323
#define TIFFTAG_TILEOFFSETS	324
#define TIFFTAG_TILEBYTECOUNTS	325
#define TIFFTAG_BADFAXLINES	326
#define TIFFTAG_CLEANFAXDATA	327
#define COMPRESSION_NEXT	32766
#define COMPRESSION_CCITTRLEW	32771
#define COMPRESSION_PACKBITS	32773
#define TIFFTAG_OPIIMAGEID	32781
#define TIFFTAG_CONSECUTIVEBADFAXLINES	328
#define COMPRESSION_THUNDERSCAN	32809
#define PHOTOMETRIC_LOGL	32844
#define PHOTOMETRIC_LOGLUV	32845
#define COMPRESSION_IT8CTPAD	32895
#define COMPRESSION_IT8LW	32896
#define COMPRESSION_IT8MP	32897
#define COMPRESSION_IT8BL	32898
#define COMPRESSION_PIXARFILM	32908
#define COMPRESSION_PIXARLOG	32909
#define COMPRESSION_DEFLATE	32946
#define COMPRESSION_DCS	32947
#define TIFFTAG_REFPTS	32953
#define TIFFTAG_REGIONTACKPOINT	32954
#define TIFFTAG_REGIONWARPCORNERS	32955
#define TIFFTAG_REGIONAFFINE	32956
#define TIFFTAG_MATTEING	32995
#define TIFFTAG_DATATYPE	32996
#define TIFFTAG_IMAGEDEPTH	32997
#define TIFFTAG_TILEDEPTH	32998
#define TIFFTAG_SUBIFD	330
#define TIFFTAG_INKSET	332
#define TIFFTAG_INKNAMES	333
#define TIFFTAG_PIXAR_IMAGEFULLWIDTH	33300
#define TIFFTAG_PIXAR_IMAGEFULLLENGTH	33301
#define TIFFTAG_PIXAR_TEXTUREFORMAT	33302
#define TIFFTAG_PIXAR_WRAPMODES	33303
#define TIFFTAG_PIXAR_FOVCOT	33304
#define TIFFTAG_PIXAR_MATRIX_WORLDTOSCREEN	33305
#define TIFFTAG_PIXAR_MATRIX_WORLDTOCAMERA	33306
#define TIFFTAG_NUMBEROFINKS	334
#define TIFFTAG_WRITERSERIALNUMBER	33405
#define TIFFTAG_COPYRIGHT	33432
#define EXIFTAG_EXPOSURETIME	33434
#define EXIFTAG_FNUMBER	33437
#define TIFFTAG_DOTRANGE	336
#define TIFFTAG_TARGETPRINTER	337
#define TIFFTAG_RICHTIFFIPTC	33723
#define TIFFTAG_EXTRASAMPLES	338
#define TIFFTAG_SAMPLEFORMAT	339
#define TIFFTAG_SMINSAMPLEVALUE	340
#define TIFFTAG_IT8SITE	34016
#define TIFFTAG_IT8COLORSEQUENCE	34017
#define TIFFTAG_IT8HEADER	34018
#define TIFFTAG_IT8RASTERPADDING	34019
#define TIFFTAG_IT8BITSPERRUNLENGTH	34020
#define TIFFTAG_IT8BITSPEREXTENDEDRUNLENGTH	34021
#define TIFFTAG_IT8COLORTABLE	34022
#define TIFFTAG_IT8IMAGECOLORINDICATOR	34023
#define TIFFTAG_IT8BKGCOLORINDICATOR	34024
#define TIFFTAG_IT8IMAGECOLORVALUE	34025
#define TIFFTAG_IT8BKGCOLORVALUE	34026
#define TIFFTAG_IT8PIXELINTENSITYRANGE	34027
#define TIFFTAG_IT8TRANSPARENCYINDICATOR	34028
#define TIFFTAG_IT8COLORCHARACTERIZATION	34029
#define TIFFTAG_IT8HCUSAGE	34030
#define TIFFTAG_IT8TRAPINDICATOR	34031
#define TIFFTAG_IT8CMYKEQUIVALENT	34032
#define TIFFTAG_SMAXSAMPLEVALUE	341
#define TIFFTAG_FRAMECOUNT	34232
#define TIFFTAG_CLIPPATH	343
#define TIFFTAG_PHOTOSHOP	34377
#define TIFFTAG_XCLIPPATHUNITS	344
#define TIFFTAG_YCLIPPATHUNITS	345
#define TIFFTAG_INDEXED	346
#define COMPRESSION_JBIG	34661
#define TIFFTAG_EXIFIFD	34665
#define TIFFTAG_ICCPROFILE	34675
#define COMPRESSION_SGILOG	34676
#define COMPRESSION_SGILOG24	34677
#define TIFFTAG_JPEGTABLES	347
#define COMPRESSION_JP2000	34712
#define TIFFTAG_JBIGOPTIONS	34750
#define EXIFTAG_EXPOSUREPROGRAM	34850
#define EXIFTAG_SPECTRALSENSITIVITY	34852
#define TIFFTAG_GPSIFD	34853
#define EXIFTAG_ISOSPEEDRATINGS	34855
#define EXIFTAG_OECF	34856
#define TIFFTAG_FAXRECVPARAMS	34908
#define TIFFTAG_FAXSUBADDRESS	34909
#define TIFFTAG_FAXRECVTIME	34910
#define TIFFTAG_FAXDCS	34911
#define COMPRESSION_LZMA	34925
#define TIFFTAG_FEDEX_EDR	34929
#define TIFFTAG_OPIPROXY	351
#define EXIFTAG_EXIFVERSION	36864
#define EXIFTAG_DATETIMEORIGINAL	36867
#define EXIFTAG_DATETIMEDIGITIZED	36868
#define EXIFTAG_COMPONENTSCONFIGURATION	37121
#define EXIFTAG_COMPRESSEDBITSPERPIXEL	37122
#define EXIFTAG_SHUTTERSPEEDVALUE	37377
#define EXIFTAG_APERTUREVALUE	37378
#define EXIFTAG_BRIGHTNESSVALUE	37379
#define EXIFTAG_EXPOSUREBIASVALUE	37380
#define EXIFTAG_MAXAPERTUREVALUE	37381
#define EXIFTAG_SUBJECTDISTANCE	37382
#define EXIFTAG_METERINGMODE	37383
#define EXIFTAG_LIGHTSOURCE	37384
#define EXIFTAG_FLASH	37385
#define EXIFTAG_FOCALLENGTH	37386
#define EXIFTAG_SUBJECTAREA	37396
#define TIFFTAG_STONITS	37439
#define EXIFTAG_MAKERNOTE	37500
#define EXIFTAG_USERCOMMENT	37510
#define EXIFTAG_SUBSECTIME	37520
#define EXIFTAG_SUBSECTIMEORIGINAL	37521
#define EXIFTAG_SUBSECTIMEDIGITIZED	37522
#define COLORRESPONSEUNIT_10000S	4
#define COMPRESSION_CCITTFAX4	4
#define COMPRESSION_CCITT_T6	4
#define GRAYRESPONSEUNIT_10000S	4
#define ORIENTATION_BOTLEFT	4
#define PHOTOMETRIC_MASK	4
#define PIXARLOGDATAFMT_16BIT	4
#define SAMPLEFORMAT_VOID	4
#define EXIFTAG_FLASHPIXVERSION	40960
#define EXIFTAG_COLORSPACE	40961
#define EXIFTAG_PIXELXDIMENSION	40962
#define EXIFTAG_PIXELYDIMENSION	40963
#define EXIFTAG_RELATEDSOUNDFILE	40964
#define TIFFTAG_INTEROPERABILITYIFD	40965
#define EXIFTAG_FLASHENERGY	41483
#define EXIFTAG_SPATIALFREQUENCYRESPONSE	41484
#define EXIFTAG_FOCALPLANEXRESOLUTION	41486
#define EXIFTAG_FOCALPLANEYRESOLUTION	41487
#define EXIFTAG_FOCALPLANERESOLUTIONUNIT	41488
#define EXIFTAG_SUBJECTLOCATION	41492
#define EXIFTAG_EXPOSUREINDEX	41493
#define EXIFTAG_SENSINGMETHOD	41495
#define EXIFTAG_FILESOURCE	41728
#define EXIFTAG_SCENETYPE	41729
#define EXIFTAG_CFAPATTERN	41730
#define EXIFTAG_CUSTOMRENDERED	41985
#define EXIFTAG_EXPOSUREMODE	41986
#define EXIFTAG_WHITEBALANCE	41987
#define EXIFTAG_DIGITALZOOMRATIO	41988
#define EXIFTAG_FOCALLENGTHIN35MMFILM	41989
#define EXIFTAG_SCENECAPTURETYPE	41990
#define EXIFTAG_GAINCONTROL	41991
#define EXIFTAG_CONTRAST	41992
#define EXIFTAG_SATURATION	41993
#define EXIFTAG_SHARPNESS	41994
#define EXIFTAG_DEVICESETTINGDESCRIPTION	41995
#define EXIFTAG_SUBJECTDISTANCERANGE	41996
#define TIFF_VERSION_CLASSIC	42
#define EXIFTAG_IMAGEUNIQUEID	42016
#define TIFF_VERSION_BIG	43
#define COLORRESPONSEUNIT_100000S	5
#define COMPRESSION_LZW	5
#define GRAYRESPONSEUNIT_100000S	5
#define ORIENTATION_LEFTTOP	5
#define PHOTOMETRIC_SEPARATED	5
#define PIXARLOGDATAFMT_FLOAT	5
#define SAMPLEFORMAT_COMPLEXINT	5
#define TIFFTAG_DNGVERSION	50706
#define TIFFTAG_DNGBACKWARDVERSION	50707
#define TIFFTAG_UNIQUECAMERAMODEL	50708
#define TIFFTAG_LOCALIZEDCAMERAMODEL	50709
#define TIFFTAG_CFAPLANECOLOR	50710
#define TIFFTAG_CFALAYOUT	50711
#define TIFFTAG_LINEARIZATIONTABLE	50712
#define TIFFTAG_BLACKLEVELREPEATDIM	50713
#define TIFFTAG_BLACKLEVEL	50714
#define TIFFTAG_BLACKLEVELDELTAH	50715
#define TIFFTAG_BLACKLEVELDELTAV	50716
#define TIFFTAG_WHITELEVEL	50717
#define TIFFTAG_DEFAULTSCALE	50718
#define TIFFTAG_DEFAULTCROPORIGIN	50719
#define TIFFTAG_DEFAULTCROPSIZE	50720
#define TIFFTAG_COLORMATRIX1	50721
#define TIFFTAG_COLORMATRIX2	50722
#define TIFFTAG_CAMERACALIBRATION1	50723
#define TIFFTAG_CAMERACALIBRATION2	50724
#define TIFFTAG_REDUCTIONMATRIX1	50725
#define TIFFTAG_REDUCTIONMATRIX2	50726
#define TIFFTAG_ANALOGBALANCE	50727
#define TIFFTAG_ASSHOTNEUTRAL	50728
#define TIFFTAG_ASSHOTWHITEXY	50729
#define TIFFTAG_BASELINEEXPOSURE	50730
#define TIFFTAG_BASELINENOISE	50731
#define TIFFTAG_BASELINESHARPNESS	50732
#define TIFFTAG_BAYERGREENSPLIT	50733
#define TIFFTAG_LINEARRESPONSELIMIT	50734
#define TIFFTAG_CAMERASERIALNUMBER	50735
#define TIFFTAG_LENSINFO	50736
#define TIFFTAG_CHROMABLURRADIUS	50737
#define TIFFTAG_ANTIALIASSTRENGTH	50738
#define TIFFTAG_SHADOWSCALE	50739
#define TIFFTAG_DNGPRIVATEDATA	50740
#define TIFFTAG_MAKERNOTESAFETY	50741
#define TIFFTAG_CALIBRATIONILLUMINANT1	50778
#define TIFFTAG_CALIBRATIONILLUMINANT2	50779
#define TIFFTAG_BESTQUALITYSCALE	50780
#define TIFFTAG_RAWDATAUNIQUEID	50781
#define TIFFTAG_ORIGINALRAWFILENAME	50827
#define TIFFTAG_ORIGINALRAWFILEDATA	50828
#define TIFFTAG_ACTIVEAREA	50829
#define TIFFTAG_MASKEDAREAS	50830
#define TIFFTAG_ASSHOTICCPROFILE	50831
#define TIFFTAG_ASSHOTPREPROFILEMATRIX	50832
#define TIFFTAG_CURRENTICCPROFILE	50833
#define TIFFTAG_CURRENTPREPROFILEMATRIX	50834
#define TIFFTAG_JPEGPROC	512
#define TIFFTAG_JPEGIFOFFSET	513
#define TIFFTAG_JPEGIFBYTECOUNT	514
#define TIFFTAG_JPEGRESTARTINTERVAL	515
#define TIFFTAG_JPEGLOSSLESSPREDICTORS	517
#define TIFFTAG_JPEGPOINTTRANSFORM	518
#define TIFFTAG_JPEGQTABLES	519
#define TIFFTAG_JPEGDCTABLES	520
#define TIFFTAG_JPEGACTABLES	521
#define TIFFTAG_YCBCRCOEFFICIENTS	529
#define TIFFTAG_YCBCRSUBSAMPLING	530
#define TIFFTAG_YCBCRPOSITIONING	531
#define TIFFTAG_REFERENCEBLACKWHITE	532
#define COMPRESSION_OJPEG	6
#define ORIENTATION_RIGHTTOP	6
#define PHOTOMETRIC_YCBCR	6
#define SAMPLEFORMAT_COMPLEXIEEEFP	6
#define TIFFTAG_DCSHUESHIFTVALUES	65535
#define TIFFTAG_FAXMODE	65536
#define TIFFTAG_JPEGQUALITY	65537
#define TIFFTAG_JPEGCOLORMODE	65538
#define TIFFTAG_JPEGTABLESMODE	65539
#define TIFFTAG_FAXFILLFUNC	65540
#define TIFFTAG_PIXARLOGDATAFMT	65549
#define TIFFTAG_DCSIMAGERTYPE	65550
#define TIFFTAG_DCSINTERPMODE	65551
#define TIFFTAG_DCSBALANCEARRAY	65552
#define TIFFTAG_DCSCORRECTMATRIX	65553
#define TIFFTAG_DCSGAMMA	65554
#define TIFFTAG_DCSTOESHOULDERPTS	65555
#define TIFFTAG_DCSCALIBRATIONFD	65556
#define TIFFTAG_ZIPQUALITY	65557
#define TIFFTAG_PIXARLOGQUALITY	65558
#define TIFFTAG_DCSCLIPRECTANGLE	65559
#define TIFFTAG_SGILOGDATAFMT	65560
#define TIFFTAG_SGILOGENCODE	65561
#define TIFFTAG_LZMAPRESET	65562
#define TIFFTAG_PERSAMPLE	65563
#define COMPRESSION_JPEG	7
#define ORIENTATION_RIGHTBOT	7
#define TIFFTAG_XMLPACKET	700
#define COMPRESSION_ADOBE_DEFLATE	8
#define ORIENTATION_LEFTBOT	8
#define PHOTOMETRIC_CIELAB	8
#define PHOTOMETRIC_ICCLAB	9
#define FAXMODE_CLASSF	FAXMODE_NORTC


    typedef TIFF_INT8_T int8;

    typedef TIFF_INT16_T int16;

    typedef TIFF_INT32_T int32;

    typedef TIFF_UINT64_T uint64;

    typedef int uint16_vap;

    typedef TIFF_UINT8_T uint8;

    typedef TIFF_UINT16_T uint16;

    typedef TIFF_UINT32_T uint32;


    typedef struct {
	uint16 tiff_magic;
	uint16 tiff_version;
    } TIFFHeaderCommon;

    typedef struct {
	uint16 tiff_magic;
	uint16 tiff_version;
	uint32 tiff_diroff;
    } TIFFHeaderClassic;

    typedef struct {
	uint16 tiff_magic;
	uint16 tiff_version;
	uint16 tiff_offsetsize;
	uint16 tiff_unused;
	uint64 tiff_diroff;
    } TIFFHeaderBig;

    typedef enum {
	TIFF_NOTYPE,
	TIFF_BYTE,
	TIFF_ASCII,
	TIFF_SHORT,
	TIFF_LONG,
	TIFF_RATIONAL,
	TIFF_SBYTE,
	TIFF_UNDEFINED,
	TIFF_SSHORT,
	TIFF_SLONG,
	TIFF_SRATIONAL,
	TIFF_FLOAT,
	TIFF_DOUBLE,
	TIFF_IFD,
	TIFF_LONG8,
	TIFF_SLONG8,
	TIFF_IFD8
    } TIFFDataType;

#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
