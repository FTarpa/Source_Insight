
//Ŀ¼[Num][Ca]:
// ��Ŀѡ�� ����
Save:SI\node\note\Macro_Note_6531E.h \[1.1\] ��ǰ��Ŀ
Save:SI\node\note\Macro_Note_6531E.h \[1.2\] 6531E����ָ��[ Cc]:
Save:SI\node\note\Macro_Note_6531E.h \[1.2\] Make ��������[ Cf]:
Save:SI\node\note\Macro_Note_6531E.h \[1.3\] ��:
Save:SI\node\note\Macro_Note_6531E.h \[1.4\] ����ͷ:
// �˵� ��Դ
Save:SI\node\note\Macro_Note_6531E.h \[2.1\] �˵�[ m]:
Save:SI\node\note\Macro_Note_6531E.h \[2.2\] ͼƬ[ r]
Save:SI\node\note\Macro_Note_6531E.h \[2.3\] ����:
Save:SI\node\note\Macro_Note_6531E.h \[2.4\] �ַ���:
Save:SI\node\note\Macro_Note_6531E.h \[2.5\] �ֿ��ļ�:
// ����
Save:SI\node\note\Macro_Note_6531E.h \[3.1\] ����[ s]:
Save:SI\node\note\Macro_Note_6531E.h \[3.2\] ����, Ĭ������:
Save:SI\node\note\Macro_Note_6531E.h \[3.3\] ָ��:
Save:SI\node\note\Macro_Note_6531E.h \[3.4\] �龰ģʽ ��Ƶ����:
Save:SI\node\note\Macro_Note_6531E.h \[3.5\] GUI[g]: ״̬�� �����ٷֱ�
// ��ϵ��
Save:SI\node\note\Macro_Note_6531E.h \[4.1\] Idle[ I]: Lock Dial Theme
Save:SI\node\note\Macro_Note_6531E.h \[4.2\] ��ϵ��[ p]: ����
Save:SI\node\note\Macro_Note_6531E.h \[4.3\] ��ý��[ u]:
Save:SI\node\note\Macro_Note_6531E.h \[4.4\] �����[ w]: �������
Save:SI\node\note\Macro_Note_6531E.h \[4.5\] �ļ�����
Save:SI\node\note\Macro_Note_6531E.h \[4.6\] ����[ t]:��λת�� ��Ϸ ���� ���� ħ��
// Build����
Save:SI\node\note\Macro_Note_6531E.h \[5.1\] ��չ��Ŀ:
Save:SI\node\note\Macro_Note_6531E.h \[5.2\] Build����[ Cb][ b]:
	
//ģ��������:
Save:SI\node\note\Macro_modis_6531E.h
//�깦��˵��:
Save:SI\bak\Macro_note_help.h SprNote

//�ο����:
Save:SI\node\Test\Macro_Tmp_Node_Num.h

/***********************************************************************/

[1.1] ��ǰ��Ŀ
// �鿴--ѡ����ʷ��Ŀ�б�: 
Save:SI\node\set\Macro_Set_Note.h	6531E-note-set

// Ĭ����Ŀ(�����ϴ�svn) [Cs]:
set SE039_YST_E18_E250_F2
	
// ��ǰ��Ŀ:
set H9_KLS_F4
set SE818BC_BY_S018_JX_64_64_F3

setEnd:��setEnd�п�ʼ�滻����(��һ��ѡ��->��ǰѡ��)

/***********************************************************************/
/*************************** ���������� ********************************/
/***********************************************************************/

[1.2] 6531E����ָ��[Cc]:
cmd: cmd


����:
open: project\H9_KLS_F4\New_common.bat


����ģ��
make p=H9_KLS_F4 m=custom_drv
make p=H9_KLS_F4 image

�� (1������)
make p=H9_KLS_F4 m=custom_drv update image
make p=H9_KLS_F4 m=custom_drv update image job=4

������Դ (VS���ű��뼴��)
make p=H9_KLS_F4 m=resource job=4


������ģ��
make p=H9_KLS_F4 m=app update image


ģ������
make p=H9_KLS_F4 m=simulator
vc: build\H9_KLS_F4_builddir\win\simulator.dsw
build\H9_KLS_F4_builddir\win\
//	��NVɾ��
build\H9_KLS_F4_builddir\win\bin\flash_sim.dat


// spr--���ع���
open tools\DEBUG_TOOL\ResearchDownload\Bin\ResearchDownload.exe

F:\6531G_16A_MP_W17.43.4\build\H9_KLS_F4_builddir\img







/***********************************************************************/
/************************ Make�������� *******************************/
/***********************************************************************/

[1.2] Make ��������[Cf]:
project\H9_KLS_F4\project_H9_KLS_F4.mk LCD_CHIP     ��

//	�汾�ţ�
project\H9_KLS_F4\resource\version_software_mocor.h


[1.3] ��:
MS_Customize\source\product\config\SE818_MB\lcm_cfg_info.c
	�޸İ����ڵ㣺
MS_Ref\source\lcd\src\lcd.c GC9306_Ex
MS_Customize\source\product\driver\lcd\tft_GC9300.c GC9300_Ex(void)
	������:
chip_drv\chip_module\analog\sr1161\analog_phy_sr1161.c SBD_LCM_BL_25MA_SUPPORT


[1.4] ����ͷ:
project\H9_KLS_F4\project_H9_KLS_F4.mk SENSOR_CHIP

	


/***********************************************************************/
/**************************** �޸ļ�¼ *********************************/
/***********************************************************************/

[2.1] �˵�[m]:
project\H9_KLS_F4\resource\mmi_menutable_128x160.c WORLD_CLOCK_SUPPORT
project\H9_KLS_F4\resource\mmi_menutable_128x160.c
project\H9_KLS_F4\resource\mmi_menutable_128x160.c 
	
project\H9_KLS_F4\resource\mmi_menutable_128x160.c GUIMENU_ITEM_T^menu_mainmenu_icon
project\H9_KLS_F4\resource\mmi_menutable_128x160.c GUIMENU_ITEM_T^menu_icon_tools

 



[2.2] ͼƬ[r]



[2.3] ����:


[2.4] �ַ���:

	
[2.5] �ֿ��ļ�:
open tools\DEBUG_TOOL\FONTTOOL\Bin\FontTool.exe 
MS_MMI\source\resource\Common\FONT\LANG_FONT_LATIN_12_14_29.lib
MS_MMI\source\resource\Common\FONT\


[2.6] ��ɫ
// �¼� COLOR_RES_CUSTOM_BG
project\H9_KLS_F4\resource\common_mdu_def.h       COLOR_RES_PUBWIN_BG
MS_MMI\source\mmi_app\app\theme\c\mmi_theme.c     COLOR_RES_PUBWIN_BG
project\SE820_YJ_B2414_ZX_F4\resource\mmi_theme.h MMI_THEME_PUBWIN_BG




----------------------------------------------------------------------------
[3.1] ����[s]:		���ʼ��Ǿɵģ�
	˫����ͷ(Ĭ�ϵ�)��
project\H9_KLS_F4\project_H9_KLS_F4.mk SBD_DUAL_CAMERA_SUPPORT

	��Ƶ / 2Ƶ����;������2Ƶ��
project\H9_KLS_F4\project_H9_KLS_F4.mk __SBD_RF_TWO_BAND_SUPPORT__
project\H9_KLS_F4\project_H9_KLS_F4.mk SBD_RF_TWO_BAND_SUPPORT

	������
project\H9_KLS_F4\project_H9_KLS_F4.mk __HHT_REMOVE_VIBRA__ =TRUE

	˫����
project\H9_KLS_F4\project_H9_KLS_F4.mk MMI_MULTI_SIM_SYS = DUAL
project\H9_KLS_F4\project_H9_KLS_F4.mk MULTI_SIM_SYS = DUAL
nv_type_4band.nvm	0x10203, 0x1000203,    ����
	�������룺
TXT_SIM_SEL_SIM1--pb	--	 SIM1
SIM1 network account

	
	23����
project\H9_KLS_F4\project_H9_KLS_F4.mk _23KEY
project\H9_KLS_F4\project_H9_KLS_F4.mk MMI_MULTI_GREEN_KEY =DUAL �̼�
	
	FM��
project\H9_KLS_F4\project_H9_KLS_F4.mk MMI_FM_OPEN_SPEAK_OPEN_SUPPORT=TRUE
project\H9_KLS_F4\project_H9_KLS_F4.mk SBD_FM_OPEN_SPEAK_OPEN_SUPPORT=TRUE
project\H9_KLS_F4\project_H9_KLS_F4.mk HHT_MMI_FMTEST_OPEN_SPEAK = TRUE
project\H9_KLS_F4\project_H9_KLS_F4.mk SBD_FM_THRESHOLD_TYPE1=TRUE 	   #�����ѵ�̨��һ��
project\H9_KLS_F4\project_H9_KLS_F4.mk HHT_FM_USE_GSM_ANT_SIGNAL_STRONG=TRUE	 #���ʱ��


[3.4] �龰ģʽ ��Ƶ����:
	����K�๦�ţ�
project\H9_KLS_F4\project_H9_KLS_F4.mk __HHT_EXT_AMPLIFIER_CLASS_K__ = TRUE

	���2��1��FALSE��������Ͳ����(Ӳ������һ)���ֿ������2��1
project\H9_KLS_F4\project_H9_KLS_F4.mk __HHT_EARPIECE_SPEAK_USE_ONE__ = FALSE
project\H9_KLS_F4\project_H9_KLS_F4.mk SBD_EARPIECE_SPEAK_USE_ONE
project\H9_KLS_F4\project_H9_KLS_F4.mk CUSTOMER = S039_JX_2IN1	                 # ����һ����Ƶ����K�����Ƶ��ͬ��
\audio\audio_dsp_codec_6531.nvm    0x6C0/Ӳ��2��1;    0x638/���2��1

	����һ��
project\H9_KLS_F4\project_H9_KLS_F4.mk CUS_ADD_SHAKE= TRUE  ����һ���Ⱥ�        
project\H9_KLS_F4\project_H9_KLS_F4.mk VIRTUAL_VIBRATE_FUNC
project\H9_KLS_F4\project_H9_KLS_F4.mk __SPEAKER_VIB_INTENSITY_WEAK__
project\H9_KLS_F4\project_H9_KLS_F4.mk __HHT_EARPIECE_SPEAK_USE_ONE__ = TRUE ����һͬʱ��

----------------------------------------------------------------------------

[3.5] GUI[g]: ״̬�� �����ٷֱ�

	�ֵ�Ͳ
project\H9_KLS_F4\project_H9_KLS_F4.mk HHT_ADD_TORCHLIGHT= TRUE
project\H9_KLS_F4\project_H9_KLS_F4.mk SBD_ADD_TORCHLIGHT			 #6531E
	
	�����
project\H9_KLS_F4\project_H9_KLS_F4.mk DC_FLASH_SUPPORT= TRUE
	
	U��
project\H9_KLS_F4\project_H9_KLS_F4.mk UMEM_PRTITION _MICRO

	�ֿ⣺
MS_MMI\source\resource\mmi_res_prj_def.h
MS_MMI\source\resource\Common\FONT
open tools\DEBUG_TOOL\FONTTOOL\Bin\FontTool.exe


	�ͺ�--MSD, ���룺
project\H9_KLS_F4\project_H9_KLS_F4.mk MMI_MSD_SUPPORT
//TXT_MSD_NOTIFY_INFO

----------------------------------------------------------------------------
[4.1] Idle[I]: Lock Dial Theme

//	modis: �������/λ��
Save:SI\node\note\Macro_modis_6531E.h	 \[2.4\] �������/λ��

	���Ź��
project\H9_KLS_F4\project_H9_KLS_F4.mk SENSOR_CHIP
MS_MMI\source\mmi_gui\include\guiedit.h GUIEDIT_DIAL_IMAGE_SPACE_X
MS_MMI\source\mmi_gui\source\editbox\c\guiedit_text.c GUIEDIT_DIAL_IMAGE_SPACE_X
MS_MMI\source\mmi_gui\source\editbox\c\guiedit_text.c GUIEDIT_GetCursorPosForPN
//	modis: Idle
Save:SI\node\note\Macro_modis_6531E.h	 \[2.2\] Idle

//	modis: Lock
Save:SI\node\note\Macro_modis_6531E.h	 \[2.10\] Lock
//	modis: ����ģʽ
Save:SI\node\note\Macro_modis_6531E.h	 \[2.8\] ����ģʽ
//	modis: ����
Save:SI\node\note\Macro_modis_6531E.h   \[2.6\] dialer
//	modis: ����

----------------------------------------------------------------------------
[4.2] ��ϵ��[p]: ����


----------------------------------------------------------------------------
[4.3] ��ý��[u]:
//	modis: ��ý��
Save:SI\node\note\Macro_modis_6531E.h	 \[2.13\] ��ý��

Camera�ֱ���:
Camera�����:
Image:



FM:
MS_MMI/source/mmi_app/app/fm/c/mmifm_wintab.c











----------------------------------------------------------------------------
[4.4] �����[w]: �������
//	modis: Browser
Save:SI\node\note\Macro_modis_6531E.h	 \[2.7\] Browser

[4.5] �ļ�����
	
----------------------------------------------------------------------------
[4.6] ����[t]:��λת�� ��Ϸ ���� ���� ħ��
//	modis: ����
Save:SI\node\note\Macro_modis_6531E.h	 \[2.15\] ����


//	tool:��λת��:


//	tool:��Ϸ:

//	tool:������: 

//	tool:����:
//	tool:����: 

//	tool:����  , ��˹������: 

//	tool:
project\H9_KLS_F4\project_H9_KLS_F4.mk WORLD_CLOCK_SUPPORT = TRUE




----------------------------------------------------------------------------

[5.1] trace[t]:
project\H9_KLS_F4\project_H9_KLS_F4.mk RELEASE_INFO = FALSE
project\H9_KLS_F4\project_H9_KLS_F4.mk MEMORY_DEBUG_SUPPORT = TRUE
project\H9_KLS_F4\project_H9_KLS_F4.mk TRACE_INFO_SUPPORT = TRUE
project\H9_KLS_F4\project_H9_KLS_F4.mk PRODUCT_BASELIB_DIR = sc6531_32X32_320X240BAR_QW_ATV_formal_trace

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
build\H9_KLS_F4_builddir\img\nvitem\nvitem.prj
F:\6531G_16A_MP_W17.43.4\build\H9_KLS_F4_builddir\img\nvitem
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
project\H9_KLS_F4\project_H9_KLS_F4.mk FM_SUPPORT = NONE 
project\H9_KLS_F4\project_H9_KLS_F4.mk VIDEO_PLAYER_SUPPORT = FALSE
project\H9_KLS_F4\project_H9_KLS_F4.mk PIC_VIEWER_SUPPORT = FALSE


--------------------------------------------------
CE ������Ƶ�汾:
project\H9_KLS_F4\project_H9_KLS_F4.mk PRODUCT_BASELIB_DIR = sc6531efm_32X32_320X240BAR_AB_CE
project\H9_KLS_F4\project_H9_KLS_F4.mk BT_NONSIG_SUPPORT = TRUE
	

----------------------------------------------------------------------------
[5.1] ��չ��Ŀ:



�����������:
set path=%path%;C:\CSDTK\cygwin\bin;
find ./ -name "*.log"| xargs grep "ERROR"
ûװcygwin:
findstr /s /i "ERROR" *.log>aaaa.txt

// open aaaa:
cmd: F:&&cd build\M115_JGW_D2_X191_F2\log&&findstr /s /i "ERROR" *.log>aaaa.txt&&start aaaa.txt
// open aaaa:
build\M115_JGW_D2_X191_F2\log\aaaa.txt Error:
// open cmd:
cmd: cmd




----------------------------------------------------------------------------

[5.2] Build����[Cb][b]:

build\H9_KLS_F4_builddir\log\midisoundbank.log �ļ��޷�ɾ�� 
build\H9_KLS_F4_builddir\log\resource.log ERROR
build\H9_KLS_F4_builddir\log\caf_templete.log ERROR
build\H9_KLS_F4_builddir\tmp/SC6531EFM.def ��
build\H9_KLS_F4_builddir\tmp\app.macro �鿴���Ƿ����
	

findstr /s /i "ERROR" *.log>aaaa.txt



1 ���ռ�:
~ 2����Ϸ		  12K
~ һ��APN��¼ռ��0.163kb��3000~

2 ����ʱ��
gettime.pl

[Cg]


