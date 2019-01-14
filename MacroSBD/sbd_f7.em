
macro Tools()
{
	//_TempHeadF7(hbuf)
	var key
	var mode
	var modeNew
	
	hbuf = GetCurrentBuf()
	//��־����
	if(IsFileName(hbuf, "Macro_Note_"))
	{
		mFile = getNodePath(0) # "\\note\\Macro_Note_Tools.h"
		if(IsFileName(hbuf, "Macro_Note_Tools"))
		{
			close
		}
		else
		{
			OpenExistFile(mFile)
		}
		stop
	}
	
	mode = ReadMode(getToolsRow(0))
	//1. �������F7-��ʾ�б�
	ShowToolsMode(mode)

	
	//2. �������F7-������
	key = GetKey()
	if(key<97)
		key = key + 32	//Сд->��д

	if (key == 97) 		 		 //��ĸA     �����ʼ�
	{
		mFile = getNodePath(0) # "\\Tmp_Common.h"
		OpenExistFile(mFile)
	}
	else if (key == 98) 		 //��ĸB    tools: F5--Goto    F6--BComp,   ������Beyond Compare�Ƚ�·��
	{
		BComSetPath("")
	}
	else if (key == 99) //��ĸC
	{
		if (hbuf != 0)
		{
			curName = GetBufName(hbuf)
		    ShellSvnLog(curName)
		}
		return
	}
	else if (key == 101) //��ĸE
	{
		SelEditFile(key)
		return
	}
	else if (key == 102) //��ĸF
	{
		OpenEditDir(key)
		return
	}
	else if (key == 103) //��ĸG  tools: F5--Goto    F6--Rule
	{
	}
	else if (key == 105) //��ĸi
	{
	    SvnCommit(key)
		return
	}
	else if (key == 108) //��ĸL  tools: F5--Goto    F6--Close
	{
	}
	else if (key == 110) //��ĸN  tools: F5--Goto    F6--Goto Service
	{
	}
	else if (key == 112) //��ĸP
	{
		hbufClip = GetBufHandle("Clipboard")
		openbuf(hbufClip)
		setCurrentBuf(hbufClip)
		return
	}
	else if (key == 114) //��ĸR
	{
		if (hbuf != 0)
			AddRule(hbuf)
		return
	}
	else if (key == 116) //��ĸT
	{
		if (hbuf != 0)
		{
			curName = GetBufName(hbuf)
		    ShellSvnCommit(curName, "tmp")
		}
		return
	}
	else if (key == 117) //��ĸu
	{
	    SvnUpdate(key)
		return
	}
	else if (key == 118) //��ĸv
	{
	    BCompareSel(key)
		return
	}
	else if (key == 120) //��ĸX
	{
	    DeleteMkComment(key)
		return
	}
	else
	{
		msg (CharFromKey(key) # " @key@")
		return
	}

	//save switch:G S B
	modeNew = CharFromKey(key)
	if (mode != modeNew)
	{
		SaveMode(getToolsRow(0), "@modeNew@")
	}
}


//�л�F5/F6����������
macro SwtichTools(cmd)
{
	//_TempHeadF7(hbuf)
	val = ReadMode(getToolsRow(0))		//��ȡ��ǰ����:Ĭ��F5~goto           F6-rule
	
	//3. �������F7-������
	if(cmd == "F5")
	{
		if(val == "g")			//Goto -- Rule
		{
			return 1
		}
		else if(val == "s")		//Search -- AddParam
		{
			TwoWordFind(0)
			return 0
		}
		else if(val == "b")		//Goto -- BComp
		{
			return 1
		}
		else if(val == "n")		//Goto -- Goto Service
		{
			return 1
		}
		else
		{
			return 1			//default : Goto
		}
	}
	else if(cmd == "F6")
	{
		if(val == "g")			//Goto -- Rule
		{
			return 1
		}
		else if(val == "s")		//Search -- AddParam
		{
			AddParam(0)
			return 0
		}
		else if(val == "b")		//Goto -- BComp
		{
			BCompare("")
			return 0
		}
		else if(val == "l")		//Goto -- Close
		{
			close
			return 0
		}
		else if(val == "n")		//Goto -- Goto Service
		{
			hbuf = GetCurrentBuf()
			NoteHander(hbuf, 6)
			return 0
		}
		else
		{
			msg ("other work")
			return 0
		}
	}
}

//edit
macro SelEditFile(key)
{
	//_TempHeadF7(hbuf)
	mode = CharFromKey(AsciiFromChar(mode)-32)
	toolsMsg = "select edit file : " # CharFromKey(13)
	toolsMsg = toolsMsg # "1: Macro_Rule_Key_file.h"  # CharFromKey(13)
	toolsMsg = toolsMsg # "2: Macro_Rule_Han_file.h"  # CharFromKey(13)
	toolsMsg = toolsMsg # "3: Macro_Group_Menu.h"  # CharFromKey(13)
	toolsMsg = toolsMsg # "4: Macro_Group_Make.h"  # CharFromKey(13)
	toolsMsg = toolsMsg # "5: Macro_Note_Short.h"  # CharFromKey(13)
	toolsMsg = toolsMsg # "6: Macro_Note_Long.h"  # CharFromKey(13)
	msg ("@toolsMsg@")
	
	key = GetKey()
	if(key>48 && key<=48+5)
	{
		if (key == 49) 		 //1
		{
			OpenExistFile(getNodePath(0) # "\\rule\\Macro_Rule_Key_file.h")
		}
		else if (key == 50) //2
		{
			OpenExistFile(getNodePath(0) # "\\rule\\Macro_Rule_Han_file.h")
		}
		else if (key == 51) //3
		{
			OpenExistFile(getNodePath(0) # "\\search\\Macro_Group_Menu.h")
		}
		else if (key == 52) //4
		{
			OpenExistFile(getNodePath(0) # "\\search\\Macro_Group_Make.h")
		}
		else if (key == 53) //5
		{
			OpenExistFile(getNodePath(0) # "\\note\\Macro_Note_Short.h")
		}
		else if (key == 54) //6
		{
			OpenExistFile(getNodePath(0) # "\\note\\Macro_Note_Long.h")
		}
	}
	else
	{
		msg (CharFromKey(key) # " @key@")
	}
}

//edit
macro OpenEditDir(key)
{
	ret = ShellExecute("explore", getNodePath(0), "", "", 1)
}

//test
macro ShowToolsMode(mode)
{
	//_TempHeadF7(hbuf)
	mode = CharFromKey(AsciiFromChar(mode)-32)
	toolsMsg = "Tools Mode : [ @mode@ ]" # CharFromKey(13)
	toolsMsg = toolsMsg # "---switch-----------------"   # CharFromKey(13)
	toolsMsg = toolsMsg # "G: F5--Goto    F6--Rule"  # CharFromKey(13)
	toolsMsg = toolsMsg # "S: F5--Search  F6--AddParam"   # CharFromKey(13)
	toolsMsg = toolsMsg # "B: F5--Goto    F6--BComp"   # CharFromKey(13)
	toolsMsg = toolsMsg # "L: F5--Goto    F6--Close"   # CharFromKey(13)
	toolsMsg = toolsMsg # "N: F5--Goto    F6--Goto Service"   # CharFromKey(13)
	toolsMsg = toolsMsg # "---no switch--------------"   # CharFromKey(13)
	toolsMsg = toolsMsg # "U: Svn Update"   # CharFromKey(13)
	toolsMsg = toolsMsg # "I  : Svn Commit"   # CharFromKey(13)
	toolsMsg = toolsMsg # "C: Svn Log(Cur File)"   # CharFromKey(13)
	toolsMsg = toolsMsg # "T: Svn Commit(Cur File)"   # CharFromKey(13)
	toolsMsg = toolsMsg # "R: Rule       (once)"   # CharFromKey(13)
	toolsMsg = toolsMsg # "V: BComp Select  (1,2)"   # CharFromKey(13)
	toolsMsg = toolsMsg # "X: Del SR #.."   # CharFromKey(13)
	toolsMsg = toolsMsg # "P: Open Clipboard"   # CharFromKey(13)
	toolsMsg = toolsMsg # "E: Edit ..."   # CharFromKey(13)
	toolsMsg = toolsMsg # "F: Edit Dir"   # CharFromKey(13)
	toolsMsg = toolsMsg # "A: Edit Common Note"   # CharFromKey(13)
	//toolsMsg = toolsMsg # "C: Color"   # CharFromKey(13)
	msg ("@toolsMsg@")
}
