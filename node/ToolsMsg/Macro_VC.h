
基础路径设置:
//basePath = 

/***********************************************************************/

//目录[Num][Ca]:
// 1. 
Save:node\ToolsMsg\Macro_VC.h \[1.1\] 安装
Save:node\ToolsMsg\Macro_VC.h \[1.2\] Incredibuild
Save:node\ToolsMsg\Macro_VC.h \[1.3\] 
Save:node\ToolsMsg\Macro_VC.h \[1.4\] 
Save:node\ToolsMsg\Macro_VC.h \[1.5\] office
Save:node\ToolsMsg\Macro_VC.h \[1.6\] VC6.0 死机
Save:node\ToolsMsg\Macro_VC.h \[1.7\] 补丁
Save:node\ToolsMsg\Macro_VC.h \[1.8\] um.dat
Save:node\ToolsMsg\Macro_VC.h \[1.9\] 
Save:node\ToolsMsg\Macro_VC.h \[1.10\] 
Save:node\ToolsMsg\Macro_VC.h \[1.11\] 
Save:node\ToolsMsg\Macro_VC.h \[1.12\] 




[1.1] 安装
VC
//	Visual Studio 6.0	 安装：
//			1、product id：全写111...
//			2、file may be corrupt：取消（按多次）
//			3、mmi_menutable.c   error：
//					//注释，再编译，一般像游戏或者是facebook，whatsapp都会报这种错误
//	
//	***** **** ***** 编译模拟器 ***** **** *****
//	打开模拟，设置路径后，右击按start：
//			MS image Files：F:\trunk\SBD_6531_12C_DA\MS_MMI\source\winsimulator_tp\skin\mssim_duallcd_128_160.png
//			MS ini Files：
//			MS resouce Files：build\xxx_builddir\img\
//			如果弹出sim卡设置，可能驱动未更新有问题，或重新编译

//	已停止工作 windows可以联机检查：
//	控制面板→系统和安全→操作中心→问题报告设置， 设置成“自动解决方案” 就可以了
//
//	2 Visual Studio 与此版本的 Windows 之间存在已知的兼容性问题
//	设置不再显示






[1.2] Incredibuild




[1.3] visual sourcesafe login
// sourcesafe
Tools-->Options--->Source Control 标签



[1.4] 




[1.5] office
//office:
//        需激活，快过期时编不过
//        win7不能装excel2003，ntac不能直接保存excel，需要打开其他表格（同时会打开ntac的表格）；
//        ntac再次保存excel，先关闭excel进程；
//
//xp虚拟机安装：
//        Visual Studio Analyzer：不安装

///   win7系统文件缺失：
//http://www.filediag.com/files/npptools.dll.html




[1.6] VC6.0 死机
// VC6.0 死机
//	调试前先打开一个命令行窗口，输入TASKKILL /F /IM msdev.exe /T，不要回车，把这个窗口最小化。
//	当VC调试中死机时，按ALT+TAB，切换到我们刚才的命令行窗口，按回车，
//	由于键盘响应也不好，可能要多按几次。这样就干掉死了的VC6了。




[1.7] 补丁
// VC 非常慢, 导入慢
//	近做项目vc6.0非常慢，左下角的“Loading Workspace”卡住了。
//	解决办法：删除工程文件中的三个文件，分别是：*.ncb  * .opt   * .plg,这样就可以飞快的打开了。


// 补丁
//	文件版本在6.0.8168.2以前的都最好打上官方的原版补丁。安装之后文件版本如图2所示。
//	英文版补丁地址：
//	http://download.microsoft.com/download/1/9/f/19fe4660-5792-4683-99e0-8d48c22eed74/Vs6sp6.exe 
//	简体中文版补丁地址：
//	http://download.microsoft.com/download/e/c/9/ec94a5d4-d0cf-4484-8b7a-21802f497309/Vs6sp6.exe




[1.8] um.dat
//vb\vb6.0\vss\um.dat may be corrupt 
1. 新建文件夹 C:\Sstemp.
//
C:\Sstemp

2. 打开命令运行窗口进入路径VSS\Win32 (具体路径根据安装vss)
//
D:\Desktop\mydoc\down\6^vc\Visual^Studio^6.0(1)\Visual^Studio^6.0\VSS\Win32

3.输入命令：mkss c:\sstemp
4.输入命令：ddconv c:\sstemp
5.输入命令：ddupd c:\sstemp
6.从C:\SStemp中把Um.dat 和Rights.dat文件复制到C:\Program Files\Microsoft Visual Studio\Common\VSS\data下
//
C:\Program^Files^(x86)\Microsoft^Visual^Studio\Common\VSS\data
C:\Program^Files^(x86)\Microsoft^Visual^Studio\Common\

7.最后输入analyze -f命令
8.把C:\SStemp的目录复制到C:\Program Files\Microsoft Visual Studio\Common\VSS\data下


//
// Common\VSS\user.txt not found
// Administrator


//
vb6.0 visual sourcesafe login
//删除 VSS 文件夹
//
C:\Program^Files^(x86)\Microsoft^Visual^Studio\Common\VSS\

//
把你工程目录下的mssccprj文件删除
//
当你安装vss或者cvs后安装vc就会出现你说的这个内容.点击2个no,yes就可以了


[1.9] 




[1.10] 



[1.11] 




[1.12] 




[1.13] 




[1.14] 




[1.15] 






