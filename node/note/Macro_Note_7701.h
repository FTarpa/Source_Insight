��ݼ�[Ca]��
F11����/�رձʼ�
F2�� ��ѡ���·��/�ļ�; �ļ���+��չ��
F5�� ��sln�ļ�/cmd����+�Ҽ�ճ��; ��ǰ����set��cmd��make��open��vc��vs08��ͷ; Ĭ�ϴ��ļ�+�ؼ���(��)

--------------------------------------------------

Ĭ��(�����ϴ�svn)[Cs]:
set PS102_KLS_W395_ZX_W1G1_F2 PS102

��ǰproject:
set PS102_KLS_W395_ZX_W1G1_F2 PS102
set PS102_SPEED_ZX_QVGA_F1 PS102
set PS102_DJTX_G182_W25G2_F1 PS102
	SE039_YST_E18_E250_F2

setEnd:��setEnd�п�ʼ�滻����(��һ��ѡ��->��ǰѡ��)

--------------------------------------------------

7701����ָ��[Cc]:
cmd:F:\6531E_16A\cmd

����:
open:project\PS102\PS102_KLS_W395_ZX_W1G1_F2\New_common.bat





����ģ��
make p=PS102_KLS_W395_ZX_W1G1_F2 m=custom_drv
make p=PS102_KLS_W395_ZX_W1G1_F2 image


�� (1������)
make p=PS102_KLS_W395_ZX_W1G1_F2 m=custom_drv update image
make p=PS102_KLS_W395_ZX_W1G1_F2 m=custom_drv update image job=4
make p=PS102_KLS_W395_ZX_W1G1_F2 m=resource job=4


������ģ��
make p=PS102_KLS_W395_ZX_W1G1_F2 m=app update image
ģ������
make p=PS102_KLS_W395_ZX_W1G1_F2 m=simulator_main
vc:build\PS102_KLS_W395_ZX_W1G1_F2_builddir\win\simulator.dsw



���ع���[Ct]
open tools\DEBUG_TOOL\ResearchDownload\Bin\ResearchDownload.exe

E:\SC7701_20180509\build\PS102_KLS_W395_ZX_W1G1_F2_builddir\img



--------------------------------------------------




--------------------------------------------------
Make ��������[Cf]:
	��:
project\PS102\PS102_KLS_W395_ZX_W1G1_F2\project_PS102_KLS_W395_ZX_W1G1_F2.mk LCD_CHIP
	����ͷ:
project\PS102\PS102_KLS_W395_ZX_W1G1_F2\project_PS102_KLS_W395_ZX_W1G1_F2.mk SENSOR_CHIP
	������:
chip_drv\chip_module\analog\sr1161\analog_phy_sr1161.c SBD_LCM_BL_25MA_SUPPORT

	�޸İ����ڵ㣺
MS_Ref\source\lcd\src\lcd.c GC9306_Ex
MS_Customize\source\product\driver\lcd\tft_GC9300.c GC9300_Ex(void)

	
	�汾�ţ�
project\PS102\PS102_KLS_W395_ZX_W1G1_F2\resource\version_software_mocor.h

----------------------------------------------------------------------------

�˵�[m]

----------------------------------------------------------------------------

��Դ

----------------------------------------------------------------------------

��Ŀ�ļ�:
	
----------------------------------------------------------------------------

����[s]:		���ʼ��Ǿɵģ�
	˫����ͷ(Ĭ�ϵ�)��
project\PS102\PS102_KLS_W395_ZX_W1G1_F2\project_PS102_KLS_W395_ZX_W1G1_F2.mk SBD_DUAL_CAMERA_SUPPORT

	��Ƶ / 2Ƶ����;������2Ƶ��
project\PS102\PS102_KLS_W395_ZX_W1G1_F2\project_PS102_KLS_W395_ZX_W1G1_F2.mk __SBD_RF_TWO_BAND_SUPPORT__
project\PS102\PS102_KLS_W395_ZX_W1G1_F2\project_PS102_KLS_W395_ZX_W1G1_F2.mk SBD_RF_TWO_BAND_SUPPORT

	������
project\PS102\PS102_KLS_W395_ZX_W1G1_F2\project_PS102_KLS_W395_ZX_W1G1_F2.mk __HHT_REMOVE_VIBRA__ =TRUE

	˫����
project\PS102\PS102_KLS_W395_ZX_W1G1_F2\project_PS102_KLS_W395_ZX_W1G1_F2.mk MMI_MULTI_SIM_SYS = DUAL
project\PS102\PS102_KLS_W395_ZX_W1G1_F2\project_PS102_KLS_W395_ZX_W1G1_F2.mk MULTI_SIM_SYS = DUAL
nv_type_4band.nvm	0x10203, 0x1000203,    ����
	�������룺
TXT_SIM_SEL_SIM1--pb	--	 SIM1
SIM1 network account

	
	23����
project\PS102\PS102_KLS_W395_ZX_W1G1_F2\project_PS102_KLS_W395_ZX_W1G1_F2.mk _23KEY
project\PS102\PS102_KLS_W395_ZX_W1G1_F2\project_PS102_KLS_W395_ZX_W1G1_F2.mk MMI_MULTI_GREEN_KEY =DUAL �̼�
	
	FM��
project\PS102\PS102_KLS_W395_ZX_W1G1_F2\project_PS102_KLS_W395_ZX_W1G1_F2.mk MMI_FM_OPEN_SPEAK_OPEN_SUPPORT=TRUE
project\PS102\PS102_KLS_W395_ZX_W1G1_F2\project_PS102_KLS_W395_ZX_W1G1_F2.mk SBD_FM_OPEN_SPEAK_OPEN_SUPPORT=TRUE
project\PS102\PS102_KLS_W395_ZX_W1G1_F2\project_PS102_KLS_W395_ZX_W1G1_F2.mk HHT_MMI_FMTEST_OPEN_SPEAK = TRUE
project\PS102\PS102_KLS_W395_ZX_W1G1_F2\project_PS102_KLS_W395_ZX_W1G1_F2.mk SBD_FM_THRESHOLD_TYPE1=TRUE 	   #�����ѵ�̨��һ��
project\PS102\PS102_KLS_W395_ZX_W1G1_F2\project_PS102_KLS_W395_ZX_W1G1_F2.mk HHT_FM_USE_GSM_ANT_SIGNAL_STRONG=TRUE	 #���ʱ��


	����K�๦�ţ�
project\PS102\PS102_KLS_W395_ZX_W1G1_F2\project_PS102_KLS_W395_ZX_W1G1_F2.mk __HHT_EXT_AMPLIFIER_CLASS_K__ = TRUE

	���2��1��FALSE��������Ͳ����(Ӳ������һ)���ֿ������2��1
project\PS102\PS102_KLS_W395_ZX_W1G1_F2\project_PS102_KLS_W395_ZX_W1G1_F2.mk __HHT_EARPIECE_SPEAK_USE_ONE__ = FALSE
project\PS102\PS102_KLS_W395_ZX_W1G1_F2\project_PS102_KLS_W395_ZX_W1G1_F2.mk SBD_EARPIECE_SPEAK_USE_ONE
project\PS102\PS102_KLS_W395_ZX_W1G1_F2\project_PS102_KLS_W395_ZX_W1G1_F2.mk CUSTOMER = S039_JX_2IN1	                 # ����һ����Ƶ����K�����Ƶ��ͬ��
\audio\audio_dsp_codec_6531.nvm    0x6C0/Ӳ��2��1;    0x638/���2��1

	����һ��
project\PS102\PS102_KLS_W395_ZX_W1G1_F2\project_PS102_KLS_W395_ZX_W1G1_F2.mk CUS_ADD_SHAKE= TRUE  ����һ���Ⱥ�        
project\PS102\PS102_KLS_W395_ZX_W1G1_F2\project_PS102_KLS_W395_ZX_W1G1_F2.mk VIRTUAL_VIBRATE_FUNC
project\PS102\PS102_KLS_W395_ZX_W1G1_F2\project_PS102_KLS_W395_ZX_W1G1_F2.mk __SPEAKER_VIB_INTENSITY_WEAK__
project\PS102\PS102_KLS_W395_ZX_W1G1_F2\project_PS102_KLS_W395_ZX_W1G1_F2.mk __HHT_EARPIECE_SPEAK_USE_ONE__ = TRUE ����һͬʱ��


	�ֵ�Ͳ
project\PS102\PS102_KLS_W395_ZX_W1G1_F2\project_PS102_KLS_W395_ZX_W1G1_F2.mk HHT_ADD_TORCHLIGHT= TRUE
project\PS102\PS102_KLS_W395_ZX_W1G1_F2\project_PS102_KLS_W395_ZX_W1G1_F2.mk SBD_ADD_TORCHLIGHT			 #6531E
	
	�����
project\PS102\PS102_KLS_W395_ZX_W1G1_F2\project_PS102_KLS_W395_ZX_W1G1_F2.mk DC_FLASH_SUPPORT= TRUE
	
	U��
project\PS102\PS102_KLS_W395_ZX_W1G1_F2\project_PS102_KLS_W395_ZX_W1G1_F2.mk UMEM_PRTITION _MICRO

	�ֿ⣺
MS_MMI\source\resource\mmi_res_prj_def.h
MS_MMI\source\resource\Common\FONT
open tools\DEBUG_TOOL\FONTTOOL\Bin\FontTool.exe


	�ͺ�--MSD, ���룺
project\PS102\PS102_KLS_W395_ZX_W1G1_F2\project_PS102_KLS_W395_ZX_W1G1_F2.mk MMI_MSD_SUPPORT
//TXT_MSD_NOTIFY_INFO

----------------------------------------------------------------------------

Idle[i]: ����

	���Ź��
project\PS102\PS102_KLS_W395_ZX_W1G1_F2\project_PS102_KLS_W395_ZX_W1G1_F2.mk SENSOR_CHIP
MS_MMI\source\mmi_gui\include\guiedit.h GUIEDIT_DIAL_IMAGE_SPACE_X
MS_MMI\source\mmi_gui\source\editbox\c\guiedit_text.c GUIEDIT_DIAL_IMAGE_SPACE_X
MS_MMI\source\mmi_gui\source\editbox\c\guiedit_text.c GUIEDIT_GetCursorPosForPN

----------------------------------------------------------------------------
	
�˵�

----------------------------------------------------------------------------

����[t]��

----------------------------------------------------------------------------

trace[t]:
project\PS102\PS102_KLS_W395_ZX_W1G1_F2\project_PS102_KLS_W395_ZX_W1G1_F2.mk RELEASE_INFO = FALSE
project\PS102\PS102_KLS_W395_ZX_W1G1_F2\project_PS102_KLS_W395_ZX_W1G1_F2.mk MEMORY_DEBUG_SUPPORT = TRUE
project\PS102\PS102_KLS_W395_ZX_W1G1_F2\project_PS102_KLS_W395_ZX_W1G1_F2.mk TRACE_INFO_SUPPORT = TRUE
project\PS102\PS102_KLS_W395_ZX_W1G1_F2\project_PS102_KLS_W395_ZX_W1G1_F2.mk PRODUCT_BASELIB_DIR = sc6531_32X32_320X240BAR_QW_ATV_formal_trace


// ץtrace:
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
	
//open: tools\DEBUG_TOOL\LOGEL\Bin\ArmLogel.exe
open: tools\DEBUG_TOOL\Logel_for_TD\Bin\ArmLogel.exe
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
build\PS102_DJTX_G182_W25G2_F1_builddir\img\nvitem\nvitem.prj
D:\SVN\SC7701\build\SC7702_PS102_nvitem_Uart\nvitem.prj
// ����:
//	com_debug = 0x1               (USB:0xFF,)
//	com_data = 0xFF               (USB:0xFF, ��ͬ)
//	com_debug_baud_rate = 0x70800 (USB:0x1C200,չѸû˵���Ҫ��)
//	dsp_log_switch = 0x0          (USB:0x1,)


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
//8 para set->dsp log:usb
//8 para set->usb log:open
//8 para set->debug->debug alert:open  (��ȷ��������)

uartץtrace:
//����ģʽ����:
//8 para set->arm log:open
//8 para set->dsp log:usb
//8 para set->usb log:close (��ȷ��)
//8 para set->debug->assert:open  (��ȷ��������)



--------------------------------------------------
CE ������Ƶ�汾:
project\PS102\PS102_KLS_W395_ZX_W1G1_F2\project_PS102_KLS_W395_ZX_W1G1_F2.mk PRODUCT_BASELIB_DIR = sc6531efm_32X32_320X240BAR_AB_CE
project\PS102\PS102_KLS_W395_ZX_W1G1_F2\project_PS102_KLS_W395_ZX_W1G1_F2.mk BT_NONSIG_SUPPORT = TRUE
	

----------------------------------------------------------------------------


��չ��Ŀ��





----------------------------------------------------------------------------

Build����[b]:

build\PS102_KLS_W395_ZX_W1G1_F2_builddir\log\midisoundbank.log �ļ��޷�ɾ�� 
build\PS102_KLS_W395_ZX_W1G1_F2_builddir\log\resource.log ERROR
build\PS102_KLS_W395_ZX_W1G1_F2_builddir\log\caf_templete.log ERROR
build\PS102_KLS_W395_ZX_W1G1_F2_builddir\tmp/SC7702.def ��
build\PS102_KLS_W395_ZX_W1G1_F2_builddir\tmp\app.macro �鿴���Ƿ����
	

findstr /s /i "ERROR" *.log>aaaa.txt



1 ���ռ�:
~ 2����Ϸ		  12K
~ һ��APN��¼ռ��0.163kb��3000~

2 ����ʱ��
gettime.pl

[Cg]


