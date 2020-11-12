
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
	
	if(IsNoteFile(hbuf) || IsMacroFile(hbuf))
	{
		Item_Tree(0)
		stop	}
    
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
		if(key == 1048688)      //F1
		{
			//�򿪻�����Ĭ����Ŀ
			OpenDefaultProject(hbuf)
		}
		else if(key == 4209) //F2
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
			//TreeFNum(hbuf, key-4207)
		}
	}
	else if (key >= 1048688 && key <= 1048699 )      // F1~F12  ��ʾf1~f12 ����˵��(SI4.0����)
	{
		if(key == 1048688)      //F1
		{
			//�򿪻�����Ĭ����Ŀ
			OpenDefaultProject(hbuf)
		}
		else if(key == 1048689) //F2
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
			//TreeFNum(hbuf, key-1048687)
		}
	}
	else                                             //Other: -,+,back,del,�����
	{
		TreeOther(hbuf, key)
	}
}

macro Item_1()		{		Item_Tree(1)	}
macro Item_2()		{		Item_Tree(2)	}
macro Item_3()		{		Item_Tree(3)	}
macro Item_4()		{		Item_Tree(4)	}
macro Item_5()		{		Item_Tree(5)	}
macro Item_6()		{		Item_Tree(6)	}
macro Item_7()		{		Item_Tree(7)	}
macro Item_8()		{		Item_Tree(8)	}
macro Item_9()		{		Item_Tree(9)	}
macro Item_10()		{		Item_Tree(10)	}

macro Item_Tree(num)
{
    hbuf = GetCurrentBuf()

	global g_sel
	global g_ok

	if(num == 0)
	{
		g_sel = 0
		ShowFHelp(hbuf, "Base")
		stop
	}
	else if(g_sel == 0 && num == 8)
	{
		//������ʾ
		ShowFHelp(hbuf, "F1")
		stop
	}
	else if(g_sel == 0 && num == 9)
	{
		//��ĸ��ʾ(���)
		ShowFHelp(hbuf, "F1A")
		stop
	}
	else if(g_sel == 0 || g_sel > 100)
	{
		g_sel = num*10
		//��ʾ11~19����61~69
		msg(g_sel)
		stop
	}
	else
	{
		g_ok = g_sel + num
	}
	Code_Tree(g_ok)
}

macro Code_Tree(g_ok)
{
    hbuf = GetCurrentBuf()
    
	if(g_ok > 10 && g_ok <= 20)
	{
		if (g_ok == 20)
			key = g_ok - 20 + 48
		else
			key = g_ok - 10 + 48
		
		msg("TreeNum " # key)
		//����0~9,10��
//		TreeNum(hbuf, key)
	}
	else if(g_ok > 20 && g_ok <= 46)
	{
		//a-j, k-t, u-z,
		upper_key = g_ok - 20 + 64
		lower_key = upper_key + 32
		
		mBuf = OpenCache(getNodePath(0) # "\\Simple_CTRL_K.h")
		ShowSimpleHelp(mBuf, "F1 -> " # CharFromAscii (upper_key), "(@lower_key@)")
		CloseBuf(mBuf)
		
		TreeChar(hbuf, lower_key)
	}
	else if(g_ok > 50 && g_ok <= 60)
	{
		//f1-f10,6��
		key = g_ok - 20 + 96
		msg("f1-f10, " # key)
//		TreeChar(hbuf, key)
	}
	else if(g_ok > 60 && g_ok <= 70)
	{
		//f11-f12, Other
		key = g_ok - 20 + 96
		msg("f1-f10, " # key)
//		TreeChar(hbuf, key)
	}
	else if(g_ok > 70 && g_ok <= 80)
	{
		//ctrl+a~D
		key = g_ok - 20 + 96
		msg("f1-f10, " # key)
//		TreeOther(hbuf, key)
	}
	else
	{
		msg("g_ok, " # g_ok)
	}
}

macro TreeNum(hbuf, key)
{
	//_TempHeadF1()
	//ָ��Ĭ���ļ�����Ϊ����Ŀ¼
	if (key != 49)
	{
		bft = getBft(2)
	}
	
	if (key == 49) //����1
	{
		//����Ĭ��file
		SetDefaultProject(hbuf)
//		file = GetGroupItem(bft, 1, "Project", "File")
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
		ShowFHelp(hbuf, "F1A")
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
			
			chars = sel.ichLim - sel.ichFirst
			if(chars > 25)
				chars = 25
			i = 0
			clist = ""
			while (i < chars)
			{
				ch = cur_line[sel.ichFirst + i]
				cch = AsciiFromChar(ch)
				clist = clist #  (i+1) # " ---- "  # ch # " ---- " # cch # CharFromKey(13)
				i = i + 1
			}
			msg(clist)
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
		//
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
		ShowFHelp(hbuf, "F1A")
	}
	else if (key == 262212) //��ĸD
	{
		if(IsNoteFile(hbuf))
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
	if (key == 12) 		//12->1, F1
	{
		ShowFHelp(hbuf, "F1")
	}
	else 				//1->12, F2~F12
	{
		if(key - 1>=9)
		{
			chr = "1" # CharFromKey(key - 1 + 49 -10)
		}
		else if(key==1)
		{
			chr = "12"
		}
		else
		{
			chr = CharFromKey(key - 1 + 49)
		}
		ShowFHelp(hbuf, "F@chr@")
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

