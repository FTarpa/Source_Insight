macro ShowMacro(){	//_TempHeadF12(hbuf)    hwnd = GetCurrentWnd()    hbuf = GetCurrentBuf()	if (hwnd == 0)	{    	hbuf = OpenDefaultSR(hbuf)    	stop	}		//mk内 未选择	fName = GetFileName(GetBufName(hbuf))	if (IsFileType(fName, ".mk")) //IsMakeFile(hbuf)	{		//显示配置		ShowCfg(hbuf)	}	else if (IsSRFile(hbuf))	{		//打开选中/默认mk		ret = OpenSelMakeFile(hbuf)		if(ret == "")			OpenDefaultMake(hbuf)	}	else if (IsFileName(hbuf, "Simple_CTRL_K.h"))	{		ShowMyHelp(hbuf)	}	else	{		key = GetKey()		// F1~F12  显示f1~f12 功能说明(SI4.0编码)		if (key >= 1048688 && key <= 1048699 )		{			TreeFNum(hbuf, key-1048687)		}	}}macro ShowWholeMacro(hbuf){	//ctrl+B-->show info		ret = 0	cur_sel = ""	if(1) // 单选内容	{		sel = MGetWndSel(hbuf)		if (IsSingleSelect(sel))		{			cur_line = GetBufLine(hbuf, sel.lnFirst )			if(strlen(cur_line) < sel.ichLim)				sel.ichLim = sel.ichLim - 1			if(sel.ichFirst == sel.ichLim || 4095 == sel.ichLim)				return 0;			cur_sel = strmid(cur_line, sel.ichFirst, sel.ichLim)		}	}	if(cur_sel != "")	{		if (IsFileName(hbuf, "MMI_features"))		{			//显示宏名称是否定义(MTK)			ShowMarcoFromFile(hbuf, cur_sel)			return 1;		}				//显示:py--Lang help		infoMode = ReadIntMode(getPyInfo(0))		if(infoMode>0)		{			if(ShowNoteHelp(cur_sel, "Macro_Info_Python.h"))				return 1;		}				//显示:ar--Lang help		infoMode = ReadIntMode(getAndroidInfo(0))		if(infoMode>0)		{			LibName = "Macro_Info_Android_Lib.h"			if(IsFileName(hbuf, LibName))			{				SearchForward()				return 1;			}			else if(FindString(cur_sel, ".")!="X" || FindString(cur_sel, ":")!="X")			{				if(ShowLibHelp(cur_sel, "Macro_Info_Android_Lib.h", isLib))					return 1;			}			else			{				if(ShowNoteHelp(cur_sel, "Macro_Info_Android.h"))					return 1;				else if(ShowLibHelp(":" # cur_sel, "Macro_Info_Android_Lib.h", isLib))					return 1;			}		}		//显示图片路径(SPR)		if(GetImageMacro(cur_sel)){			return 1;		}		//显示宏名称是否定义(SPR, MTK)		if(ShowMarcoFromFile(hbuf, cur_sel)){			return 1;		}	}	return ret;}macro ShowNoteHelp(cur_sel, fileName){	ret = 0	if(cur_sel != "")	{//		msg("@cur_sel@")		mFile = getLangInfoPath(0) # "\\" # fileName		hbufSet = OpenCache(mFile)		//搜"str::"开头的信息		ret = ShowMoreHelp(hbufSet, "::", cur_sel)		if(ret)		{			//goto file			msg ("open Set Note Python/Android?" )			if (hbufSet != hNil){				setCurrentBuf(hbufSet)				ret = GotoNextMacroEx(hbufSet, cur_sel # "::", 0, 0)			}		}	}	return ret;	}macro ShowLibHelp(cur_sel, fileName, isLib){	ret = 0	if(cur_sel != "")	{//		msg("@cur_sel@")		mFile = getLangInfoPath(0) # "\\" # fileName		hbufSet = OpenCache(mFile)				//搜"str"开头的信息		key = cur_sel # ""		mSelStart = SearchInBuf(hbufSet, key, 0, 0, FALSE, FALSE, FALSE)		if (mSelStart != "")		{			setCurrentBuf(hbufSet)			ret = GotoNextMacroEx(hbufSet, cur_sel # "", 0, 0)			return 1;		}	}	return ret;	}macro GetImageMacro(key){	ret = 0	//_TempHeadF12(hbuf)	mFile = getSetPath(0) # "\\Show_Pic_dir.h"	if(IsExistFile(mFile))	{		mBuf = OpenCache(mFile)		mKey = "pic:" # key # ","		mSel = SearchInBuf(mBuf, mKey, 0, 0, FALSE, FALSE, FALSE)		nTxt = ""		while (mSel != "")		{			line = GetBufLine(mBuf, mSel.lnFirst )			ilen = strlen(line)						ich = SplitMacro(line, ",", 0, ilen)					nTxt   = nTxt # strmid(line, ich + 1, ilen) # CharFromKey(13)						mSel = SearchInBuf(mBuf, mKey, mSel.lnLast+1, 0, 0, 0, 0)		}		CloseBuf(mBuf)		if(nTxt != ""){			msg("path:" # CharFromKey(13) # nTxt)			return 1;		}	}	return ret}macro ShowMarcoFromFile(hbuf, mar){	ret = 0	szpathName = GetBufName(hbuf)	filename = GetFileName(szpathName)		//获取当前工程分类，区分处理	n = getBaseType(szpathName)	if(n == 90)	{		hprj = GetCurrentProj ()		if(hprj>0)		{			path = GetProjDir (hprj)			n = getBaseType(path)		}	}	if(n == 10 || n == 20 || n == 30 || n == 60 || n == 70)	{		ShowMarcoFromSprFile(hbuf, mar)		return 1;	}	else if(n == 80)	{		ShowMarcoFromMtkFile(hbuf, mar)		return 1;	}	return ret;}macro ShowMarcoFromSprFile(hbuf, mar){	var ie	var fileName	ie = 1	baseDir = getBasePath(hbuf)	//baseDir = "F:\\6531E_16A"		//msg(baseDir # "\\" # proName # ";")	ret = ""//	ret = ret # "宏定义文件与内容:" # CharFromKey(13)	ret = "    Search: " # CharFromKey(13) # "@mar@"  # CharFromKey(13) # CharFromKey(13)	fileName = baseDir # "\\build\\tmp\\app_main.macro"	//fileName = baseDir # "\\build\\tmp\\app.macro"  //6531	ie = IsExistFile(fileName)	if(ie)	{		ret = ret # "    app.macro:" # CharFromKey(13)		sch = SearchFromFileSpr(fileName, mar)		if(sch == "")			sch = "not found" # CharFromKey(13)		ret = ret # sch # CharFromKey(13)	}	fileName = baseDir # "\\build\\tmp\\sprd_macro.tmp"	ie = IsExistFile(fileName)	if(ie)	{		ret = ret # "    sprd_macro.tmp:" # CharFromKey(13)		sch = SearchFromFileSpr(fileName, mar)		if(sch == "")			sch = "not found" # CharFromKey(13)		ret = ret # sch # CharFromKey(13)	}		fileName = baseDir # "\\build\\tmp\\UMS9117.def"	ie = IsExistFile(fileName)	if(ie)	{		ret = ret # "    UMS9117.def:" # CharFromKey(13)		sch = SearchFromFileSpr(fileName, mar)		if(sch == "")			sch = "not found" # CharFromKey(13)		ret = ret # sch # CharFromKey(13)	}		fileName = baseDir # "\\build\\tmp\\UIX8910.def"	ie = IsExistFile(fileName)	if(ie)	{		ret = ret # "    UIX8910.def:" # CharFromKey(13)		sch = SearchFromFileSpr(fileName, mar)		if(sch == "")			sch = "not found" # CharFromKey(13)		ret = ret # sch # CharFromKey(13)	}		msg(ret)	msg("添加到 Clipboard")	SetClipString(ret)}macro ShowMarcoFromMtkFile(hbuf, mar){	baseDir = getBasePath(hbuf)	//baseDir = "F:\6531E_16A"	setProPath = ReadMode(getNoteHanderSet(0))	len = strlen(setProPath)	//下一个空格	next = NextWS(setProPath, 0)	if (next == "X")	{		proName = setProPath	}	else	{		proName = strmid(setProPath, 0, next)	}	re = IsExistFile(baseDir # "\\build\\" # proName # "\\MMI_DRV_DEFS.mak")	if(!re)	{		setProPath = ReadMode(getNoteHanderBak(0))		len = strlen(setProPath)		//下一个空格		next = NextWS(setProPath, 0)		if (next == "X")		{			proName = setProPath		}		else		{			proName = strmid(setProPath, 0, next)		}	}		//msg(baseDir # "\\" # proName # ";")	ret = "项目: @proName@" # CharFromKey(13)	ret = ret # "宏定义文件与内容:" # CharFromKey(13)	ret = ret # "    Mar-drv:" # CharFromKey(13)	fileName = baseDir # "\\build\\" # proName # "\\MMI_DRV_DEFS.mak"	ret = ret # SearchFromFile(fileName, mar) # CharFromKey(13)		ret = ret # "    Mar-info:" # CharFromKey(13)	fileName = baseDir # "\\build\\" # proName # "\\log\\info.log"	ret = ret # SearchFromFile(fileName, mar) # CharFromKey(13)		ret = ret # "    Mar-features-opt:" # CharFromKey(13)	fileName = baseDir # "\\build\\" # proName # "\\log\\drv_features_option.log"	ret = ret # SearchFromFile(fileName, mar) # CharFromKey(13)		ret = ret # "    Mar-features:" # CharFromKey(13)	fileName = baseDir # "\\build\\" # proName # "\\log\\MMI_features.log"	ret = ret # SearchFromFile(fileName, mar) # CharFromKey(13)	msg(ret)	msg("添加到 Clipboard")	SetClipString(ret)}macro SearchFromFile(fileName, mar){	//msg(fileName # ";" # mar # ";")	mBuf = OpenCache(fileName)	mSel = SearchInBuf(mBuf, mar, 0, 0, FALSE, FALSE, FALSE)	nTxt = ""	while (mSel != "")	{		line = GetBufLine(mBuf, mSel.lnFirst )		nTxt = nTxt # line # CharFromKey(13)				mSel = SearchInBuf(mBuf, mar, mSel.lnLast+1, 0, 0, 0, 0)	}	CloseBuf(mBuf)	return nTxt}macro SearchFromFileSpr(fileName, mar){	//msg(fileName # ";" # mar # ";")	mBuf = OpenCache(fileName)	mSel = SearchInBuf(mBuf, mar, 0, 0, FALSE, FALSE, FALSE)	nTxt = ""	nS = 0	while (mSel != "")	{		if(nS < 20)		{			line = GetBufLine(mBuf, mSel.lnFirst )			//word = strmid(line, mSel.ichFirst, mSel.ichLim)			word = GetWholeMacro(line, mSel)			index = FindString( word, mar )			if(index != "X")			{				//mSel.ichLim = mSel.ichFirst + strlen(word) - strlen(mar) 				mSel.ichLim = mSel.ichFirst + 1			}			nTxt = nTxt # word # CharFromKey(13)		}				mSel = SearchInBuf(mBuf, mar, mSel.lnLast, mSel.ichLim, 0, 0, 0)		nS = nS + 1	}	CloseBuf(mBuf)	if(nS >= 20)		nTxt = nTxt # "..." # CharFromKey(13) # "count: @nS@" # CharFromKey(13)	return nTxt}macro MyHelp(){	CtrlK()}//ctrl+k, F12->open help, show popmacro ShowMyHelp(hbuf){    hwnd = GetCurrentWnd()    hbuf = GetCurrentBuf()	if (hwnd == 0)	{    	hbuf = OpenDefaultSR(hbuf)    	stop	}	ShowHelpLoop(hbuf)}macro ShowHelpLoop(hbuf){ 	//_TempHeadF1()		//不用提示	//ShowFHelp(hbuf, "help")		baseStr = ""	ret = 0	key = GetKey()	if (key >= 48 && key <= 58)						// F12->0-9	{		ShowSimpleHelp(hbuf, "F1 -> " # CharFromAscii (key), "")	}	else if (key >= 96 && key <= 96+26)     		//F12->A,Z	{		ShowSimpleHelp(hbuf, "F1 -> " # CharFromAscii (key), "")	}	else if (key >= 262209 && key <= 262209+26)     //F12->Ctrl+A,Z	{		ShowSimpleHelp(hbuf, "F1 -> " # CharFromAscii (key-262209 + 96), "")	}	else if (key >= 4208 && key <= 4219)      		// F12->F1~F12  显示f1~f12 功能说明	{		if(key - 4208>=9)		{			chr = "1" # CharFromKey(key - 4208 + 49 -10)		}		else		{			chr = CharFromKey(key - 4208 + 49)		}		ShowFHelp(hbuf, "F@chr@")	}	else if (key >= 1048688 && key <= 1048699)      // F12->F1~F12  SI3.5, 4.0 code不一样	{		if(key - 1048688>=9)		{			chr = "1" # CharFromKey(key - 1048688 + 49 -10)		}		else		{			chr = CharFromKey(key - 1048688 + 49)		}		ShowFHelp(hbuf, "F@chr@")	}	else	{		msg ("key @key@")	}}macro ShowFHelp(hbuf, key){	ShowHelp(hbuf, "[@key@]")}macro ShowHelp(hbuf, key){	isHelp = FALSE	if (!IsFileName(hbuf, "Simple_CTRL_K.h"))	{		mFile = getNodePath(0) # "\\Simple_CTRL_K.h"		hbuf = OpenCache(mFile)		isHelp = TRUE	}		ShowMoreHelp(hbuf, "",  key)		if(isHelp)	{		CloseBuf(hbuf)	}}macro ShowMoreHelp(hbuf, spit, key){	//_TempHeadF1(hbuf)	//显示多行提示或语言帮助	key = key # spit	mSelStart = SearchInBuf(hbuf, key, 0, 0, FALSE, FALSE, FALSE)	helpTxt = key # ":" # CharFromKey(13)	if (mSelStart != "")	{		keyEnd = "*****"		mSelEnd = SearchInBuf(hbuf, keyEnd, mSelStart.lnFirst, 0, FALSE, FALSE, FALSE)		if (mSelEnd != "")		{			lastLn = mSelEnd.lnFirst		}		else		{			lastLn =  mSelStart.lnFirst + 10		}		ln = mSelStart.lnFirst + 1		while (ln <  lastLn)		{			line = GetBufLine(hbuf, ln)			helpTxt = helpTxt # line # CharFromKey(13)			ln = ln + 1		}		if(helpTxt != "")		{			msg ("@helpTxt@")			return 1;		}	}	return 0;}macro ShowSimpleHelp(hbuf, key, defaultTxt){	//_TempHeadF1(hbuf)	key = key # ":"	mSelStart = SearchInBuf(hbuf, key, 0, 0, FALSE, FALSE, FALSE)	helpTxt = key # " " # defaultTxt  # CharFromKey(13)		if (mSelStart != "")	{		line = GetBufLine(hbuf, mSelStart.lnFirst)		helpTxt = helpTxt # StrTrimSpaces(strmid(line, strlen(key), strlen(line)))		if(helpTxt != "")		{			msg ("@helpTxt@")		}	}}