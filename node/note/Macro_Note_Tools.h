快捷键：
F7：打开/关闭笔记
F2： 打开选择的路径/文件; 文件名+扩展名
F5： 打开tools文件; 当前行以open开头

--------------------------------------------------
tools:


1 FontTool:
open F:\6531E_16A\tools\DEBUG_TOOL\FONTTOOL\Bin\FontTool.exe 
open C:\Program^Files^(x86)\Pixtel^Media^Technology\MCT^6.0\MCTApp.exe
open C:\Program^Files^(x86)\Pixtel^Media^Technology\MCT^6.0\MCTApp.exe
F:\11CW1352MP_BLEPHONE61D_11C_V33\vendor\font\FontData\OfficialFont\RUSSIAN\Russian_18.bdf


2 修改mp3 广告图标
open D:\Program Files (x86)\foobar2000\foobar2000.exe


3 网络参数
open E:\SVN\6531DA_new\tools\DEBUG_TOOL\ResOver\Bin\ResOver.exe
	
--------------------------------------------------
mtk tools:
4 --不知道怎么用
open MCT_TOOL\MCTApp.exe

	
5 字符串工具：
open:plutommi\Customer\STMTView.exe
F:\11CW1352MP_MT6261DM\plutommi\Customer\CustResource\M103_KEMAN_MMI\ref_list_M103_KEMAN_2408.txt
F:\11CW1352MP_BLEPHONE61D_11C_V33\projects\M105\M105_XYZN_S1_C3_NEDADJ_F6\Resource\ref_list.txt

arabic: 062C ~ 0644
persion:062C ~ 06af  波斯文独有编码：8-0686 5-0698 2-067E 6-06Af
bengli: 0944 ~ 09EE
india:  093E ~ 095f

批量修改问题：
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






6 Mtk modis：
拨号按键:
ExecuteCurrKeyHandler
plutommi\Framework\GUI\GUI_SRC\wgui.c void^MMI_key_input_handler
plutommi\Framework\GUI\GUI_SRC\wgui_inputs_dialer.c void^wgui_inputs_dialer_handle_key_down

--------------------------------------------------

其他文档:

模拟器: 常用断点
open:{save}\SI\node\si_modis_6531E.h

open:{save}\SI\node\si_modis_MTK.h

	
快捷键 查看详细功能： (open文件并跳转到"F5") 
open:{save}\SI\node\Simple_CTRL_K.h [F5]


--------------------------------------------------
SVN 配置：
C:\Users\Administrator\AppData\Roaming\Subversion\config

C:\Users\Administrator\AppData\Roaming\Subversion\config
//	global-ignores = *.o *.lo *.la *.al .libs *.so *.so.[0-9]* *.a *.pyc *.pyo __pycache__
//	 *.rej *~ #*# .#* .*.swp .DS_Store

--------------------------------------------------

BCmp 配置：
C:\Users\Administrator\AppData\Roaming\Scooter^Software\Beyond^Compare^4

