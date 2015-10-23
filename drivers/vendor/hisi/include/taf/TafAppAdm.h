/******************************************************************************

                  ��Ȩ���� (C), 2001-2011, ��Ϊ�������޹�˾

 ******************************************************************************
  �� �� ��   : TafAppAdm.h
******************************************************************************/

#ifndef __TAF_APP_ADM_H__
#define __TAF_APP_ADM_H__


#include "TafTypeDef.h"

#ifdef  __cplusplus
#if  __cplusplus
extern "C"{
#endif
#endif


#pragma pack(4)

/* ��־������ҵ��ı��뿪�أ����ⵥA32D12736 */
#define  TAF_FEATURE_NO_VOICE_SERVICE


#ifndef TAF_FEATURE_NO_VOICE_SERVICE

/* error code in ADM*/
#define ADM_SUCCESS                 0
#define ADM_ERR_ERROR               1
#define ADM_ERR_DEV_OCCUPIED        2
#define ADM_ERR_WRONG_SOURCE        3
#define ADM_ERR_DEV_ID_ERROR        4
#define ADM_ERR_WRITE_FORBIDDEN     5
#define ADM_ERR_VOL_EXCEED          6
#define ADM_ERR_SEND_MSG_FAILURE    7
#define ADM_ERR_MUTE_VALUE_ERROR    8
#define ADM_ERR_MALLOC_FAILURE      9


#define ADM_VOL_TYPE_RX             0
#define ADM_VOL_TYPE_TX             1
#define ADM_VOL_TYPE_SIDE           2
#define ADM_SERVICE_TYPE_VOICE      0


#define ADM_SOURCE_VOICE  0
#define ADM_SOURCE_MEDIA  1
#define ADM_SOURCE_TONE   2
#define ADM_DEVICE_VOICE_ACTIVE 2
#define ADM_DEVICE_MEDIA_ACTIVE 1
#define ADM_DEVICE_INACTIVE 0


#define ADM_TRUE    1
#define ADM_FALSE   0

#define ADM_PRIORITY_VOICE          0
#define ADM_PRIORITY_RING           1
#define ADM_PRIORITY_RESERV         2
#define ADM_PRIORITY_MEDIA          3

#define ADM_RSV_PID         0
#define ADM_AMR_RATE        1
#define ADM_DTX_MODE        2
#define ADM_RADIO_MODE  3

/*���Ŷ���ʱ�������ص��������� */
typedef TAF_VOID PauseCallBack();
typedef TAF_VOID PlayCallBack(TAF_UINT8* buf, TAF_UINT32 length, TAF_INT32 loop);
typedef TAF_VOID ResumeCallBack();

typedef TAF_INT32 AudioDevID;

typedef struct PlayToneCallbackStru
{
    PauseCallBack  *pPause;
    PlayCallBack   *pPlay;
    ResumeCallBack *pResume;
}PlayToneCallback;



typedef enum
{
    RING_SID = 0,               /* �绰�澯��   loop */
    PWRUP_SID,                  /* �����ϵ���ʾ��1000ms */
    DIAL_TONE_SID,              /* ������ʾ��loop */
    CALL_SID,                   /* ������loop */
    INT_SID,                    /* ������1   loop */
    ABRV_INT_SID,               /* ������2   4000ms */
    REORD_SID,                  /* ����ӵ����loop  */
    BUSY_SID,                   /* æ��loop */
    CONFIRM_TONE_SID,           /* ֤ʵ�� 600ms */
    CALL_WAITING_SID,           /* ���еȴ���200ms */
    OFF_HOOK_SID,               /* Off-Hook ������loop */
    FADE_TONE_SID,              /* ˥����1180ms */
    SVC_CHANGE_SID,             /* ҵ��ı���290ms */
    ALTERNATE_REORDER_SID,      /* ����ʧ�ܻ�������1790ms */
    MESSAGE_WAITING_SID,        /* ��Ϣ�ȴ���1400ms */
    PIP_TONE_SID,               /* Pip��800ms */
    SND_SVC_ACQ_SID,             /* ����ҵ����ʾ�� 320ms */
    SND_SVC_LOST_SID,            /* ҵ��LOST��ʾ�� 320ms */
    SND_SVC_CHNG_MORE_PREF_SID,  /* �������϶���ѡҵ����ʾ�� 200ms */
    SND_SVC_CHNG_LESS_PREF_SID,  /* ������������ѡҵ����ʾ�� 200ms */
    SND_EXT_PWR_ON_SID,          /* ��ӵ�ԴON��     150ms       */
    SND_EXT_PWR_OFF_SID,         /* ��ӵ�ԴOFF��   150ms       */
    USER_RING1_SID,              /* �Դ�����1                    */
    USER_RING2_SID,              /* �Դ�����2                    */
    USER_RING3_SID,              /* �Դ�����3                    */
    USER_RING4_SID,              /* �Դ�����4                    */
    USER_RING5_SID,              /* �Դ�����5                    */
    USER_RING6_SID,              /* �Դ�����6                    */
    USER_RING7_SID,              /* �Դ�����7                    */
    USER_RING8_SID,              /* �Դ�����8                    */
    USER_RING9_SID,              /* �Դ�����9                    */
    USER_RING10_SID,             /* �Դ�����10                   */
    SPECIAL_INFO_CADENCE_SID,    /* ������Ϣ��     1990ms  */
    SUBSCRIBER_BUSY_SID,         /* Subscriberæ��           loop      */
    CONGESTION_SID,              /* ������         loop             */
    ERROR_INFORMATION_SID,       /* ������Ϣ��    2660ms        */
    NUMBER_UNOBTAINABLE_SID,     /* ���������   2660ms         */
    AUTH_FAILURE_SID,            /* ����ʧЧ��      2660ms    */
    DTMFTest_SID,                  /* DTMF������   loop */
    KEY_TONE0_SID,               /* ����0 tone��  loop */
    KEY_TONE1_SID,               /* ����1 tone��  loop */
    KEY_TONE2_SID,               /* ����2 tone��  loop */
    KEY_TONE3_SID,               /* ����3 tone��  loop */
    KEY_TONE4_SID,               /* ����4 tone��  loop */
    KEY_TONE5_SID,               /* ����5 tone��  loop */
    KEY_TONE6_SID,               /* ����6 tone��  loop */
    KEY_TONE7_SID,               /* ����7 tone��  loop */
    KEY_TONE8_SID,               /* ����8 tone��  loop */
    KEY_TONE9_SID,               /* ����9 tone��  loop */
    KEY_TONEA_SID,               /* ����A tone��  loop */
    KEY_TONEB_SID,               /* ����B tone��  loop */
    KEY_TONEC_SID,               /* ����C tone��  loop */
    KEY_TONED_SID,               /* ����D tone��  loop */
    KEY_TONEE_SID,               /* ����E tone��  loop */
    KEY_TONEF_SID                /* ����F tone��  loop */
    /*NULL */
}SoundId;

typedef struct{
    unsigned int iRxVol;
    unsigned int iTxVol;
    unsigned int iSideVol;
}ExtraArg;

TAF_INT32 Adm_SendDTMF(SoundId usSoundId, ExtraArg *pArg);
TAF_INT32 Adm_StopDTMF();
TAF_INT32 Adm_SetParam(TAF_UINT8 ucParamId, TAF_UINT32 uiValue);
TAF_INT32 Adm_Open(TAF_UINT8 ucPriority, PlayToneCallback *cbPlayTone);
TAF_INT32 Adm_Close(AudioDevID audioDevId);
TAF_INT32 Adm_SetVolume(TAF_UINT8 ucServiceType, TAF_UINT8 ucVolType, TAF_UINT32 iVol);
TAF_INT32 Adm_SetMute(TAF_UINT8 ucServiceType, TAF_UINT8 ucVolType, TAF_UINT8 ucMute);
#endif /* TAF_FEATURE_NO_VOICE_SERVICE */

#if ((TAF_OS_VER == TAF_WIN32) || (TAF_OS_VER == TAF_NUCLEUS))
#pragma pack()
#else
#pragma pack(0)
#endif

#ifdef __cplusplus
    #if __cplusplus
        }
    #endif
#endif

#endif /* end of TafAppAdm.h */