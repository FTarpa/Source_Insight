/***********************************************************************/
/******************************* Base **********************************/
/***********************************************************************/
//��ǰ�ļ���ݽ�:
//�鿴��������: ctrl+D->ctrl+D
//�鿴�������: ctrl+D->3 
//[Num]

add:
Android������
	�ں�������Android������launcher���������ǵ�SystemServer�ʹ���Android�����У������Ǵ�������ͼ��
	
init->ServiceManager->Zygote->SystemServer->......


/***********************************************************************/
/******************************* tool **********************************/
/***********************************************************************/


[1.0] ----------------------------------

[1.0] SecureCRT:
Save:SI\node\ToolsMsg\Macro_SecureCRT.h
//SecureCRT.exe:
open: C:\Program^Files\VanDyke^Software\Clients\SecureCRT.exe
//	\\192.168.2.115\xiaoj


[1.1] չѶCQ 
http://222.66.158.139:2008/cqweb/#
//���� 
https://isupport.spreadtrum.com/iSupport/apply/faq_list#tab-


[1.2] git:
Save:SI\node\ToolsMsg\Macro_git.h
Save:SI\node\ToolsMsg\Macro_vim.h
	

[1.3] Source Insight:
Save:SI\node\ToolsMsg\Macro_SI.h


[1.4] Android Studio:
Save:SI\node\ToolsMsg\as\Macro_android_studio.h 
//�����ļ�˵��
Save:SI\node\ToolsMsg\as\Macro_android_studio_file_list.h
//�����б�
Save:SI\node\ToolsMsg\as\Macro_android_studio_error_list.h




/***********************************************************************/
/****************************** System *********************************/
/***********************************************************************/
���� [Cs]: Apk drivers


[2.0] ----------------------------------

[2.1] build adb ��������
Save:SI\node\9820e\Macro_9820e_Sys_Build.h
//image ���� ����: δ����
Save:SI\node\9820e\Macro_9820e_Sys_File.h
//Save:SI\node\9820e\Macro_9820e_Sys_Image.h
//δ���� ǩ��
Save:SI\node\9820e\Macro_9820e_Sys_Apk.h

[2.2] shell python mk δ����
//Save:SI\node\9820e\Macro_9820e_shell.h
//Save:SI\node\9820e\Macro_9820e_python.h
Save:SI\node\9820e\Macro_9820e_mk.h

[2.3] Linux�²鿴ϵͳ����
Save:SI\node\9820e\Macro_9820e_Sys_Linux.h


//drivers: δ����
Save:SI\node\9820e\Macro_9820e_Sys_Drivers.h
	
//kernel: δ����
Save:SI\node\9820e\Macro_9820e_Sys_Kernel.h
	
	
/***********************************************************************/
/******************************* App ***********************************/
/***********************************************************************/

Ӧ�� [Cf]:
	
[2.0] ----------------------------------


[2.1] Setting ��������
Save:SI\node\9820e\Macro_9820e_App_Setting.h

[2.2] Launch �����ҵ�һЩչѶ4.4�ʼ�
Save:SI\node\9820e\Macro_9820e_App_Launch.h
Save:SI\node\9820e\Macro_9820e_App_Wallpaper.h

//SystemUI δ����
Save:SI\node\9820e\Macro_9820e_App_SystemUI.h
//��ϵ�� ����:
Save:SI\node\9820e\Macro_9820e_App_Contacts.h
//���:
Save:SI\node\9820e\Macro_9820e_App_Gallery.h

[2.3] ������
//[1.1] ��as������app����, res�����(����)
Save:SI\node\9820e\Macro_9820e_App_Calculator.h

//δ����:
Save:SI\node\9820e\Macro_9820e_noFix_1.h  # Home, Menu��
Save:SI\node\9820e\Macro_9820e_noFix_2.h  # ����, ����


/***********************************************************************/
/******************************** Code *********************************/
/***********************************************************************/
���� [Cc]: Service Intent
һЩ�������, ��������ҵ�
[3.0] ----------------------------------

[3.1] Service: δ����
Save:SI\node\android\Macro_9820e_getSystemService.h
//Intent: 
Save:SI\node\android\Macro_9820e_IntentService.h
//Battery
Save:SI\node\android\Macro_9820e_BatteryService.h
	
[3.2] Activity: δ����
Save:SI\node\android\Macro_9820e_Activity.h

//Recovery: 
Save:SI\node\android\Macro_9820e_Setting_Recovery.h


/***********************************************************************/
/***************************** �ο��ʼ� ********************************/
/***********************************************************************/
�ʼ� [Ce]: �ο��ʼ�
//�ο��ʼ�: δ����
E:\desktop\9820E\node1\sys_cfg
E:\desktop\9820E\node1\node_pdf
//�ο��ʼ�

[4.0] ----------------------------------


[4.1] չѶAndroidƽ̨�����ʴ�_201204
Save:SI\node\9820e\doc\Macro_SPR_Android_Platform_QA_201204.h  Num

[4.2] Spreadtrum Android 8810_6820 FAQ 1207
Save:SI\node\9820e\doc\Macro_SPR_Android_8810_6820_FAQ_1207.h  Num

//android��ý�崦������
//Save:SI\node\9820e\doc\Macro_SPR_Android_Multimedia.h
	
//doc:QQȺ5
Save:SI\node\9820e\doc\Macro_QQ_Android_1_5_1.h

//doc:������ͨ����-FAQ--MTK
Save:SI\node\9820e\doc\Macro_QQ_Android_1_7_1.h
	
[4.3] doc:MTK-չѶ�޸ıʼ�--csdn
Save:SI\node\9820e\doc\Macro_QQ_Android_1_3_1.h
	




/***********************************************************************/
/****************************** Other **********************************/
/***********************************************************************/

���� [Cg]: cmd����

����Ŀ¼: 
path: F:\9820e\note
F:\9820e\note\��������.txt


[5.0] ----------------------------------




�ڱʼ����� default_wallpaper:
//cmd: E:\save\SI\node\9820e
E:\save\SI\Cmd\cmd.exe
cd E:\save\SI\node\9820e
	

set path=%path%;C:\CSDTK\cygwin\bin;
find ./ -name "*.log"| xargs grep "ERROR"
find ./ -name "*.h"| xargs grep "default_wallpaper"
ûװcygwin:
findstr /s /i "ERROR" *.log>aaaa.txt
findstr /s /i "default_wallpaper" *.h>aaaa.txt





wordɾ�к�
^13[0-9]{1,}^13


//�ο�sh: 
//1.svn export android ����
//2.�Զ�����debug user�汾
//3.�Զ�check fota������Ҫ�õ���ʣ��ռ��С
Save:SI\node\9820e\sh\Macro_custom.sh
Save:SI\node\9820e\sh\Macro_svn_function.sh
//4.�����Ŀ�������
Save:SI\node\9820e\sh\Macro_make.sh





