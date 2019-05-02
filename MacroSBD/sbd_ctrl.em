
/***********************************************************************/
/****************************    Mathod   ******************************/
/***********************************************************************/
macro CtrlD()
{
	//_TempHeadCTRL()
    hbuf = GetCurrentBuf()
	hwnd = GetCurrentWnd()
	if (hwnd == 0)
		stop

	//1.1 ��SR��,��������ѡ��ͬ������
	//1.2 ���������, ɾ��ѡ����
	if(IsSRFile(hbuf))
	{
		sel = MGetWndSel(hbuf)
		if (!IsMoreSelect(sel))
		{
			CtrlUpAndDown(hbuf)
		}
		else
		{
			//ֻ����SR��ɾ����
			lnMax = sel.lnLast
			while (lnMax >= sel.lnFirst)
			{
				DelBufLine(hbuf, lnMax)
				lnMax = lnMax - 1
			}
			curSel = MGetWndSel(hbuf)
			ScrollCurWnd(hbuf, 3, curSel, curSel.lnFirst) //down
		}
	}
	//2. ��ref_list��,��һ������
	else if(IsFileName(hbuf, "ref_list"))
	{
		sel = MGetWndSel(hbuf)
		cur_line = GetBufLine(hbuf, sel.lnFirst )
		ch = strmid(cur_line, sel.ichFirst, sel.ichFirst+1)
		asi0 = AsciiFromChar (ch)
		if(asi0 != 9)
		{
			//msg ("asi @asi0@")
		}
		ich = sel.ichFirst + 1
		ichMax = strlen(cur_line)
		while (ich < ichMax)
		{
			ch = cur_line[ich]
			asi = AsciiFromChar (ch)
			if(asi == 9)
			{
				sel.ichFirst = ich
				sel.ichLim = ich+1
				SetWndSel(hwnd, sel)
				break
			}
			ich =  ich + 1
		}
	}
	//6. other file��Simple_CTRL_xxx�� �ո����
	else if(IsFileName(hbuf, "Simple_CTRL_B"))
	{
		CodeAlign(hbuf)
		stop
	}
	//3. Macro_xxx �� ͬF10
	else if(IsFileName(hbuf, "Macro_")||IsFileName(hbuf, "Simple_CTRL_"))
	{
		NoteGroup(hbuf)
		stop
	}
	//4. .mk .def .mak�� ͬF10
	else if(IsMakeFile(hbuf))
	{
		MakeGroup(hbuf)
		stop
	}
	//5. *.em �� ͬF10
	else if(IsMacroFile(hbuf))
	{
		ShowMacroGroup(hbuf)
		stop
	}
	//6. other file��Simple_CTRL_xxx�� �ո����
	else
	{
		CodeAlign(hbuf)
		stop
	}
}
macro CtrlB()
{
	//_TempHeadCTRL()
	hbuf = GetCurrentBuf()
	hwnd = GetCurrentWnd()
	if (hwnd == 0)
		stop
		
	code = ReadMode(getFileCode(0))
	if(code == "utf8")
		fName = "Simple_CTRL_B_UTF8.h"
	else
		fName = "Simple_CTRL_B.h"
	
	if(IsFileName(hbuf, fName))
	{
		close
	}
	else
	{
		OpenExistFile(getNodePath(0) # "\\" # fName)
	}
}
macro CtrlK()
{
	//_TempHeadCTRL()
	hbuf = GetCurrentBuf()
	hwnd = GetCurrentWnd()
	if (hwnd == 0)
		stop
		
	if(IsFileName(hbuf, "Simple_CTRL_K.h"))
	{
		close
	}
	else
	{
		OpenExistFile(getNodePath(0) # "\\Simple_CTRL_K.h")
	}
}
macro CtrlE()
{
	//_TempHeadCTRL()
	Open
    /*
    hbuf = GetCurrentBuf()
    if(IsSRFile(hbuf))
	{
		mode = ReadMode(getLastCommandRow(0))
	 	if(mode == "CtrlE")
		{
			SaveMode(getLastCommandRow(0), "Ctrl")
			open_project
		}
		else
		{
			SaveMode(getLastCommandRow(0), "CtrlE")
		}
	}
	else
	{
		SaveMode(getLastCommandRow(0), "CtrlE")
		Open
	}*/
}
macro CtrlT()
{
    //����true/false
	hwnd = GetCurrentWnd()
	hbuf = GetCurrentBuf()
	if (hwnd == 0)
	{
    	hbuf = OpenDefaultSR(hbuf)
    	stop
	}

	var cur_line
	var mar
	var val
	if(IsMakeFile(hbuf))
	{
		isMkT = 0
		sel = MGetWndSel(hbuf)
		if(sel.lnFirst == sel.lnLast)
		{
			cur_line = GetBufLine(hbuf, sel.lnFirst )
			mar = GetLineMacro(cur_line)
			val = GetLineValue(cur_line)
			if(sel.ichFirst != sel.ichLim)
			{
				selStr = strmid(cur_line, sel.ichFirst, sel.ichLim)
				if(selStr == mar)
					isMkT = 1
			}
			else
			{
				isMkT = 1
			}
		}
		if(isMkT == 1)
		{
			index = FindString( cur_line, val )
			len = strlen(cur_line)
			if(val == "TRUE")
			{
				reVal = "FALSE"
				strNew = strmid(cur_line,0,index) # reVal # strmid(cur_line, index+strlen(val), strlen(cur_line))
				PutBufLine(hbuf, sel.lnFirst, strNew);
			}
			else if(val == "FALSE")
			{
				reVal = "TRUE"
				strNew = strmid(cur_line,0,index) # reVal # strmid(cur_line, index+strlen(val), strlen(cur_line))
				PutBufLine(hbuf, sel.lnFirst, strNew);
			}
			else if(val != "")
			{
				//"NONE" ...
				reVal = GetClipString(hbuf)
				if(clipStr=="")
					stop
				//�����ֵ�����а� 
				SetClipString(val)
				strNew = strmid(cur_line,0,index) # reVal # strmid(cur_line, index+strlen(val), strlen(cur_line))
				PutBufLine(hbuf, sel.lnFirst, strNew);
			}
			else
			{
				//��ĩβ�� = TRUE
				strNew = cur_line # "    = TRUE"
				PutBufLine(hbuf, sel.lnFirst, strNew);
			}
			SaveBuf(hbuf)
		}
		else
		{
			///###
		}
	}
	else if(IsScriptFile(hbuf))
	{
		fstr = GetFirstChar(hbuf, 1)
		if(fstr == "#")
		{
			UncommentScript(hbuf)
		}
		else
		{
			CommentScript(hbuf)
		}
	}
	else 
	{
		fstr = GetFirstChar(hbuf, 2)
		if(fstr == "//")
		{
			//UncommentBlock(hbuf)
			UncommentBlock2(hbuf)
		}
		else
		{
			//CommentBlock(hbuf)
			CommentBlock2(hbuf)
		}
	}
}
macro CtrlR()
{
	//_TempHeadCTRL()
	hbuf = GetCurrentBuf()
	if(IsFileName(hbuf, "Macro_")||IsFileName(hbuf, "Simple_CTRL_"))
	{
		//1. �ļ���������ת
		sel = MGetWndSel(hbuf)
		searchStr = ""
		cur_line = GetBufLine(hbuf, sel.lnFirst )	
		if(strlen(cur_line) <= 2)
			stop
		
		cur_sel_left  = FindString( cur_line, "\[" )
		cur_sel_right = FindString( cur_line, "\]" )
		if(cur_sel_left != "X" && cur_sel_right != "X")
		{
			cur_sel_right_pre = strmid(cur_line, cur_sel_right - 1, cur_sel_right)
			if(cur_sel_right_pre != "\\" )
			{
				searchStr = "\\\[" # strmid(cur_line, cur_sel_left + 1, cur_sel_right) # "\\\]"
				sel2 = SearchInBuf(hbuf, searchStr, 0, 0, FALSE, FALSE, FALSE)
				if (sel2 != "")
				{
					TestMsg("��ת��Ŀ¼: " # searchStr)
					ScrollCursor(sel2)
					stop
				}
			}
		}
		//2. �ļ�����ת��һ���ļ�/Ŀ¼
		NoteHander(hbuf, 5)
	}
	else
	{
		go_to_next_link
	}
}
macro CtrlW()
{
	//_TempHeadCTRL()
	hbuf = GetCurrentBuf()
	hwnd = GetCurrentWnd()
	if (hwnd == 0)
		stop
	if(!IsSRFile(hbuf))
	{
		if(IsFileName(hbuf, "Macro_Note_"))
		{
			bft = getBft(1)
			if(bft == "9820e")
			{
				//msg("�޷��ر�, ���ո��ȡ��")
			}
			else
			{
				lnTop = GetWndVertScroll(hwnd);
				SaveMode(getWndVertRow(0), "@lnTop@")
				close
			}
		}
		else
		{
			CloseWnd(hwnd)
		}
	}
	/*
	else
	{
		//-->���Ըĳ�ѡ��
		count = GetBufLineCount(hbuf)
		if(count>40)
		{
			ln = count / 2 - 1
			if(ln<0)
				ln = 0
			while(ln>=0)
			{
				DelBufLine(hbuf, ln)
				ln = ln - 1
			}
			SaveBuf(hbuf)
		}
	}*/
	SaveMode(getLastCommandRow(0), "CtrlW")
}
macro CtrlQ()
{
	//_TempHeadCTRL()
	//����һ������
	hwnd = GetCurrentWnd()
	if (hwnd == 0)
		stop
	hwndNext = GetNextWnd(hwnd)
	if (hwndNext == 0)
		stop
	hbuf = GetWndBuf(hwndNext)
	SetCurrentBuf(hbuf)
}
macro CtrlU()
{
	hbuf = GetCurrentBuf()
	//���ܴ�-1,ֻ�ܴ���
	rowMax = GetClipStringI(hbuf, "")
	if(rowMax==0)
		stop

	sel = MGetWndSel(hbuf)
	row = sel.lnFirst
	//ģʽ1: ����ѡ��: str              +ÿ��
	//ģʽ2: ��     ѡ   : str[i]+�ո�+ÿ��
	if(IsMoreSelect(sel))
	{
		clipStr = GetClipStringI(hbuf, 0)
		//ģʽ3: ����ѡ��: ���ֵ���              +ÿ��
		//rowMax == sel.lnLast - sel.lnFirst + 1 && 
		if(IsNumber (clipStr))
		{
			while (row < sel.lnLast + 1)
			{
				cur_line = GetBufLine(hbuf, row)
				PutBufLine(hbuf, row, clipStr # cur_line);
				clipStr = clipStr + 1
				row = row + 1
			}
		}
		else if(FindString( clipStr, "^p" ) != "X")
		{
			spaceRow = strlen(clipStr)
			clipStr = ReplaceWord(clipStr, "^p", "")
			spaceRow = (spaceRow - strlen(clipStr))/2
			while (row < sel.lnFirst + (sel.lnLast - sel.lnFirst + 1)*(spaceRow + 1))
			{
				n = spaceRow
				while (n>0)
				{
					InsBufLine(hbuf, row, "");
					n = n - 1
				}
				row = row + 1 + spaceRow
			}
		}
		else
		{
			while (row < sel.lnLast + 1)
			{
				cur_line = GetBufLine(hbuf, row)
				PutBufLine(hbuf, row, clipStr # cur_line);
				row = row + 1
			}
		}
	}
	else if(rowMax == 1)
	{
		//ͬ��
		clipStr = GetClipStringI(hbuf, 0)
		while (row < sel.lnLast + 1)
		{
			cur_line = GetBufLine(hbuf, row)
			PutBufLine(hbuf, row, clipStr # cur_line);
			row = row + 1
		}
	}
	else
	{
		while (row < sel.lnFirst + rowMax)
		{
			cur_line = GetBufLine(hbuf, row)
			clipStr = GetClipStringI(hbuf, row - sel.lnFirst)
			PutBufLine(hbuf, row, clipStr # " " # cur_line);
			row = row + 1
		}
	}
	SaveBuf(hbuf)
}
macro CtrlI()
{
	hwnd = GetCurrentWnd()
	if (hwnd == 0)
		stop
	hbuf = GetCurrentBuf()
	iStart = 0
	iEnd = 0
	
	sel = MGetWndSel(hbuf)
	row = sel.lnFirst
	cur_line = GetBufLine(hbuf, row)
	len = strlen(cur_line)
	
	//ת��ʽ:
	//  sprd_apps.mk (customize/customer_cfg/sp6820a/res)
	//->customize/customer_cfg/sp6820a/res/sprd_apps.mk
	iKl = FindString( cur_line, "(" )
	iKr = FindString( cur_line, ")" )
	if(iKl != "X" && iKr != "X")
	{
		if(IsSingleSelect(sel))
		{
			iStart = sel.ichFirst
			iEnd   = sel.ichLim 
		}
		else
		{
			iStart = 0
			iEnd = 0
		}
		//msg(iKl # " " # iKr # " " # iStart # " " # iEnd # " " # len)
		str1 = strmid(cur_line, 0, iStart)
		str2 = strmid(cur_line, iKl + 1, iKr)
		str3 = strmid(cur_line, iStart, iKl)
		str4 = strmid(cur_line, iKr + 1, len)
		
		strAll = str1 # str2 # "\\" # str3 # str4
		PutBufLine(hbuf, row, strAll)
		SaveBuf(hbuf)
		stop
	}
	//ת��ʽ:
	//  4.7.22
	//->[4.7.22]
	//�����е�����: -����Ϊ.ƥ��; ����ƥ�����Ҫ�ֶ�ѡ����һ�����
	iKl = FindString( cur_line, "." )
	if(iKl != "X")
	{
		if(IsSingleSelect(sel))
		{
			iStart = sel.ichFirst
			iEnd   = sel.ichLim 
			if(iStart>0)
				ch   = strmid(cur_line, iStart - 1, iStart)
			if(ch != "[")
			{
				//msg(iKl # " " # iKr # " " # iStart # " " # iEnd # " " # len)
				str1 = strmid(cur_line, 0, iStart)
				chEnd   = strmid(cur_line, iEnd - 1, iEnd)
				if(chEnd == ".")
					str2 = strmid(cur_line, iStart, iEnd - 1)
				else
					str2 = strmid(cur_line, iStart, iEnd)
				str3 = strmid(cur_line, iEnd, len)
				strAll = str1 # "[" # str2 # "]" # str3
				PutBufLine(hbuf, row, strAll)
				SaveBuf(hbuf)
				sel.ichLim = sel.ichLim + 2
				//SetWndSel(hwnd, sel)
			}
			
			//������һ�����
			sel.lnFirst = sel.lnFirst + 1
		}
		{
			//������һ�����
			//searchStr = "\\[[0-9.]+\\]"
			searchStr = "[0-9]+\.[0-9\.]+"
			sel2 = SearchInBuf(hbuf, searchStr, sel.lnFirst, 0, TRUE, TRUE, FALSE)
			if (sel2 != "")
			{
				SetWndSel(hwnd, sel2)
			}
			else
			{
				SetWndSel(hwnd, sel)
			}
		}
		stop
	}
	
}
macro CtrlN()
{
	//��ӿ���
	hbuf = GetCurrentBuf()
	
	sel = MGetWndSel(hbuf)
	row = sel.lnFirst
	if(IsMoreSelect(sel))
	{
		iR = row
		while (iR < sel.lnLast + 1)
		{
			InsBufLine(hbuf, row, "")
			iR = iR + 1
		}
	}
	else
	{
		iR = 0
		while (iR < 10)
		{
			InsBufLine(hbuf, row, "")
			iR = iR + 1
		}
	}
	SaveBuf(hbuf)
}
macro CtrlC()
{
	hbuf = GetCurrentBuf()
	sel = MGetWndSel(hbuf)
	row = sel.lnFirst
	if(IsHasSelect(sel))
	{
		Copy
	}
	else
	{
		//��ǰ��
		cur_line = GetBufLine(hbuf, row)
		
		//����Ŀ���� (�ļ�������)
		mKey = "newPro"
		newPro = getMacroValue(hbuf, mKey, 1)
		
		//����Ŀ���� (������)
		baseDir = getBasePath(hbuf)
		//baseDir = "F:\\11CW1352MP_BLEPHONE61D_11C_V33"
		setProPath = ReadMode(getNoteHanderSet(0))
		len = strlen(setProPath)
		//������ת��: ɾ���ո�
		start = GetTransCmdS(setProPath, 0, len)
		next  = GetTransCmdE(setProPath, start,     len)
		oldPro = strmid(setProPath, start, next)
		
		//�������
		//�ļ���ת��:
		//ת��"Save:"�����ָ�Ŀ¼�������ĿĿ¼���滻"^"Ϊ�ո�
		cmdPath1 = GetTransFileName(hbuf, cur_line, 0)
		cmdPath2 = ReplaceWord(cmdPath1, oldPro, newPro)
		if(cmdPath1 == cmdPath2)
			stop
		cmdStr = "copy " # cmdPath1 # " " # cmdPath2

		//���������, ������ʾ, ȡ������
		msg(cmdStr)
		
		//ִ������
		ShellOpenCustomCmd(cmdStr)

		//�������ļ�����
		insStr = ReplaceWord(cur_line, oldPro, newPro)
		InsBufLine(hbuf, row + 1, insStr)
		SaveBuf(hbuf)
	}
}
macro CtrlBack()
{
	hbuf = GetCurrentBuf()
	if(IsSRFile(hbuf))
	{
		Jump_To_Link
	}
	else
	{
		OpenDefaultSR(hbuf)
	}
}
/***********************************************************************/
/****************************    Direct   ******************************/
/***********************************************************************/
macro CtrlUpAndDown(hbuf)
{
	//_TempHeadCTRL()
	ChangeSel(hbuf, 4)
	ChangeSel(hbuf, 5)
}
macro CtrlUp()
{
	//_TempHeadCTRL()
    hbuf = GetCurrentBuf()
	if(IsSRFile(hbuf))
	{
		ChangeSel(hbuf, 1)
	}
	else
	{
		//��ѡ����
		sel = MGetWndSel(hbuf)
		if(IsNoRowSelect(sel))
		{
			Jump_To_Caller
		}
		else
		{
			Drag_Line_Up
		}
	}
}
macro CtrlDown()
{
	//_TempHeadCTRL()
    hbuf = GetCurrentBuf()
	if(IsSRFile(hbuf))
	{
		ChangeSel(hbuf, 3)
	}
	else
	{
		Drag_Line_Down
	}
}
macro CtrlLeft()
{
	//_TempHeadCTRL()
    hbuf = GetCurrentBuf()
	if(IsSRFile(hbuf))
	{
		ChangeSel(hbuf, 0)
	}
	else
	{
		Word_Left
	}
}
macro CtrlRight()
{
	//_TempHeadCTRL()
    hbuf = GetCurrentBuf()
	if(IsSRFile(hbuf))
	{
		ChangeSel(hbuf, 2)
	}
	else
	{
		Word_Right
	}
}

//direct = 0 left; 1 top; 2 right; 3 down; 4/5 up and down;
macro ChangeSel(hbuf, direct)
{
	var sel
	var mode
	var mode_len
	var cur_line
	var cur_sel
	var ln
	var lnMin
	var lnMax
	var diff

	hwnd = GetCurrentWnd()
	if (hwnd == 0)
		stop
	
	//���ñ�����Χ
	sel = MGetWndSel(hbuf)
	if(direct==1 || direct==4)//top
	{
		lnMin =  sel.lnFirst - 1
		lnMax = 0
		diff = -1
		if(lnMin < 0)
		{
			stop
		}
	}
	else if(direct==3 || direct==5)//down
	{
		lnMin =  sel.lnLast + 1
		lnMax = GetBufLineCount(hbuf)
		diff = 1
		if(lnMin > lnMax - 1)
		{
			stop
		}
	}
	else
	{
		stop
	}
	
	if (IsSingleSelect(sel))
	{
		if(direct==4||direct==5)//Up And Down
		{
			//ѡ��һ�У���Ӳ���
			cur_line = GetBufLine(hbuf, lnMin - diff)
		}
		else
		{
			//ѡ��һ�У���Ӳ���
			cur_line = GetBufLine(hbuf, lnMin)
		}
		
		//��ȡ���׵���
		mode = GetLineMacro(cur_line)
		mode_len = strlen(mode)
		if(mode_len > sel.ichLim)
		{
			//���õ�ǰѡ�񣬸���
			mode = strmid(cur_line, sel.ichFirst, sel.ichLim)
			mode_len = strlen(mode)
		}
		SaveMode(getSRTmpRow(0), "@mode@")
	}
	else if (IsMoreSelect(sel))
	{
		if(direct==4)//Up And Down
		{
			stop
		}
		//ѡ����У���ȡ����
		mode = ReadMode(getSRTmpRow(0))
		mode_len = strlen(mode)
		
		cur_line = GetBufLine(hbuf, lnMin)
		ret = LFindStringExt(cur_line, mode , mode_len)
		//msg ("Find @ret@   @cur_line@  @mode@ ")
		if(ret == "X")
		{
			if(direct==5)//Up And Down
			{
				stop
			}
			//��ȡ���׵���
			mode = GetLineMacro(cur_line)
			mode_len = strlen(mode)
			SaveMode(getSRTmpRow(0), "@mode@")
		}
	}
	else
	{
		//��ѡ����У���ȡ�׵���
		cur_line = GetBufLine(hbuf, sel.lnFirst)
		mode = GetLineMacro(cur_line)
		mode_len = strlen(mode)
		SaveMode(getSRTmpRow(0), "@mode@")
		
		sel.ichFirst = 0
		sel.ichLim = mode_len
		SetWndSel(hwnd, sel)
		stop
	}
	//msg ("mode @mode@ ")

	
	cur_line = ""
	ln =  lnMin
	//�ı�ѡ������
	while (ln != lnMax)
	{
		cur_line = GetBufLine(hbuf, ln)
		ret = LFindStringExt(cur_line, mode, mode_len)
		//msg ("find @ret@  @mode@  ln @ln@  lnMax @lnMax@  @cur_line@ ")
		if(ret == "X")
		{
			break
		}
		ln =  ln + diff
	}
	ln =  ln - diff


	//����ѡ�У���Ļ���У�����ת
	ScrollCurWnd(hbuf, direct, sel, ln)
}

//direct = 0 left; 1 top; 2 right; 3 down;
macro ScrollCurWnd(hbuf, direct, sel, ln)
{
	//����ѡ�У���Ļ���У�����ת
	hwnd = GetCurrentWnd()
	if (hwnd == 0)
		stop
	lnTop = GetWndVertScroll(hwnd);
	cLines = GetWndLineCount(hwnd);
	
	if(direct==1 || direct==4)//top
	{
		sel.lnFirst = ln
		sel.ichFirst = 0
		sel.lnLast = sel.lnLast 
		if(sel.lnFirst != sel.lnLast )
		{
			cur_line = GetBufLine(hbuf, sel.lnLast)
			sel.ichLim = strlen(cur_line)
		}
		if (lnTop > ln)
		{
			if (ln > 10)
			{
				ln = ln - 10
			}
			ScrollWndToLine(hwnd, ln); 
		}
	}
	else if(direct==3 || direct==5)//down
	{
		//sel.lnFirst = sel.lnFirst
		sel.ichFirst = 0
		sel.lnLast = ln
		if(sel.lnFirst != sel.lnLast )
		{
			cur_line = GetBufLine(hbuf, sel.lnLast)
			sel.ichLim = strlen(cur_line)
		}
		if (lnTop + cLines <= ln)
		{
			lnTop = ln - cLines + 1;
			lnMax = GetBufLineCount(hbuf)
			if (lnTop + 10 < lnMax)
			{
				lnTop = lnTop + 10
			}
			ScrollWndToLine(hwnd, lnTop); 
		}
	}
	else
	{
		stop
	}
	SetWndSel(hwnd, sel)
	
}

/***********************************************************************/
/****************************    test   ******************************/
/***********************************************************************/
macro CtrlTest(hbuf)
{
	msg ("CtrlTest")
	
    hbuf = GetCurrentBuf()
	ChangeSel(hbuf, 3)

	//SaveMode(getSRTmpRow(0), "@mode@")
	//mode = "m15"
	//SaveMode(15, "@mode@")
	//mode = ReadMode(getSRTmpRow(0))
	//msg ("mode15 @mode@ ")
	
	
	//msg ("CtrlTest")
	//Tree()
	//Drag_Line_Up
	//Drag_Line_Down
	//Word_Left
	
}
