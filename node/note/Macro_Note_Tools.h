/***********************************************************************/
/******************************* base **********************************/
/***********************************************************************/
快捷键:
F7:打开/关闭笔记
F2: 打开选择的路径/文件; 文件名+扩展名
F5: 打开tools文件; 当前行以open开头


[1.1]模拟器:常用断点
Save:SI\node\Macro_modis_MTK.h
Save:SI\node\Macro_modis_6531E.h

Save文件列表:
Save:SI\node\Macro_File.h


/***********************************************************************/
/****************************** tools **********************************/
/***********************************************************************/
[2.0] -------------------------------------
[2.0] 展讯:

[2.1] FontTool 字体:
open F:\6531E_16A\tools\DEBUG_TOOL\FONTTOOL\Bin\FontTool.exe 
open C:\Program^Files^(x86)\Pixtel^Media^Technology\MCT^6.0\MCTApp.exe
open C:\Program^Files^(x86)\Pixtel^Media^Technology\MCT^6.0\MCTApp.exe
F:\11CW1352MP_BLEPHONE61D_11C_V33\vendor\font\FontData\OfficialFont\RUSSIAN\Russian_18.bdf


[2.2] foobar2000 修改mp3 广告图标
open D:\Program Files (x86)\foobar2000\foobar2000.exe


[2.3] ResOver 网络参数
open E:\SVN\6531DA_new\tools\DEBUG_TOOL\ResOver\Bin\ResOver.exe

--------------------------------------------------
[3.0] -------------------------------------
[3.0] mtk:

mtk tools:
[3.1] mtk--MCTApp --不知道怎么用
open MCT_TOOL\MCTApp.exe

	
[3.2] mtk--STMTView 字符串工具:
open:plutommi\Customer\STMTView.exe
F:\11CW1352MP_MT6261DM\plutommi\Customer\CustResource\M103_KEMAN_MMI\ref_list_M103_KEMAN_2408.txt
F:\11CW1352MP_BLEPHONE61D_11C_V33\projects\M105\M105_XYZN_S1_C3_NEDADJ_F6\Resource\ref_list.txt

arabic: 062C ~ 0644
persion:062C ~ 06af  波斯文独有编码:8-0686 5-0698 2-067E 6-06Af
bengli: 0944 ~ 09EE
india:  093E ~ 095f

批量修改问题:
5.1 “,”->引号问题: 
       “,”换成“^”; 原来应该没有“^”, 最后再替换回来
       ":" 保存后也会有引号, 数量少 最后可以个别替换
5.2 excel保存->乱码问题:
       excel打开，复制出替换列(英文波斯)，
       批量修改翻译
       修改完替换excel 全部复制出来用其他工具/UE保存
5.3 还原逗号: “^”换成“,”
5.4 tab字符 问题: 
       新表行末少1个tab字符
       对比 ref_list.txt 将44个差异地方覆盖过去，
       ref_list.txt tab字符正常；差异项少1个tab不影响
5.5 用字符工具保存行末多了44个tab字符








--------------------------------------------------
[4.0] -------------------------------------
[4.1] SVN 配置:
C:\Users\Administrator\AppData\Roaming\Subversion\config

C:\Users\Administrator\AppData\Roaming\Subversion\config
//	global-ignores = *.o *.lo *.la *.al .libs *.so *.so.[0-9]* *.a *.pyc *.pyo __pycache__
//	 *.rej *~ #*# .#* .*.swp .DS_Store

--------------------------------------------------

[4.2] BCmp 配置:
C:\Users\Administrator\AppData\Roaming\Scooter^Software\Beyond^Compare^4



[4.3] git:
Save:SI\node\ToolsMsg\Macro_git.h
[4.4] vim:
Save:SI\node\ToolsMsg\Macro_vim.h
[4.5] SI:
Save:SI\node\ToolsMsg\Macro_SI.h


