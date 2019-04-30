macro Rule(){	//_TempHeadF6(hbuf)			hwnd = GetCurrentWnd()	if (hwnd == 0)	{    	hbuf = OpenDefaultSR(hbuf)    	stop	}	hbuf = GetWndBuf(hwnd)	//日志功能	if(IsFileName(hbuf, "Macro_Note_")||IsFileName(hbuf, "Simple_CTRL_")||IsFileName(hbuf, "si_modis_"))	{		NoteHander(hbuf, 6)		stop	}	else if(IsFileName(hbuf, "Macro_"))	{		NoteHander(hbuf, 61)		stop	}		ret = SwtichTools("F6")//switch mode -> other work	if(ret == 0)		stop		//soft	if(SoftRuleFile(hbuf) == 1)	// 排序规则文件	{		stop	}	AddRule(hbuf)}// 排序规则文件macro SoftRuleFile(ruleBuf){	//_TempHeadF6(hbuf)	szpathName = GetBufName(ruleBuf)	filename = GetFileName(szpathName)		if(IsFileType(filename, "Macro_Rule_")){			msg ("start soft file")		//ruleBuf = OpenCache(file)		/*不考虑重复*/		QuickSoftCache(ruleBuf, 0, GetBufLineCount(ruleBuf) - 1)		//排序				return 1	}	else	{		return 0	}}macro AddRule(hbuf){	//_TempHeadF6(hbuf)	szpathName = GetBufName(hbuf)	filename = GetFileName(szpathName)	sel = MGetWndSel(hbuf)	if (IsSingleSelect(sel))	{		cur_line = GetBufLine(hbuf, sel.lnFirst )		if(strlen(cur_line) < sel.ichLim)			sel.ichLim = sel.ichLim - 1		if(sel.ichFirst == sel.ichLim || 4095 == sel.ichLim)			stop		cur_sel = strmid(cur_line, sel.ichFirst, sel.ichLim)				if (ShowRule(hbuf, cur_sel) != -1)		{			//已经添加过，暂不替换			//Han 不显示			stop		}				charRN = CharFromKey(13)				if(IsMakeFile(hbuf))		{			//添加 Han Rule			cur_line = GetClipString(hbuf)			if(strlen(cur_line) > 0)			{				msg ("Add goto:@charRN@copy : @cur_line@@charRN@word : @cur_sel@" )				hbufRule = OpenCache(getNodePath(0) # "\\rule\\Macro_Rule_Han_file.h")								ruleStr = "key:@cur_line@,@cur_sel@"				AppendBufLine(hbufRule, "@ruleStr@")				SaveBuf(hbufRule)				CloseBuf(hbufRule)			}		}		else		{			//添加 Key Rule			msg ("Add goto:@charRN@key : @cur_sel@@charRN@file : @fileName@" )						bft = getBufBft(hbuf, 4)//			if(bft == "")//				stop			hbufRule = OpenCache(getNodePath(0) # "\\rule\\Macro_Rule_Key_file_@bft@.h")								ruleStr = "key:@cur_sel@,file:@filename@"			AppendBufLine(hbufRule, "@ruleStr@")			SaveBuf(hbufRule)			CloseBuf(hbufRule)		}	}	else	{		msg ("pls select a word as key->file" )	}}macro ShowRule(hbuf, word){	//_TempHeadF6(hbuf)	len = strlen (word)	left = 0	right = 0		bft = getBufBft(hbuf, 4)//	if(bft == "")//		stop	hbufRule = OpenCache(getNodePath(0) # "\\rule\\Macro_Rule_Key_file_@bft@.h")		while (1)	{		right = SplitMacro(word, "_", left, len)		if (right == -1)		{			mcr = strmid(word, left, len);		}		else if (right >= left)		{			mcr = strmid(word, left, right);		}		else		{			break		}				row = FindCacheWholeFile(hbufRule, "key:" # mcr # ",")		if(row >= 0)		{			cur_line = GetBufLine(hbufRule, row )			cur_len = strlen (cur_line)			lnStr = GetLineMacro(cur_line)	//获取宏，不包括删除注释			index2 = SplitMacro(cur_line, ",", 0, cur_len)			index3 = SplitMacro(cur_line, ":", index2, cur_len)						type = strmid(cur_line, index2+1, index3);			fileName = strmid(cur_line, index3+1, cur_len);			//SHOW			charRN = CharFromKey(13)			if ("file" == "@type@")			{				msg ("exist goto:@charRN@@fileName@ ~ @mcr@" )			}			else if ("path" == "@type@")			{				hbuf = GetCurrentBuf()				basePro = getBasePath(hbuf)				curPath = cat(basePro, "\\@fileName@")				msg ("exist goto:@charRN@@curPath@" )			}			else if ("path2" == "@type@")			{				hbuf = GetCurrentBuf()				sel = MGetWndSel(hbuf)				cur_line = GetBufLine(hbuf, sel.lnFirst )				val = GetLineValue(cur_line)				val_f = strmid(val, 0, 5)								//hbuf = GetCurrentBuf()				basePro = getBasePath(hbuf)				curPath = cat(basePro, "\\@fileName@\\@val_f@_MB\\@val@")				msg ("exist goto:@charRN@@curPath@" )			}			return 0		}		else		{			if (right == -1)			{				break			}			left = right + 1			continue		}	}	return -1}//testmacro OpenF6Test(hbuf, v){	//_TempHeadF6(hbuf)	//Tree()	if(v == ")") //from F1, no param, param is ")"	{		v = "F62"	}	else if(v == "F6") //from F6	{		v = "F63"	}		if(v == "F61")	{		msg ("test Key file")		hbufRule = OpenCache(getNodePath(0) # "\\rule\\Macro_Rule_Key_file.h")		QuickSoftCacheTest(hbufRule, 0, GetBufLineCount(hbufRule) - 1)	//排序测试	}	else if(v == "F62")	{		msg ("test Han file")		hbufRule = OpenCache(getNodePath(0) # "\\rule\\Macro_Rule_Han_file.h")		QuickSoftCacheTest(hbufRule, 0, GetBufLineCount(hbufRule) - 1)	//排序测试	}	else if(v == "F63") //cur test	{		//msg ("test AddRule")		AddRule(hbuf)	}}//compare testmacro QuickSoftCacheTest(chkBuf, low, high){ 	var i 	var ret    i = low      while(i < high)     {		ret = Compare(GetBufLine(chkBuf, i), GetBufLine(chkBuf, i+1))		if(ret == -1)		{			PutBufLine(chkBuf, i, GetBufLine(chkBuf, i) # ", ---")		}		else if(ret == 1)		{			PutBufLine(chkBuf, i, GetBufLine(chkBuf, i) # ", +++")		}		else if(ret == 0)		{			PutBufLine(chkBuf, i, GetBufLine(chkBuf, i) # ", ===")		}        i = i + 1    }    SaveBuf(chkBuf)}