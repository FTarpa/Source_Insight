
//Ŀ¼[Num][Ca]:
// F11���ܲ���:
Save:SI\node\Test\Macro_Tmp_Node_F11.h \[1.1\] open
Save:SI\node\Test\Macro_Tmp_Node_F11.h \[1.2\] make
Save:SI\node\Test\Macro_Tmp_Node_F11.h \[1.3\] vc
Save:SI\node\Test\Macro_Tmp_Node_F11.h \[1.4\] set
Save:SI\node\Test\Macro_Tmp_Node_F11.h \[1.5\] cp
// ����·������:
Save:SI\node\Test\Macro_Tmp_Node_F11.h \[2.1\] ����·��
Save:SI\node\Test\Macro_Tmp_Node_F11.h \[2.2\] ɾ�ո����
// F11���ܲ���:
Save:SI\node\Test\Macro_Tmp_Node_F11.h \[3.1\] �¼��滻Ŀ¼:
Save:SI\node\Test\Macro_Tmp_Node_F11.h \[3.2\] ����ע��

//�ο����:
Save:SI\node\Test\Macro_Tmp_Node_Num.h






[1.1] open
//open     �����ʼ�; ��exe; ���ļ�+�ؼ���; ��Macro_��ͷ�ļ���ֻ����������ļ�
open:plutommi\Customer\STMTView.exe


//openCmd 


//cmd 	   ����cmd���� ������cmd
cmd: cmd


[1.2] make
//make     ����cmd����
make M115_JGW_D2_X191_F2 gprs gen_modis


//python   ����cmd����
python S069_HK_H1822_IRBIS_SF31_F2_QQVGA


//ctmake   ������cmd����, ֻ����
ctmake -j 16 CT_TARGET=S069_HK_H1822_IRBIS_SF31_F2_QQVGA


//xmake    ������cmd����, ֻ����
ctmake -j 16 CT_TARGET=S069_HK_H1822_IRBIS_SF31_F2_QQVGA


[1.3] vc
//vc 	   
vc: build\SE818BC_BY_S018_JX_64_64_F3_builddir\win\simulator.dsw


//vs08     
vs08:MoDIS_VC9\MoDIS.sln


//call     ������cmd����, ֻ����


[1.4] set
//set  
set M101_COOLCEL_CS181_M_BRAVIS_F3 M101_COOLCEL gsm


//setPath  
setPath old (����һ�а�F5, ��ʼ�滻)


//setProPath  
setProPath plutommi\\Customer\\Audio\\M115\\M115_JGW_D2_X191_F2 = AUDIO\\PLUTO


//sethistory: 



[1.5] cp
//cp:	   �����ļ�
cp Save:SI\node\Test\Tmp_Test.h Save:SI\node\Test\Tmp_Test_new.h
	
//RAR:
RAR Save:SI\node\Test\Tmp_Test.h Save:SI\node\Test\Tmp_Test_new.h
RAR Save:SI\node\Test\Tmp_Test.h



[2.1] ����·��
//1. "E:XXX YYY" ��ȡ·��Ϊ "E:XXX"

//cfg--fs
Tool:soft_zip_mp3\BLEPHONE61D_11C_BB.cfg main_region

root->F


[2.2] ɾ�ո����



[3.1] �¼��滻Ŀ¼:
Save:SI\MacroSBD\sbd_f11.em 327
// ���:
//		else if(noteCmd == "Save" || noteCmd == "Tool")

Save:SI\MacroSBD\sbd_file.em macro^GetTransFileName( )
// ������:
//	fName = ReplaceWord(fName, "Save:", getSavePath(0) # "\\")
//	fName = ReplaceWord(fName, "Project:", getCustomPath(0) # "\\")
//	fName = ReplaceWord(fName, "Tool:", getCustomPath(0) # "\\")



[3.2] ����ע��:
// ����test msg��
Save:SI\MacroSBD\sbd_test.em macro^TestMsg( )
//	ȡ��ע��:
//	TestMsg(msgStr)


Msg("cmdP1 " # cmdP1 # CharFromKey(13)
# "cmdP2 " # cmdP2 # CharFromKey(13))

TestMsg(cmdStr)









