��ݼ�[Ca]��
F11����/�رձʼ�
F2�� ��ѡ���·��/�ļ�; �ļ���+��չ��
F5�� ��sln�ļ�/cmd����+�Ҽ�ճ��; ��ǰ����set��cmd��make��open��vc��vs08��ͷ; Ĭ�ϴ��ļ�+�ؼ���(��)


--------------------------------------------------
// �鿴--ѡ����ʷ��Ŀ�б�: 
Save:SI\node\Macro_Set_Note.h	spr-note-set

--------------------------------------------------

// Ĭ����Ŀ(�����ϴ�svn) [Cs]:
set SE039_YST_E18_E250_F2
	
// ��ǰ��Ŀ:
set SE818BC_BY_S018_JX_64_64_F3
set SE818BC_BY_S018_JX_64_64_F3
set SE8307_KM_C2406_QMobile_F3
set SE039_ANSD_A900_NBL_BT_F4


setEnd:��setEnd�п�ʼ�滻����(��һ��ѡ��->��ǰѡ��)

--------------------------------------------------

6531E����ָ��[Cc]:
cmd:F:\6531E_16A\cmd

����:
open: project\SE818BC_BY_S018_JX_64_64_F3\New_common.bat




����ģ��
make p=SE818BC_BY_S018_JX_64_64_F3 m=custom_drv
make p=SE818BC_BY_S018_JX_64_64_F3 image

�� (1������)
make p=SE818BC_BY_S018_JX_64_64_F3 m=custom_drv update image
make p=SE818BC_BY_S018_JX_64_64_F3 m=custom_drv update image job=4
make p=SE818BC_BY_S018_JX_64_64_F3 m=resource job=4


������ģ��
make p=SE818BC_BY_S018_JX_64_64_F3 m=app update image



ģ������
make p=SE818BC_BY_S018_JX_64_64_F3 m=simulator
vc: build\SE818BC_BY_S018_JX_64_64_F3_builddir\win\simulator.dsw



���ع���[Ct]
open tools\DEBUG_TOOL\ResearchDownload\Bin\ResearchDownload.exe

D:\6531G_SVN\build\SE818BC_BY_S018_JX_64_64_F3_builddir\img



--------------------------------------------------




--------------------------------------------------
Make ��������[Cf]:
	��:
project\SE818BC_BY_S018_JX_64_64_F3\project_SE818BC_BY_S018_JX_64_64_F3.mk LCD_CHIP
MS_Customize\source\product\config\SE818_MB\lcm_cfg_info.c
	����ͷ:
project\SE818BC_BY_S018_JX_64_64_F3\project_SE818BC_BY_S018_JX_64_64_F3.mk SENSOR_CHIP
	������:
chip_drv\chip_module\analog\sr1161\analog_phy_sr1161.c SBD_LCM_BL_25MA_SUPPORT

	�޸İ����ڵ㣺
MS_Ref\source\lcd\src\lcd.c GC9306_Ex
MS_Customize\source\product\driver\lcd\tft_GC9300.c GC9300_Ex(void)


	
	�汾�ţ�
project\SE818BC_BY_S018_JX_64_64_F3\resource\version_software_mocor.h


----------------------------------------------------------------------------

�˵�[m]

----------------------------------------------------------------------------

��Դ

----------------------------------------------------------------------------

��Ŀ�ļ�:
	
----------------------------------------------------------------------------

����[s]:		���ʼ��Ǿɵģ�
	˫����ͷ(Ĭ�ϵ�)��
project\SE818BC_BY_S018_JX_64_64_F3\project_SE818BC_BY_S018_JX_64_64_F3.mk SBD_DUAL_CAMERA_SUPPORT

	��Ƶ / 2Ƶ����;������2Ƶ��
project\SE818BC_BY_S018_JX_64_64_F3\project_SE818BC_BY_S018_JX_64_64_F3.mk __SBD_RF_TWO_BAND_SUPPORT__
project\SE818BC_BY_S018_JX_64_64_F3\project_SE818BC_BY_S018_JX_64_64_F3.mk SBD_RF_TWO_BAND_SUPPORT

	������
project\SE818BC_BY_S018_JX_64_64_F3\project_SE818BC_BY_S018_JX_64_64_F3.mk __HHT_REMOVE_VIBRA__ =TRUE

	˫����
project\SE818BC_BY_S018_JX_64_64_F3\project_SE818BC_BY_S018_JX_64_64_F3.mk MMI_MULTI_SIM_SYS = DUAL
project\SE818BC_BY_S018_JX_64_64_F3\project_SE818BC_BY_S018_JX_64_64_F3.mk MULTI_SIM_SYS = DUAL
nv_type_4band.nvm	0x10203, 0x1000203,    ����
	�������룺
TXT_SIM_SEL_SIM1--pb	--	 SIM1
SIM1 network account

	
	23����
project\SE818BC_BY_S018_JX_64_64_F3\project_SE818BC_BY_S018_JX_64_64_F3.mk _23KEY
project\SE818BC_BY_S018_JX_64_64_F3\project_SE818BC_BY_S018_JX_64_64_F3.mk MMI_MULTI_GREEN_KEY =DUAL �̼�
	
	FM��
project\SE818BC_BY_S018_JX_64_64_F3\project_SE818BC_BY_S018_JX_64_64_F3.mk MMI_FM_OPEN_SPEAK_OPEN_SUPPORT=TRUE
project\SE818BC_BY_S018_JX_64_64_F3\project_SE818BC_BY_S018_JX_64_64_F3.mk SBD_FM_OPEN_SPEAK_OPEN_SUPPORT=TRUE
project\SE818BC_BY_S018_JX_64_64_F3\project_SE818BC_BY_S018_JX_64_64_F3.mk HHT_MMI_FMTEST_OPEN_SPEAK = TRUE
project\SE818BC_BY_S018_JX_64_64_F3\project_SE818BC_BY_S018_JX_64_64_F3.mk SBD_FM_THRESHOLD_TYPE1=TRUE 	   #�����ѵ�̨��һ��
project\SE818BC_BY_S018_JX_64_64_F3\project_SE818BC_BY_S018_JX_64_64_F3.mk HHT_FM_USE_GSM_ANT_SIGNAL_STRONG=TRUE	 #���ʱ��


	����K�๦�ţ�
project\SE818BC_BY_S018_JX_64_64_F3\project_SE818BC_BY_S018_JX_64_64_F3.mk __HHT_EXT_AMPLIFIER_CLASS_K__ = TRUE

	���2��1��FALSE��������Ͳ����(Ӳ������һ)���ֿ������2��1
project\SE818BC_BY_S018_JX_64_64_F3\project_SE818BC_BY_S018_JX_64_64_F3.mk __HHT_EARPIECE_SPEAK_USE_ONE__ = FALSE
project\SE818BC_BY_S018_JX_64_64_F3\project_SE818BC_BY_S018_JX_64_64_F3.mk SBD_EARPIECE_SPEAK_USE_ONE
project\SE818BC_BY_S018_JX_64_64_F3\project_SE818BC_BY_S018_JX_64_64_F3.mk CUSTOMER = S039_JX_2IN1	                 # ����һ����Ƶ����K�����Ƶ��ͬ��
\audio\audio_dsp_codec_6531.nvm    0x6C0/Ӳ��2��1;    0x638/���2��1

	����һ��
project\SE818BC_BY_S018_JX_64_64_F3\project_SE818BC_BY_S018_JX_64_64_F3.mk CUS_ADD_SHAKE= TRUE  ����һ���Ⱥ�        
project\SE818BC_BY_S018_JX_64_64_F3\project_SE818BC_BY_S018_JX_64_64_F3.mk VIRTUAL_VIBRATE_FUNC
project\SE818BC_BY_S018_JX_64_64_F3\project_SE818BC_BY_S018_JX_64_64_F3.mk __SPEAKER_VIB_INTENSITY_WEAK__
project\SE818BC_BY_S018_JX_64_64_F3\project_SE818BC_BY_S018_JX_64_64_F3.mk __HHT_EARPIECE_SPEAK_USE_ONE__ = TRUE ����һͬʱ��


	�ֵ�Ͳ
project\SE818BC_BY_S018_JX_64_64_F3\project_SE818BC_BY_S018_JX_64_64_F3.mk HHT_ADD_TORCHLIGHT= TRUE
project\SE818BC_BY_S018_JX_64_64_F3\project_SE818BC_BY_S018_JX_64_64_F3.mk SBD_ADD_TORCHLIGHT			 #6531E
	
	�����
project\SE818BC_BY_S018_JX_64_64_F3\project_SE818BC_BY_S018_JX_64_64_F3.mk DC_FLASH_SUPPORT= TRUE
	
	U��
project\SE818BC_BY_S018_JX_64_64_F3\project_SE818BC_BY_S018_JX_64_64_F3.mk UMEM_PRTITION _MICRO

	�ֿ⣺
MS_MMI\source\resource\mmi_res_prj_def.h
MS_MMI\source\resource\Common\FONT
open tools\DEBUG_TOOL\FONTTOOL\Bin\FontTool.exe


	�ͺ�--MSD, ���룺
project\SE818BC_BY_S018_JX_64_64_F3\project_SE818BC_BY_S018_JX_64_64_F3.mk MMI_MSD_SUPPORT
//TXT_MSD_NOTIFY_INFO

----------------------------------------------------------------------------

Idle[i]: ����

	���Ź��
project\SE818BC_BY_S018_JX_64_64_F3\project_SE818BC_BY_S018_JX_64_64_F3.mk SENSOR_CHIP
MS_MMI\source\mmi_gui\include\guiedit.h GUIEDIT_DIAL_IMAGE_SPACE_X
MS_MMI\source\mmi_gui\source\editbox\c\guiedit_text.c GUIEDIT_DIAL_IMAGE_SPACE_X
MS_MMI\source\mmi_gui\source\editbox\c\guiedit_text.c GUIEDIT_GetCursorPosForPN

----------------------------------------------------------------------------
	
�˵�

----------------------------------------------------------------------------

����[t]��

----------------------------------------------------------------------------

trace[t]:
project\SE818BC_BY_S018_JX_64_64_F3\project_SE818BC_BY_S018_JX_64_64_F3.mk RELEASE_INFO = FALSE
project\SE818BC_BY_S018_JX_64_64_F3\project_SE818BC_BY_S018_JX_64_64_F3.mk MEMORY_DEBUG_SUPPORT = TRUE
project\SE818BC_BY_S018_JX_64_64_F3\project_SE818BC_BY_S018_JX_64_64_F3.mk TRACE_INFO_SUPPORT = TRUE
project\SE818BC_BY_S018_JX_64_64_F3\project_SE818BC_BY_S018_JX_64_64_F3.mk PRODUCT_BASELIB_DIR = sc6531_32X32_320X240BAR_QW_ATV_formal_trace

ץtrace:
open: tools\DEBUG_TOOL\CHANNELSERVER\Bin\ChannelServer.exe
//	1) ����USB��, ѡ�� USB LOG��ѡ��
//	2) Channel Server Configure:
//		MS: Type:	UART
//		   Port:  SPRD U2S Diag(COM12)	---------------- Ҫ�� 
//		                       (COM12������USB�Ķ˿�)
//		   BaudRate:115200	---------------------------- Ҫ�� 
//		   Endian: self adaptive
//		
//		WinSocket Server:
//		   Port: 36666
//		   Timeout: 3 (s)
//	3) Connect MSSim;channel��ͼ�꽫��̸��ɫ�ĸ��ɴ���ɫ
// ����:
// 1. ������ͬ, ������ʾ SPRD Diag(COM12)
// 2. һֱ����log, ��ԭsvn���������


open: tools\DEBUG_TOOL\LOGEL\Bin\ArmLogel.exe
//	1) ����USB�ߣ�ѡ��USB LOG��ѡ��
//	2) ���� ArmLogel.exe
//	3) �˵�ѡ��LOG����һ�е�����ߵ�DLLͼ�ꣻ
//	4) DLLͼ��仯�󣬵���ڶ���ͼ��Connect;
//	5) ��������ͼ��Logging
//	6) �����������ͼ��Stop
//	7) ���log����ͼ��


// NV�޸�:
open: tools\DEBUG_TOOL\NVEDITOR\Bin\NVEditor.exe
// ѡ��:
build\SE818BC_BY_S018_JX_64_64_F3_builddir\img\nvitem\nvitem.prj
F:\6531G_16A_MP_W17.43.4\build\SE818BC_BY_S018_JX_64_64_F3_builddir\img\nvitem
// ���� Armlogץȡ:
//	dsp_log_switch = 0x0 //
//	enable_arm_log = 0x1
//	com_debug =  0; 		 //0xFF
//	arm_log_uart_id = 0x1 //
//	dsp_log_uart_id = 0x0 //

// ���� Dsplogץȡ:
//	dsp_log_switch = 0x1 //
//	enable_arm_log = 0x1
//	com_debug = 0;  		//0xFF
//	arm_log_uart_id = 0x0 //
//	dsp_log_uart_id = 0x1 //


// ���ø�:
//	com_data = 0xFF               (USB:0xFF, ��ͬ)
//	com_debug_baud_rate = 0x70800 (USB:0x1C200,չѸû˵���Ҫ��)


// NV����(������ɰ��):
open: tools\DEBUG_TOOL\ResearchDownload\Bin\ResearchDownload.exe
// ֻѡ��: FDL1, FDL1, NV
// replace NV bin:
build\PS102_DJTX_G182_W25G2_F1_builddir\img\nvitem\nvitem.bin
// ���� CUSTOMER = PS102_KLS_2IN1
common\nv_parameters\PS102_MB\PS102_KLS_2IN1\nv_type\nv_type_4band.nvm =^com_debug			 //ITEM_NAME 0x1
common\nv_parameters\PS102_MB\PS102_KLS_2IN1\nv_type\nv_type_4band.nvm =^com_debug_baud_rate //ITEM_NAME 0x70800
common\nv_parameters\PS102_MB\PS102_KLS_2IN1\nv_type\....		   nvm =^DSP_log_switch 	 //ITEM_NAME 0x0
//File��>Save Image��File��>Save Project


USBץtrace:
//����ģʽ����:
//8 para set->arm log:open
//8 para set->dsp log:open
//8 para set->usb log:open
//8 para set->debug->debug alert:open  (��ȷ��������)

uartץtrace:
//����ģʽ����:
//8 para set->arm log:open
//8 para set->dsp log:open
//8 para set->usb log:close (��ȷ��)
//8 para set->debug->assert:open  (��ȷ��������)


ץtrace--ѹ���ռ�:
project\SE818BC_BY_S018_JX_64_64_F3\project_SE818BC_BY_S018_JX_64_64_F3.mk FM_SUPPORT = NONE 
project\SE818BC_BY_S018_JX_64_64_F3\project_SE818BC_BY_S018_JX_64_64_F3.mk VIDEO_PLAYER_SUPPORT = FALSE
project\SE818BC_BY_S018_JX_64_64_F3\project_SE818BC_BY_S018_JX_64_64_F3.mk PIC_VIEWER_SUPPORT = FALSE


--------------------------------------------------
CE ������Ƶ�汾:
project\SE818BC_BY_S018_JX_64_64_F3\project_SE818BC_BY_S018_JX_64_64_F3.mk PRODUCT_BASELIB_DIR = sc6531efm_32X32_320X240BAR_AB_CE
project\SE818BC_BY_S018_JX_64_64_F3\project_SE818BC_BY_S018_JX_64_64_F3.mk BT_NONSIG_SUPPORT = TRUE
	

----------------------------------------------------------------------------


��չ��Ŀ��





----------------------------------------------------------------------------

Build����[b]:

build\SE818BC_BY_S018_JX_64_64_F3_builddir\log\midisoundbank.log �ļ��޷�ɾ�� 
build\SE818BC_BY_S018_JX_64_64_F3_builddir\log\resource.log ERROR
build\SE818BC_BY_S018_JX_64_64_F3_builddir\log\caf_templete.log ERROR
build\SE818BC_BY_S018_JX_64_64_F3_builddir\tmp/SC6531EFM.def ��
build\SE818BC_BY_S018_JX_64_64_F3_builddir\tmp\app.macro �鿴���Ƿ����
	

findstr /s /i "ERROR" *.log>aaaa.txt



1 ���ռ�:
~ 2����Ϸ		  12K
~ һ��APN��¼ռ��0.163kb��3000~

2 ����ʱ��
gettime.pl

[Cg]


