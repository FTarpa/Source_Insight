
macro Tree()
{
	//_TempHeadF1()
    hwnd = GetCurrentWnd()
    hbuf = GetCurrentBuf()
	if (hwnd == 0)
	{
    	hbuf = OpenDefaultSR(hbuf)
    	stop
	}

	//F1 as common test
	CommonTest(hbuf)
    
	key = GetKey()
	if (key >= 48 && key <= 57 )                     // ����0~9
	{
		TreeNum(hbuf, key)
	}
	else if (key >= 97 && key <= 122 )               // ��ĸa~z
	{
		TreeChar(hbuf, key)
	}
	else if (key >= 262209 && key <= 262209 + 26 )   // ctrl+a~z
	{
		TreeCtrlChar(hbuf, key)
	}
	else if (key >= 4208 && key <= 4219)             // F1~F12  ��ʾf1~f12 ����˵��(SI3.5����)
	{
		if(key == 4209) //F2
		{
			OpenPathExt(1)
		}
		else if(key == 4210) //F3
		{
			Search_Backward
		}
		else if(key == 4211) //F4
		{
			Search_Forward
		}
		else if(key == 4213) //F6
		{
			BCompare(1)
		}
		else
		{
			TreeFNum(hbuf, key-4207)
		}
	}
	else if (key >= 1048688 && key <= 1048699 )      // F1~F12  ��ʾf1~f12 ����˵��(SI4.0����)
	{
		if(key == 1048689) //F2
		{
			OpenPathExt(1)
		}
		else if(key == 1048690) //F3
		{
			Search_Backward
		}
		else if(key == 1048691) //F4
		{
			Search_Forward
		}
		else if(key == 1048693) //F6
		{
			BCompare(1)
		}
		else
		{
			TreeFNum(hbuf, key-1048687)
		}
	}
	else                                             //Other: -,+,back,del,�����
	{
		TreeOther(hbuf, key)
	}
}

macro TreeNum(hbuf, key)
{
	//_TempHeadF1()
	bft = getBft(2)

	if (key == 49) //����1
	{
		//����Ĭ��mk
		OpenDefaultMake(hbuf)
//		file = GetGroupItem(bft, 1, "Project", "File")
//		msg(selHead)
	}
	else if (key == 50) //����2
	{
		file = GetGroupItem(bft, 1, "Project", "File")
		OpenProjectFile(hbuf, file, "", "")
	}
	else if (key == 51) //����3
	{
		file = GetGroupItem(bft, 2, "Project", "File")
		OpenProjectFile(hbuf, file, "", "")
	}
	else if (key == 52) //����4
	{
		file = GetGroupItem(bft, 3, "Project", "File")
		word = "MMISET_EDEFAULT_LANGUAGE"
		OpenProjectFile(hbuf, file, "", word)
	}
	else if (key == 53) //����5
	{
		file1 = GetGroupItem(bft, 4, "Project", "File")
		file2 = GetGroupItem(bft, 5, "Project", "File")
		word = "menu_mainmenu_icon"
		OpenProjectFile(hbuf, file1, file2, word)
	}
	else if (key == 54) //����6
	{
		file = GetGroupItem(bft, 6, "Project", "File")
		OpenProjectFile(hbuf, file, "", "")
	}
	else if (key == 55) //����7
	{
		file = GetGroupItem(bft, 7, "Project", "File")
		OpenProjectFile(hbuf, file, "", "")
	}
	else if (key == 56) //����8
	{
		OpenBuildDir(hbuf)
	}
	else if (key == 57) //����9
	{
		//����Ĭ��mk
		SetDefaultMake(hbuf)
	}
	else if (key == 48) //����0
	{
		//����Ĭ��mk
		OpenDefaultMake(hbuf)
	}
}

macro TreeChar(hbuf, key)
{
	//_TempHeadF1()
	if (key == 97) //��ĸA
	{
		ShowHelp(hbuf, "[F1A]")
	}
	else if (key == 98) //��ĸB
	{
		path1 = getSavePath(0) # "\\SI"
		path2 = getSavePath(0) # "\\SI_bak"
		ShellBCompare(path1, path2)
	}
	else if (key == 99) //��ĸC
	{
		OpenCmdFile(hbuf)
	}
	else if (key == 100) //��ĸD
	{
		newkey = GetKey()
		msg ("key @newkey@")
	}
	else if (key == 101) //��ĸE
	{
		sel = MGetWndSel(hbuf)
		if (IsSingleSelect(sel))
		{
			cur_line = GetBufLine(hbuf, sel.lnFirst )	
			cch1 = AsciiFromChar(cur_line[sel.ichFirst])
			msg(cch1)
		}
	}
	else if (key == 102) //��ĸF
	{
		hprj = GetCurrentProj ()
		if(hprj>0)
		{
			msg ("ProjDir:" # GetProjDir (hprj))
		}
	}
	else if (key == 103) //��ĸG
	{
		FunTotal(hbuf)
	}
	else if (key == 105) //��ĸI
	{
		ShowSelAscii(hbuf)
	}
	else if (key == 107) //��ĸK
	{
	}
	else if (key == 108) //��ĸL  add link
	{
		AddLinkProjectName(hbuf)
	}
	else if (key == 109) //��ĸM  open mk
	{
		OpenSelMakeFile(hbuf)
	}
	else if (key == 110) //��ĸN  show filename
	{
		ShowFileName(hbuf, true)
	}
	else if (key == 111) //��ĸO open file dir
	{
		OpenProjectBase(hbuf)
	}
	else if (key == 112) //��ĸP open project
	{
		open_project
	}
	else if (key == 113) //��ĸQ clear clip
	{
		hbufClip = GetBufHandle("Clipboard")
		EmptyBuf(hbufClip)
	}
	else if (key == 114) //��ĸR  ����ظ� 48S �ܾ�
	{
		ChkRepeat(hbuf)
	}
	else if (key == 115) //��ĸS
	{
		sel = MGetWndSel(hbuf)
		msg(sel)
		SetClipString(sel) // ����sel�ṹ��
	}
	else if (key == 116) //��ĸT
	{
		OpenF1Test(hbuf)
	}
	else if (key == 118) //��ĸV  search version
	{
		SearchVersion(hbuf)
	}
	else if (key == 119) //��ĸW  close windows
	{
		WindowsCloseStyleOne(hbuf)
	}
	else if (key == 120) //��ĸX  ���.mk�Ҳ����ݣ����ڶԱ�
	{
		DeleteTxtRightMk(hbuf)
	}
	else if (key == 122) //��ĸZ
	{
		pick_window
	}
	else
	{
		msg ("key @key@")
	}
}

macro TreeCtrlChar(hbuf, key)
{
	//_TempHeadF1()
	if (key == 262209) //��ĸA
	{
		ShowHelp(hbuf, "[F1A]")
	}
	else if (key == 262212) //��ĸD
	{
		if(IsFileName(hbuf, "Macro_") || IsFileName(hbuf, "Simple_CTRL_"))
		{
			NoteGroupPreview(hbuf, 0)
		}
	}
	else
	{
		msg ("key @key@")
	}
}

macro TreeFNum(hbuf, key)
{
	//_TempHeadF1()
	if (key == 1) //F1
	{
		ShowHelp(hbuf, "[F1]")
	}
	else //F2~F12
	{
		if(key - 1>=9)
		{
			chr = "1" # CharFromKey(key - 1 + 49 -10)
		}
		else
		{
			chr = CharFromKey(key - 1 + 49)
		}
		ShowHelp(hbuf, "[F@chr@]")
	}
}


macro TreeOther(hbuf, key)
{
	//_TempHeadF1()
	if (key == 45) //-
	{
		// ����
		OpenToolsDownload(hbuf, False)
	}
	else if (key == 61) //+
	{
		// ���ز���ʼ��·��
		OpenToolsDownload(hbuf, TRUE)
	}
	else if (key == 8) //back
	{
		// ��SR
    	OpenDefaultSR(hbuf)
	}
	else
	{
		msg ("key @key@")
	}
}


macro ShowHelpLoop(hbuf)
{ 
	//_TempHeadF1()
	
	//������ʾ
	//ShowHelp(hbuf, "[" # "help" # "]")
	
	baseStr = ""
	ret = 0
	key = GetKey()
	if (key >= 48 && key <= 58)						// F12->0-9
	{
		ShowSimpleHelp(hbuf, "F1 -> " # CharFromAscii (key))
	}
	else if (key >= 96 && key <= 96+26)     		//F12->A,Z
	{
		ShowSimpleHelp(hbuf, "F1 -> " # CharFromAscii (key))
	}
	else if (key >= 262209 && key <= 262209+26)     //F12->Ctrl+A,Z
	{
		ShowSimpleHelp(hbuf, "F1 -> " # CharFromAscii (key-262209 + 96))
	}
	else if (key >= 4208 && key <= 4219)      		// F12->F1~F12  ��ʾf1~f12 ����˵��
	{
		if(key - 4208>=9)
		{
			chr = "1" # CharFromKey(key - 4208 + 49 -10)
		}
		else
		{
			chr = CharFromKey(key - 4208 + 49)
		}
		ShowHelp(hbuf, "[F@chr@]")
	}
	else if (key >= 1048688 && key <= 1048699)      // F12->F1~F12  SI3.5, 4.0 code��һ��
	{
		if(key - 1048688>=9)
		{
			chr = "1" # CharFromKey(key - 1048688 + 49 -10)
		}
		else
		{
			chr = CharFromKey(key - 1048688 + 49)
		}
		ShowHelp(hbuf, "[F@chr@]")
	}
	else
	{
		msg ("key @key@")
	}
}


macro ShowHelp(hbuf, key)
{
	isHelp = FALSE
	if (!IsFileName(hbuf, "Simple_CTRL_K.h"))
	{
		mFile = getNodePath(0) # "\\Simple_CTRL_K.h"
		hbuf = OpenCache(mFile)
		isHelp = TRUE
	}
	
	ShowMoreHelp(hbuf, ":",  key)
	
	if(isHelp)
	{
		CloseBuf(hbuf)
	}
}
macro ShowMoreHelp(hbuf, spit, key)
{
	//_TempHeadF1(hbuf)
	key = key # spit
	mSelStart = SearchInBuf(hbuf, key, 0, 0, FALSE, FALSE, FALSE)
	helpTxt = key # ":" # CharFromKey(13)

	if (mSelStart != "")
	{
		keyEnd = "*****"
		mSelEnd = SearchInBuf(hbuf, keyEnd, mSelStart.lnFirst, 0, FALSE, FALSE, FALSE)
		if (mSelEnd != "")
		{
			lastLn = mSelEnd.lnFirst
		}
		else
		{
			lastLn =  mSelStart.lnFirst + 10
		}
		ln = mSelStart.lnFirst + 1
		while (ln <  lastLn)
		{
			line = GetBufLine(hbuf, ln)
			helpTxt = helpTxt # line # CharFromKey(13)
			ln = ln + 1
		}
		if(helpTxt != "")
		{
			msg ("@helpTxt@")
		}
	}
	
}

macro ShowSimpleHelp(hbuf, key)
{
	//_TempHeadF1(hbuf)
	key = key # ":"
	mSelStart = SearchInBuf(hbuf, key, 0, 0, FALSE, FALSE, FALSE)
	helpTxt = key  # CharFromKey(13)
	
	if (mSelStart != "")
	{
		line = GetBufLine(hbuf, mSelStart.lnFirst)
		helpTxt = helpTxt # StrTrimSpaces(strmid(line, strlen(key), strlen(line)))
		if(helpTxt != "")
		{
			msg ("@helpTxt@")
		}
	}
}


macro CommonTest(hbuf)
{
	//F1��Ϊ(������)ͨ�ú����; 
	//F1->T����F1�Ĺ���[OpenF1Test()]
	if(IsMacroFile(hbuf))
	{
		if(IsFileName(hbuf, "sbd_f1.em")) // no use, use F1->T test
		{
			//OpenF1Test(hbuf)
			return
		}
		else if (IsFileName(hbuf, "sbd_base.em"))
		{
			OpenBaseTest(hbuf)
		}
		else if (IsFileName(hbuf, "sbd_f2.em"))
		{
			OpenPathTest(hbuf)
		}
		else if (IsFileName(hbuf, "sbd_f5.em"))
		{
			OpenF5Test(hbuf)
		}
		else if (IsFileName(hbuf, "sbd_f6.em"))
		{
			OpenF6Test(hbuf)
		}
		else if(IsFileName(hbuf, "sbd_f9.em"))
		{
			SearchTest(hbuf)
		}
		else if(IsFileName(hbuf, "sbd_f10.em"))
		{
			OpenF10Test(hbuf)
		}
		else if(IsFileName(hbuf, "sbd_f11.em"))
		{
			OpenF11Test(hbuf)
		}
		else if(IsFileName(hbuf, "sbd_f12.em"))
		{
			OpenF12Test(hbuf)
		}
		else if (IsFileName(hbuf, "sbd_ctrl.em"))
		{
			CtrlTest(hbuf)
		}
		else if (IsFileName(hbuf, "sbd_string.em"))
		{
			OpenStringTest(hbuf)
		}
		else if (IsFileName(hbuf, "sbd_shell.em"))
		{
			OpenShellTest(hbuf)
		}
		else if (IsFileName(hbuf, "sbd_translate.em"))
		{
			StrTranslate(hbuf)
		}
		else if (IsFileName(hbuf, "sbd_test.em"))
		{
			OpenAPITest(hbuf)
		}
		else
		{
			OpenAPITest(hbuf)
		}
		stop
	}
}

macro OpenF1Test(hbuf)
{
	//Tree()
	var ret
	var source
	var target
	source = "Search Results"
	
	target = "ch"
	ret = LFindString( source, target )
	msg ("ret " # "@ret@" # " @target@")
	
	target = "Se"
	ret = LFindString( source, target )
	msg ("ret " # "@ret@" # " @target@")
	
	target = "ch"
	ret = FindString( source, target )
	msg ("ret " # "@ret@" # " @target@")
	
	target = "CH"
	ret = FindString( source, target )
	msg ("ret " # "@ret@" # " @target@")
}

