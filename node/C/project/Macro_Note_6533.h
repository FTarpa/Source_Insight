��ݼ���
F11����/�رձʼ�
F2�� ��ѡ���·��/�ļ�; �ļ���+��չ��
F5�� ��sln�ļ�/cmd����+�Ҽ�ճ��; ��ǰ����set��cmd��make/ctmake/xmake��open��vc��vs08��ͷ; Ĭ�ϴ��ļ�+�ؼ���(��)

--------------------------------------------------

Ĭ��(�����ϴ�svn):
set S069_HK_H1809_NetOnNet_F5_QQVGA

��ǰproject:
set S069_HK_H1822_IRBIS_SF31_F2_QQVGA
	



setEnd:��setEnd�п�ʼ�滻����(��һ��ѡ��->��ǰѡ��); 
--------------------------------------------------


6533����ָ��:
open: C:\CSDTK\cygwin\Cygwin.bat
	work .

���·�����ԣ���Ҫ�޸Ļ�������:
open: C:\CSDTK\cygwin\.bashrc PROJ_ROOT
	cygpath "F:"		��Ϊ:
	cygpath "F:/SC6533G"



���룺
ctmake -j 16 CT_TARGET=S069_HK_H1822_IRBIS_SF31_F2_QQVGA CT_RELEASE=release CT_USER=FAE CT_RESGEN=yes CT_USERGEN=yes WITH_SVN=0  CT_MODEM=2


����ģ��--��
ctmake -j 16 CT_TARGET=S069_HK_H1822_IRBIS_SF31_F2_QQVGA CT_RELEASE=release CT_USER=FAE CT_RESGEN=no CT_USERGEN=yes WITH_SVN=0  CT_MODEM=2  platform/edrv/lcdd/

����ģ��--����ͷ
ctmake -j 16 CT_TARGET=S069_HK_H1822_IRBIS_SF31_F2_QQVGA CT_RELEASE=release CT_USER=FAE CT_RESGEN=no CT_USERGEN=yes WITH_SVN=0  CT_MODEM=2  platform/edrv/camdold/

����ģ��
ctmake -j 16 CT_TARGET=S069_HK_H1822_IRBIS_SF31_F2_QQVGA CT_RELEASE=release CT_USER=FAE CT_RESGEN=yes CT_USERGEN=yes WITH_SVN=0  CT_MODEM=2

CT_RELEASE=debug



ģ������

--------------------------------------------------

���ع���
open:D:\tools\fpupgrade_V10.00.01\fpupgrade.exe

C:\CSDTK\cygwin\.bashrc	export^PROJ_ROOT
	export PROJ_ROOT=`cygpath "D:/6533"`
	
--------------------------------------------------
			
Make ��������:
target\S069_HK_H1822_IRBIS_SF31_F2_QQVGA\target.def CT_PRODUCT				�汾��
target\S069_HK_H1822_IRBIS_SF31_F2_QQVGA\target.def PROJECT_FEATURE
target\S069_HK_H1822_IRBIS_SF31_F2_QQVGA\target.def LCD_MODEL 					������
target\S069_HK_H1822_IRBIS_SF31_F2_QQVGA\target.def CAMERA_MODEL 				����ͷ����
target\S069_HK_H1822_IRBIS_SF31_F2_QQVGA\target.def SUPPORT_DUAL_CAMERA 		����ͷ����

����
platform\edrv\lcdd\nv3021\gouda\src\drv_lcd_nv3021.c LCD_NV3021_TIANYIFU_BOE

����ͷ:
platform\edrv\camdold\bf3a02\src\drv_camera.h
platform\edrv\camdold\bf3a02\src\drv_camera_bf3a02.c


--------------------------------------------------

���˵���Դ ��


--------------------------------------------------

Build����:
build\S069_HK_H1822_IRBIS_SF31_F2_QQVGA\_default_\
	�����ļ���
hex\S069_HK_H1822_IRBIS_SF31_F2_QQVGA_release\S069_HK_H1818C_DIGMA_LINX_A170_F2_QQVGA_release_flash.lod

.




target\R039_YSF_VT70i_bundy_F4\include
application\target_res\common\mmi_customer\Images\R028_BLF_K1_LEPH_NoVIB_F2_QQVGA\image.zip
application\target_res\common\mmi_customer\aud_source\R028_BLF_K1_LEPHONE_F2\Audio.zip
application\target_res\common\mmi_customer\include\custresdef.h

application/target_res/commoni_customer/Res_MMI/Res_MainMenu.c

application/coolmmii/GUIc/wgui_categories_idlescreen.c
application/coolmmii/GUIc/wgui_categories_util.c
application/coolmmii/GUIc/gui_fixed_menuitems.c
application/coolmmii/GUIc/gui_inputs.c
application/coolmmii/includei_features_camera.h



�˵�
F:\soft\application\target_res\common\mmi_customer\Images\RB039_SH_B105_CJ01_F4_QQVGA\MainLCD\MainMenu\MATRIX


�汾�Ų�ѯ��
*#37*#��*#36*#
	*#87#
	*#36*#
	*#3641#


custresdef.h

lcd/cam: *#8376#


���ֻ����������Ǹ����ȵȼ����ú�lightLevelToBacklight������Ӧ��ϵΪ��
��5����ӦlightLevelToBacklight[7]
��4����ӦlightLevelToBacklight[4]
��3����ӦlightLevelToBacklight[3] 





