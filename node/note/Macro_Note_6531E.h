��ݼ�[Ca]��
F11����/�رձʼ�
F2�� ��ѡ���·��/�ļ�; �ļ���+��չ��
F5�� ��sln�ļ�/cmd����+�Ҽ�ճ��; ��ǰ����set��cmd��make��open��vc��vs08��ͷ; Ĭ�ϴ��ļ�+�ؼ���(��)

--------------------------------------------------

Ĭ��(�����ϴ�svn)[Cs]:
set SE039_YST_E18_E250_F2

��ǰproject:
set SE818_BY_S015_QMOBILE_F2
set SE818_SXJY_X28_QMobile_XL3000_F4
set SE8307_KM_C2406_QMobile_F3
set SE818_BY_S015_QMOBILE_F2
	



setEnd:��setEnd�п�ʼ�滻����(��һ��ѡ��->��ǰѡ��)

--------------------------------------------------

6531E����ָ��[Cc]:
cmd:F:\6531E_16A\cmd

����:
open: project\SE039_YST_E18_E250_F2\New_common.bat




����ģ��
make p=SE039_YST_E18_E250_F2 m=custom_drv
make p=SE039_YST_E18_E250_F2 image

�� (1������)
make p=SE039_YST_E18_E250_F2 m=custom_drv update image
make p=SE039_YST_E18_E250_F2 m=custom_drv update image job=4
make p=SE039_YST_E18_E250_F2 m=resource job=4


������ģ��
make p=SE039_YST_E18_E250_F2 m=app update image



ģ������
make p=SE039_YST_E18_E250_F2 m=simulator
vc:build\SE039_YST_E18_E250_F2_builddir\win\simulator.dsw



���ع���[Ct]
open tools\DEBUG_TOOL\ResearchDownload\Bin\ResearchDownload.exe

D:\6531G_SVN\build\SE039_YST_E18_E250_F2_builddir\img



--------------------------------------------------




--------------------------------------------------
Make ��������[Cf]:
	��:
project\SE039_YST_E18_E250_F2\project_SE039_YST_E18_E250_F2.mk LCD_CHIP
	����ͷ:
project\SE039_YST_E18_E250_F2\project_SE039_YST_E18_E250_F2.mk SENSOR_CHIP
	������:
chip_drv\chip_module\analog\sr1161\analog_phy_sr1161.c SBD_LCM_BL_25MA_SUPPORT

	�޸İ����ڵ㣺
MS_Ref\source\lcd\src\lcd.c GC9306_Ex
MS_Customize\source\product\driver\lcd\tft_GC9300.c GC9300_Ex(void)


	
	�汾�ţ�
project\SE039_YST_E18_E250_F2\resource\version_software_mocor.h


----------------------------------------------------------------------------
//*
�˵�[m]

----------------------------------------------------------------------------

��Դ

----------------------------------------------------------------------------

��Ŀ�ļ�:
	
----------------------------------------------------------------------------

����[s]:		���ʼ��Ǿɵģ�
	˫����ͷ(Ĭ�ϵ�)��
project\SE039_YST_E18_E250_F2\project_SE039_YST_E18_E250_F2.mk SBD_DUAL_CAMERA_SUPPORT

	��Ƶ / 2Ƶ����;������2Ƶ��
project\SE039_YST_E18_E250_F2\project_SE039_YST_E18_E250_F2.mk __SBD_RF_TWO_BAND_SUPPORT__
project\SE039_YST_E18_E250_F2\project_SE039_YST_E18_E250_F2.mk SBD_RF_TWO_BAND_SUPPORT

	�������
project\SE039_YST_E18_E250_F2\project_SE039_YST_E18_E250_F2.mk __HHT_REMOVE_VIBRA__ =TRUE

	˫����
project\SE039_YST_E18_E250_F2\project_SE039_YST_E18_E250_F2.mk MMI_MULTI_SIM_SYS = DUAL
project\SE039_YST_E18_E250_F2\project_SE039_YST_E18_E250_F2.mk MULTI_SIM_SYS = DUAL
nv_type_4band.nvm	0x10203, 0x1000203,    ����
	�������룺
TXT_SIM_SEL_SIM1--pb	--	 SIM1
SIM1 network account

	
	23����
project\SE039_YST_E18_E250_F2\project_SE039_YST_E18_E250_F2.mk _23KEY
project\SE039_YST_E18_E250_F2\project_SE039_YST_E18_E250_F2.mk MMI_MULTI_GREEN_KEY =DUAL �̼�
	
	FM��
project\SE039_YST_E18_E250_F2\project_SE039_YST_E18_E250_F2.mk MMI_FM_OPEN_SPEAK_OPEN_SUPPORT=TRUE
project\SE039_YST_E18_E250_F2\project_SE039_YST_E18_E250_F2.mk SBD_FM_OPEN_SPEAK_OPEN_SUPPORT=TRUE
project\SE039_YST_E18_E250_F2\project_SE039_YST_E18_E250_F2.mk HHT_MMI_FMTEST_OPEN_SPEAK = TRUE
project\SE039_YST_E18_E250_F2\project_SE039_YST_E18_E250_F2.mk SBD_FM_THRESHOLD_TYPE1=TRUE 	   #�����ѵ�̨��һ��
project\SE039_YST_E18_E250_F2\project_SE039_YST_E18_E250_F2.mk HHT_FM_USE_GSM_ANT_SIGNAL_STRONG=TRUE	 #���ʱ��


	����K�๦�ţ�
project\SE039_YST_E18_E250_F2\project_SE039_YST_E18_E250_F2.mk __HHT_EXT_AMPLIFIER_CLASS_K__ = TRUE

	����2��1��FALSE��������Ͳ����(Ӳ������һ)���ֿ�������2��1
project\SE039_YST_E18_E250_F2\project_SE039_YST_E18_E250_F2.mk __HHT_EARPIECE_SPEAK_USE_ONE__ = FALSE
project\SE039_YST_E18_E250_F2\project_SE039_YST_E18_E250_F2.mk SBD_EARPIECE_SPEAK_USE_ONE
project\SE039_YST_E18_E250_F2\project_SE039_YST_E18_E250_F2.mk CUSTOMER = S039_JX_2IN1	                 # ����һ����Ƶ����K�����Ƶ��ͬ��
\audio\audio_dsp_codec_6531.nvm    0x6C0/Ӳ��2��1;    0x638/����2��1

	����һ��
project\SE039_YST_E18_E250_F2\project_SE039_YST_E18_E250_F2.mk CUS_ADD_SHAKE= TRUE  ����һ���Ⱥ�        
project\SE039_YST_E18_E250_F2\project_SE039_YST_E18_E250_F2.mk VIRTUAL_VIBRATE_FUNC
project\SE039_YST_E18_E250_F2\project_SE039_YST_E18_E250_F2.mk __SPEAKER_VIB_INTENSITY_WEAK__
project\SE039_YST_E18_E250_F2\project_SE039_YST_E18_E250_F2.mk __HHT_EARPIECE_SPEAK_USE_ONE__ = TRUE ����һͬʱ��


	�ֵ�Ͳ
project\SE039_YST_E18_E250_F2\project_SE039_YST_E18_E250_F2.mk HHT_ADD_TORCHLIGHT= TRUE
project\SE039_YST_E18_E250_F2\project_SE039_YST_E18_E250_F2.mk SBD_ADD_TORCHLIGHT			 #6531E
	
	�����
project\SE039_YST_E18_E250_F2\project_SE039_YST_E18_E250_F2.mk DC_FLASH_SUPPORT= TRUE
	
	U��
project\SE039_YST_E18_E250_F2\project_SE039_YST_E18_E250_F2.mk UMEM_PRTITION _MICRO

	�ֿ⣺
MS_MMI\source\resource\mmi_res_prj_def.h
MS_MMI\source\resource\Common\FONT
open tools\DEBUG_TOOL\FONTTOOL\Bin\FontTool.exe


	�ͺ�--MSD, ���룺
project\SE039_YST_E18_E250_F2\project_SE039_YST_E18_E250_F2.mk MMI_MSD_SUPPORT
//TXT_MSD_NOTIFY_INFO

----------------------------------------------------------------------------

Idle[i]: ����

	���Ź��
project\SE039_YST_E18_E250_F2\project_SE039_YST_E18_E250_F2.mk SENSOR_CHIP
MS_MMI\source\mmi_gui\include\guiedit.h GUIEDIT_DIAL_IMAGE_SPACE_X
MS_MMI\source\mmi_gui\source\editbox\c\guiedit_text.c GUIEDIT_DIAL_IMAGE_SPACE_X
MS_MMI\source\mmi_gui\source\editbox\c\guiedit_text.c GUIEDIT_GetCursorPosForPN

----------------------------------------------------------------------------
	
�˵�

----------------------------------------------------------------------------

����[t]��

----------------------------------------------------------------------------

trace:
project\SE039_YST_E18_E250_F2\project_SE039_YST_E18_E250_F2.mk RELEASE_INFO = FALSE
project\SE039_YST_E18_E250_F2\project_SE039_YST_E18_E250_F2.mk MEMORY_DEBUG_SUPPORT = TRUE
project\SE039_YST_E18_E250_F2\project_SE039_YST_E18_E250_F2.mk TRACE_INFO_SUPPORT = TRUE
project\SE039_YST_E18_E250_F2\project_SE039_YST_E18_E250_F2.mk PRODUCT_BASELIB_DIR = sc6531_32X32_320X240BAR_QW_ATV_formal_trace
	
--------------------------------------------------
CE ������Ƶ�汾:
project\SE039_YST_E18_E250_F2\project_SE039_YST_E18_E250_F2.mk PRODUCT_BASELIB_DIR = sc6531efm_32X32_320X240BAR_AB_CE
project\SE039_YST_E18_E250_F2\project_SE039_YST_E18_E250_F2.mk BT_NONSIG_SUPPORT = TRUE
	

----------------------------------------------------------------------------


��չ��Ŀ��





----------------------------------------------------------------------------

Build����[b]:

build\SE818_YST_S15_Kingstar_F2_builddir\log\midisoundbank.log �ļ��޷�ɾ�� 
build\SE818_YST_S15_Kingstar_F2_builddir\tmp/SC6531EFM.def ��
build\SE818_YST_S15_Kingstar_F2_builddir\tmp\app.macro �鿴���Ƿ����

1 ���ռ�:
~ 2����Ϸ		  12K
~ һ��APN��¼ռ��0.163kb��3000~

2 ����ʱ��
gettime.pl

[Cg]

