
基础路径设置:
//basePath = 

/***********************************************************************/

//目录[Num][Ca]:
// 1. 
Save:node\C\study\Macro_data_8910.h \[1.1\] Message 切换
Save:node\C\study\Macro_data_8910.h \[1.2\] FUN 入口
Save:node\C\study\Macro_data_8910.h \[1.3\] 参考
Save:node\C\study\Macro_data_8910.h \[1.4\] 移配置
Save:node\C\study\Macro_data_8910.h \[1.5\] 说明文档
Save:node\C\study\Macro_data_8910.h \[1.6\] Win数据
Save:node\C\study\Macro_data_8910.h \[1.7\] SALE统计
Save:node\C\study\Macro_data_8910.h \[1.8\] 常用入口
Save:node\C\study\Macro_data_8910.h \[1.9\] Display
Save:node\C\study\Macro_data_8910.h \[1.10\] 128X128
Save:node\C\study\Macro_data_8910.h \[1.11\] 
Save:node\C\study\Macro_data_8910.h \[1.12\] 
//
Save:node\C\study\Macro_data_8910.h \[2.1\] 重新安装VC
Save:node\C\study\Macro_data_8910.h \[2.2\] 
Save:node\C\study\Macro_data_8910.h \[2.3\] 
Save:node\C\study\Macro_data_8910.h \[2.4\] 
Save:node\C\study\Macro_data_8910.h \[2.5\] 
Save:node\C\study\Macro_data_8910.h \[2.6\] 
Save:node\C\study\Macro_data_8910.h \[2.7\] 
Save:node\C\study\Macro_data_8910.h \[2.8\] 
Save:node\C\study\Macro_data_8910.h \[2.9\] 
Save:node\C\study\Macro_data_8910.h \[2.10\] 
Save:node\C\study\Macro_data_8910.h \[2.11\] 
Save:node\C\study\Macro_data_8910.h \[2.12\] 
// 其他标号
Save:Help\\DefaultFile\\Macro_Node_Num.h




[1.1] Message 切换

//	Message 切换
Save:node\C\study\Macro_Spr_MsgId.h
//
 MMK_WinGrabFocus(MMIWIFI_LIST_WIN_ID);



[1.2] FUN 入口
//	FUN 入口
Save:node\C\study\Macro_Spr_Fun.h




[1.3] 参考
// 参考
Save:node\C\study\Macro_Spr_Other.h




[1.4] 移配置
common\nv_parameters\S036_MB
MS_Customize\source\product\config\S036_MB
MS_Customize\SC6530_S036_MB_vm
version\SC6530_S036_MB_version.c




[1.5] 说明文档
SC6530平台_application_notes.doc				  ###  宏说明			   
Universe手机使用说明.docx 					   ###	手机使用说明
Build_Environment_Manual.doc ###  编译环境




[1.6] Win数据
MMI_BASE_NODE_T    # 可以转 WINDOW_NODE
MMI_HANDLE_NODE_T
MMI_TREE_NODE_T    HANDLE
MMI_HANDLE_T		HANDLE_NODE + APPLET_NODE	 #应用

MMI_WINDOW_T		
MMI_WINDOW_NODE_T		 NODE + WINDOW + HANDLE
MMI_WINDOW_TABLE_CREATE_T	 参数
MMI_WINDOW_CREATE_T 	   参数
MMI_APPLET_NODE_T		 
MMI_ZORDER_SYSTEM_T
MMI_ZORDER_NODE_T		 WINDOW_NODE + ……

MMI_APPLET_SYSTEM_T

MMI_CTRL_NODE_T
MMI_CONTROL_CREATE_T	参数

MMI_MESSAGE_PTR_T 
CAF_GUID_T			 module_manager
GUIMENU_GROUP_T

GUI_POINT_T
GUI_RECT_T
MMI_WIN_ID_T
MMI_IMAGE_ID_T
GUI_LCD_DEV_INFO
IMG_RES_SRC_T		 显示图片
CAF_GUID_T	  
MMI_MODINFO_NODE_T	  kernel模块的信息
CAF_RES_T
CAF_HANDLE_T
RES_NODE_DATA_T

IMG_RES_DST_T	 显示
IMG_RES_SRC_T



[1.7] SALE统计
MMIDEFAULT_StartAutoSendSMSTimer        # 默认
HandleSetSmsAutoSendWindow
Enter_SMS_APP_AutoSend_SIM1
MMIDEFAULT_HandleAutoSendSMSTimer        # 处理发送




[1.8] 常用入口
其他常用入口：
	字符：	
MMI_GetLabelTextByLang
CalStartPoint
	消息：	
MMK_SendMsg

MMK_IsOpenWin

VideoPlayerResume
MMISRVAUD_TYPE_VIDEO




[1.9] Display

DisplayIconItem
AdjuestIconMenuRect
CreateIconMenuButton	#标题颜色
GetMenuItemByIndex

DrawControlPanel



[1.10] 128X128
MAINLCD_SIZE
MAINLCD_SIZE_128X128
MAINLCD_DEV_SIZE_128X128
MMI_LCD_128_128


[1.11] 




[1.12] 




[1.13] 




[1.14] 




[1.15] 



[2.1] 重新安装VC
//1) 没有找到MSDevkernel.dll
//2) Error spawning cl.exe错误
//3) LONG_PTR
//error C2040: 'LONG_PTR' : 'long ' differs in levels of indirection from 'long *'

// 解决:
// 用其他电脑文件覆盖过来:
C:\Program Files (x86)\Microsoft Visual Studio


[2.2] 


[2.3] 


[2.4] 


[2.5] 


[2.6] 


[2.7] 


[2.8] 


[2.9] 


[2.10] 



[2.11] 


[2.12] 


[2.13] 


[2.14] 


[2.15] 





