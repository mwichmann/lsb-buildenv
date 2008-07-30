#if (__LSB_VERSION__ >= 32 )
#ifndef _ALSA_INSTR_H_
#define _ALSA_INSTR_H_


#ifdef __cplusplus
extern "C" {
#endif


#if __LSB_VERSION__ < 40
#define SND_SEQ_INSTR_ID_DLS1	"DLS1"
#define SND_SEQ_INSTR_ID_DLS2	"DLS2"
#define SND_SEQ_INSTR_ID_GUS_PATCH	"GUS Patch"
#define SND_SEQ_INSTR_ID_INTERWAVE	"Interwave FFFF"
#define SND_SEQ_INSTR_ID_OPL2_3	"OPL2/3 FM"
#define SND_SEQ_INSTR_ID_OPL4	"OPL4"
#define SND_SEQ_INSTR_ID_SIMPLE	"Simple Wave"
#define SND_SEQ_INSTR_ID_SOUNDFONT	"SoundFont"
#define SND_SEQ_INSTR_QUERY_FOLLOW_ALIAS	(1<<0)
#define SND_SEQ_INSTR_TYPE0_DLS1	(1<<0)
#define SND_SEQ_INSTR_TYPE1_SIMPLE	(1<<0)
#define SND_SEQ_INSTR_TYPE2_OPL2_3	(1<<0)
#define SND_SEQ_INSTR_TYPE0_DLS2	(1<<1)
#define SND_SEQ_INSTR_TYPE1_SOUNDFONT	(1<<1)
#define SND_SEQ_INSTR_TYPE2_OPL4	(1<<1)
#define SND_SEQ_INSTR_TYPE1_GUS_PATCH	(1<<2)
#define SND_SEQ_INSTR_TYPE1_INTERWAVE	(1<<3)
#define SND_SEQ_INSTR_ATYPE_DATA	0
#define SND_SEQ_INSTR_FREE_CMD_ALL	0
#define SND_SEQ_INSTR_GET_CMD_FULL	0
#define SND_SEQ_INSTR_PUT_CMD_CREATE	0
#define SND_SEQ_INSTR_ATYPE_ALIAS	1
#define SND_SEQ_INSTR_FREE_CMD_PRIVATE	1
#define SND_SEQ_INSTR_GET_CMD_PARTIAL	1
#define SND_SEQ_INSTR_PUT_CMD_REPLACE	1
#define SND_SEQ_INSTR_FREE_CMD_CLUSTER	2
#define SND_SEQ_INSTR_PUT_CMD_MODIFY	2
#define SND_SEQ_INSTR_FREE_CMD_SINGLE	3
#define SND_SEQ_INSTR_PUT_CMD_ADD	3
#define SND_SEQ_INSTR_PUT_CMD_REMOVE	4
#endif				/* __LSB_VERSION__ < 4.0 */



#if __LSB_VERSION__ < 40
    typedef void snd_instr_fm_t;

    typedef struct sndrv_seq_instr_header snd_instr_header_t;

    typedef void snd_instr_iwffff_t;

    typedef void snd_instr_simple_t;

    typedef struct _snd_iwffff_handle snd_iwffff_handle_t;

#endif				/* __LSB_VERSION__ < 4.0 */

#ifdef __cplusplus
}
#endif
#endif				/* protection */
#endif				/* LSB version */
