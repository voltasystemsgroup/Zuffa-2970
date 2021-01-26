#ifndef __S2_SHARP_LC_70LE745U_V1_0_PROCESSOR_H__
#define __S2_SHARP_LC_70LE745U_V1_0_PROCESSOR_H__




/*
* Constructor and Destructor
*/

/*
* DIGITAL_INPUT
*/
#define __S2_Sharp_LC_70LE745U_v1_0_Processor_RESPONSE_TIMEOUT_DIG_INPUT 0
#define __S2_Sharp_LC_70LE745U_v1_0_Processor_AUDIOMODE_DIG_INPUT 1
#define __S2_Sharp_LC_70LE745U_v1_0_Processor_SURROUNDMODE_DIG_INPUT 2
#define __S2_Sharp_LC_70LE745U_v1_0_Processor_CLOSEDCAPTION_DIG_INPUT 3
#define __S2_Sharp_LC_70LE745U_v1_0_Processor_CHANNELUP_DIG_INPUT 4
#define __S2_Sharp_LC_70LE745U_v1_0_Processor_CHANNELDOWN_DIG_INPUT 5
#define __S2_Sharp_LC_70LE745U_v1_0_Processor_AIR_DIG_INPUT 6
#define __S2_Sharp_LC_70LE745U_v1_0_Processor_CABLE_DIG_INPUT 7

#define __S2_Sharp_LC_70LE745U_v1_0_Processor_KP_DIG_INPUT 8
#define __S2_Sharp_LC_70LE745U_v1_0_Processor_KP_ARRAY_LENGTH 13
#define __S2_Sharp_LC_70LE745U_v1_0_Processor_POWER_DIG_INPUT 21
#define __S2_Sharp_LC_70LE745U_v1_0_Processor_POWER_ARRAY_LENGTH 2
#define __S2_Sharp_LC_70LE745U_v1_0_Processor_INPUT_DIG_INPUT 23
#define __S2_Sharp_LC_70LE745U_v1_0_Processor_INPUT_ARRAY_LENGTH 9
#define __S2_Sharp_LC_70LE745U_v1_0_Processor_AVMODE_DIG_INPUT 32
#define __S2_Sharp_LC_70LE745U_v1_0_Processor_AVMODE_ARRAY_LENGTH 12
#define __S2_Sharp_LC_70LE745U_v1_0_Processor_ASPECT_DIG_INPUT 44
#define __S2_Sharp_LC_70LE745U_v1_0_Processor_ASPECT_ARRAY_LENGTH 11
#define __S2_Sharp_LC_70LE745U_v1_0_Processor_VOLUMEMUTE_DIG_INPUT 55
#define __S2_Sharp_LC_70LE745U_v1_0_Processor_VOLUMEMUTE_ARRAY_LENGTH 2
#define __S2_Sharp_LC_70LE745U_v1_0_Processor_SLEEP_DIG_INPUT 57
#define __S2_Sharp_LC_70LE745U_v1_0_Processor_SLEEP_ARRAY_LENGTH 5
#define __S2_Sharp_LC_70LE745U_v1_0_Processor_EFFECT3D_DIG_INPUT 62
#define __S2_Sharp_LC_70LE745U_v1_0_Processor_EFFECT3D_ARRAY_LENGTH 8
#define __S2_Sharp_LC_70LE745U_v1_0_Processor_POLL_DIG_INPUT 70
#define __S2_Sharp_LC_70LE745U_v1_0_Processor_POLL_ARRAY_LENGTH 8
#define __S2_Sharp_LC_70LE745U_v1_0_Processor_IRKEYS_DIG_INPUT 78
#define __S2_Sharp_LC_70LE745U_v1_0_Processor_IRKEYS_ARRAY_LENGTH 55

/*
* ANALOG_INPUT
*/

#define __S2_Sharp_LC_70LE745U_v1_0_Processor_FROM_DEVICE_STRING_INPUT 0
#define __S2_Sharp_LC_70LE745U_v1_0_Processor_FROM_DEVICE_STRING_MAX_LEN 25
CREATE_STRING_STRUCT( S2_Sharp_LC_70LE745U_v1_0_Processor, __FROM_DEVICE, __S2_Sharp_LC_70LE745U_v1_0_Processor_FROM_DEVICE_STRING_MAX_LEN );



/*
* DIGITAL_OUTPUT
*/
#define __S2_Sharp_LC_70LE745U_v1_0_Processor_IWAITINGFORRESPONSE_DIG_OUTPUT 0


/*
* ANALOG_OUTPUT
*/
#define __S2_Sharp_LC_70LE745U_v1_0_Processor_CURRENT_POWER_ANALOG_OUTPUT 0
#define __S2_Sharp_LC_70LE745U_v1_0_Processor_CURRENT_INPUT_ANALOG_OUTPUT 1
#define __S2_Sharp_LC_70LE745U_v1_0_Processor_CURRENT_AVMODE_ANALOG_OUTPUT 2
#define __S2_Sharp_LC_70LE745U_v1_0_Processor_CURRENT_ASPECT_ANALOG_OUTPUT 3
#define __S2_Sharp_LC_70LE745U_v1_0_Processor_CURRENT_VOLUMEMUTE_ANALOG_OUTPUT 4
#define __S2_Sharp_LC_70LE745U_v1_0_Processor_CURRENT_SLEEP_ANALOG_OUTPUT 5
#define __S2_Sharp_LC_70LE745U_v1_0_Processor_CURRENT_EFFECT3D_ANALOG_OUTPUT 6
#define __S2_Sharp_LC_70LE745U_v1_0_Processor_CURRENT_VOLUME_ANALOG_OUTPUT 7

#define __S2_Sharp_LC_70LE745U_v1_0_Processor_NUMBER$_STRING_OUTPUT 8
#define __S2_Sharp_LC_70LE745U_v1_0_Processor_TO_DEVICE_STRING_OUTPUT 9


/*
* Direct Socket Variables
*/




/*
* INTEGER_PARAMETER
*/
/*
* SIGNED_INTEGER_PARAMETER
*/
/*
* LONG_INTEGER_PARAMETER
*/
/*
* SIGNED_LONG_INTEGER_PARAMETER
*/
/*
* INTEGER_PARAMETER
*/
/*
* SIGNED_INTEGER_PARAMETER
*/
/*
* LONG_INTEGER_PARAMETER
*/
/*
* SIGNED_LONG_INTEGER_PARAMETER
*/
/*
* STRING_PARAMETER
*/


/*
* INTEGER
*/


/*
* LONG_INTEGER
*/


/*
* SIGNED_INTEGER
*/


/*
* SIGNED_LONG_INTEGER
*/


/*
* STRING
*/
#define __S2_Sharp_LC_70LE745U_v1_0_Processor_STODEVICETEMP_STRING_MAX_LEN 10
CREATE_STRING_STRUCT( S2_Sharp_LC_70LE745U_v1_0_Processor, __STODEVICETEMP, __S2_Sharp_LC_70LE745U_v1_0_Processor_STODEVICETEMP_STRING_MAX_LEN );
#define __S2_Sharp_LC_70LE745U_v1_0_Processor_SNUMBER_STRING_MAX_LEN 10
CREATE_STRING_STRUCT( S2_Sharp_LC_70LE745U_v1_0_Processor, __SNUMBER, __S2_Sharp_LC_70LE745U_v1_0_Processor_SNUMBER_STRING_MAX_LEN );
#define __S2_Sharp_LC_70LE745U_v1_0_Processor_SCHANNELF_STRING_MAX_LEN 9
CREATE_STRING_STRUCT( S2_Sharp_LC_70LE745U_v1_0_Processor, __SCHANNELF, __S2_Sharp_LC_70LE745U_v1_0_Processor_SCHANNELF_STRING_MAX_LEN );
#define __S2_Sharp_LC_70LE745U_v1_0_Processor_SCHANNELR_STRING_MAX_LEN 9
CREATE_STRING_STRUCT( S2_Sharp_LC_70LE745U_v1_0_Processor, __SCHANNELR, __S2_Sharp_LC_70LE745U_v1_0_Processor_SCHANNELR_STRING_MAX_LEN );
#define __S2_Sharp_LC_70LE745U_v1_0_Processor_SCHANNELTEMP_STRING_MAX_LEN 30
CREATE_STRING_STRUCT( S2_Sharp_LC_70LE745U_v1_0_Processor, __SCHANNELTEMP, __S2_Sharp_LC_70LE745U_v1_0_Processor_SCHANNELTEMP_STRING_MAX_LEN );

/*
* STRUCTURE
*/

START_GLOBAL_VAR_STRUCT( S2_Sharp_LC_70LE745U_v1_0_Processor )
{
   void* InstancePtr;
   struct GenericOutputString_s sGenericOutStr;
   unsigned short LastModifiedArrayIndex;

   DECLARE_IO_ARRAY( __KP );
   DECLARE_IO_ARRAY( __POWER );
   DECLARE_IO_ARRAY( __INPUT );
   DECLARE_IO_ARRAY( __AVMODE );
   DECLARE_IO_ARRAY( __ASPECT );
   DECLARE_IO_ARRAY( __VOLUMEMUTE );
   DECLARE_IO_ARRAY( __SLEEP );
   DECLARE_IO_ARRAY( __EFFECT3D );
   DECLARE_IO_ARRAY( __POLL );
   DECLARE_IO_ARRAY( __IRKEYS );
   unsigned short __ICOMMAND;
   unsigned short __IVALUE;
   unsigned short __IVALUEIN;
   unsigned short __ALOC;
   unsigned short __IPOWERQUEUE;
   unsigned short __IINPUTQUEUE;
   unsigned short __IAVMODEQUEUE;
   unsigned short __IASPECTQUEUE;
   unsigned short __IVOLUMEMUTEQUEUE;
   unsigned short __ISLEEPQUEUE;
   unsigned short __IEFFECT3DQUEUE;
   unsigned short __IAUDIOMODEQUEUE;
   unsigned short __ISURROUNDMODEQUEUE;
   unsigned short __ICLOSEDCAPTIONQUEUE;
   unsigned short __ICHANNELREQQUEUE;
   unsigned short __ICHANNELUPQUEUE;
   unsigned short __ICHANNELDOWNQUEUE;
   unsigned short __IPOLLQUEUE;
   unsigned short __IPOWERSENT;
   unsigned short __IINPUTSENT;
   unsigned short __IAVMODESENT;
   unsigned short __IASPECTSENT;
   unsigned short __IVOLUMEMUTESENT;
   unsigned short __ISLEEPSENT;
   unsigned short __IEFFECT3DSENT;
   unsigned short __IPOLLSENT;
   unsigned short __IIRKEYSSENT;
   unsigned short __IIRKEYSQUEUE;
   DECLARE_STRING_STRUCT( S2_Sharp_LC_70LE745U_v1_0_Processor, __STODEVICETEMP );
   DECLARE_STRING_STRUCT( S2_Sharp_LC_70LE745U_v1_0_Processor, __SNUMBER );
   DECLARE_STRING_STRUCT( S2_Sharp_LC_70LE745U_v1_0_Processor, __SCHANNELF );
   DECLARE_STRING_STRUCT( S2_Sharp_LC_70LE745U_v1_0_Processor, __SCHANNELR );
   DECLARE_STRING_STRUCT( S2_Sharp_LC_70LE745U_v1_0_Processor, __SCHANNELTEMP );
   DECLARE_STRING_STRUCT( S2_Sharp_LC_70LE745U_v1_0_Processor, __FROM_DEVICE );
};

START_NVRAM_VAR_STRUCT( S2_Sharp_LC_70LE745U_v1_0_Processor )
{
};



#endif //__S2_SHARP_LC_70LE745U_V1_0_PROCESSOR_H__

