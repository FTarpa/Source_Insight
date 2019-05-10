macro BCompare(cNum){	//_TempHeadF7(hbuf)	hwnd = GetCurrentWnd()	hbuf = GetCurrentBuf()	if (hwnd == 0)	{    	hbuf = OpenDefaultSR(hbuf)    	stop	}	path1 = GetBufName(hbuf)	if(cNum == 1)	{		//目录对比		path1 = getBaseDir(path1, 0)	}	baseDir = getBasePath(hbuf)	//非项目文件可能报错	if(strlen(baseDir)>strlen(path1))	{		stop	}	else if(strmid(path1, 0, strlen(baseDir)) != baseDir)	{		msg("非项目文件不能对比")		stop	}	baseVal = getBaseDirNum(path1)	path2 = strmid(path1, strlen(baseDir), strlen(path1))		val = ReadMode(getBCompareRow(0))//1~6	val_old = val/100	val = val - (val/100)*100	if(val == baseVal)	{		//避免当前项目与自己对比		val = val_old	}		//有些路径名称不一样, 替换掉	if(baseVal == 60 && val < 60)//60即7701	{		path2 = strmid(path1, strlen(baseDir), strlen(path1))		path2 = ReplaceWord(path2, "MS_MMI_Main", "MS_MMI")	}	else if(val == 60 && baseVal < 60)//60即7701	{		path2 = strmid(path1, strlen(baseDir), strlen(path1))		path2 = ReplaceWord(path2, "MS_MMI", "MS_MMI_Main")	}	else if(val >= 70 && baseVal >= 70 && val != baseVal)	{		path2 = strmid(path1, strlen(baseDir), strlen(path1))		reOld = ""		reNew = ""				if(baseVal == 70)			reOld = "FARSIGHTED61M_CN"		else if(baseVal == 72)			reOld = "BLEPHONE61A"		else if(baseVal == 74)			reOld = "BLEPHONE61D"		else if(baseVal == 76)			reOld = "BLEPHONE61D"		else			stop					if(val == 70)			reNew = "FARSIGHTED61M_CN"		else if(val == 72)			reNew = "BLEPHONE61A"		else if(val == 74)			reNew = "BLEPHONE61D"		else if(val == 76)			reNew = "BLEPHONE61D"		else			stop					//BLEPHONE61A_11C_BB, BLEPHONE61A, BLEPHONE61D//		path2 = ReplaceWord(path2, "BLEPHONE61A_11C_BB", "FARSIGHTED61M_CN_11C_BB")//		path2 = ReplaceWord(path2, "BLEPHONE61A_11C_LCM", "FARSIGHTED61M_CN_11C_LCM")//		path2 = ReplaceWord(path2, "FARSIGHTED61M_CN", "BLEPHONE61A")		if(reOld != reOld)			path2 = ReplaceWord(path2, reOld, reNew)				}	//msg("@baseVal@  @val@   @path1@   @path2@")		//合并路径, 加上项目目录	path2 = SearchPathFromNum("", val) # path2	if (path2 != "")	{		ShellBCompare(path1, path2)	}}macro BComSetPath(s){	//_TempHeadF7(hbuf)	curV = 0	hbuf = GetCurrentBuf()	if (hbuf != 0)	{		szpathName = GetBufName(hbuf)		filename = GetFileName(szpathName)		//增加功能：A->B比; B->A比; 避免A->A比		curV = getBaseDirNum(szpathName)	}	val = ReadMode(getBCompareRow(0))	val1 = (val/100)	val2 = val - val1*100	ShowBCompareMode(val1, val2, curV)		//获取目录设置值: 10~80	mode = 0	bit = 2	while (bit > 0)	{		key = GetKey()		//输入0-9a-z, 返回0-9+26		i = GetNumFromKey(key, 10 - 1)		if(i >= 0)		{			mode = mode*10+i		}		bit = bit - 1	}	if (mode>0)	{		if(val2 != mode)		{			n = curV*100 + mode			SaveMode(getBCompareRow(0), "@n@")		}		msg ("set ok!    (@mode@)")	}	else	{		msg (CharFromKey(key) # " @key@")	}}//testmacro ShowBCompareMode(val1, val2, curV){	//_TempHeadF7(hbuf)//	index = 1	n = 10	//对比目录为10~80之间	bComMsg = "BCompare Mode : [@val1@ ~ @val2@] -> [@curV@ ~ ?]" # CharFromKey(13)	while (n < 80)	{		path = SearchPathFromNum("", n) //路径列表				if("" == path){			n = (1 + n/10)*10	//加10			continue		}else{			bComMsg = bComMsg # n # ": " # path # CharFromKey(13)					n = n + 2			continue		}	}		msg ("@bComMsg@")}macro ShowBCompareModeExt(basePath){	var err	var n	var path		n = 10	err = 0	while (1)	{		path = SearchPathFromNum("", n) //遍历路径列表				if("" == path){			if(0 == n-n/10*10 || 100 == n){ //余数为0, 结果搜索				return err			}else{				n = (1 + n/10)*10	//加10				continue			}		}else{			if(basePath == path){				return n			}else{				n = n + 1				continue			}		}	}}macro BCompareSel(key){	//_TempHeadF7(hbuf)	onoff = ReadMode(getBCompareOnOff(0))	    hbuf = GetCurrentBuf()	if (hwnd == 0)	{    	stop	}		sel = MGetWndSel(hbuf)	if (!IsHasSelect(sel))	{		return	}		if (onoff == 1)	{		tarFile = "Tmp_Comp_1.h"	}	else	{		tarFile = "Tmp_Comp_2.h"	}		    tmpBuf = OpenCache(getNodePath(0) # "\\" # tarFile)    EmptyCache(tmpBuf)    	cRow = sel.lnFirst	while (cRow <= sel.lnLast)	{		AppendBufLine(tmpBuf, GetBufLine( hbuf, cRow))		cRow = cRow + 1	}	SaveBuf(tmpBuf)	CloseBuf(tmpBuf)					if (onoff == 1)	{		onoff = 2	}	else	{		onoff = 1	}	SaveMode(getBCompareOnOff(0), "@onoff@")		if (onoff == 2)	{		onoff = 2		ShellBCompare(getNodePath(0) # "\\Tmp_Comp_1.h", getNodePath(0) # "\\Tmp_Comp_2.h")	}}/***********************************************************************//****************************    SVN  *********************************//***********************************************************************/macro SVN(key){	//_TempHeadF7(hbuf)    SvnUpdate()    SvnCommit(key)}macro SvnUpdate(key){	//_TempHeadF7(hbuf)    hwnd = GetCurrentWnd()    hbuf = GetCurrentBuf()	if (hwnd == 0)	{    	stop	}			//在搜索结果窗口，更新根目录	baseDir = getBasePath(hbuf)	ShellSvnUpdate(baseDir)}macro SvnCommit(key){	//_TempHeadF7(hbuf)    hwnd = GetCurrentWnd()    hbuf = GetCurrentBuf()	if (hwnd == 0)	{    	stop	}			curPath = getSVNCommitPath(hbuf)	//msg ("curPath  " #  "@curPath@")	ShellSvnCommit(curPath)    }//上传目录：//    project\XXX//    MS_Customize//    MS_MMI\\source\\mmi_appmacro getSVNCommitPath(hbuf){	//_TempHeadF7(hbuf)	//获取目录 6531XX:	pathName = GetBufName(hbuf)	baseDir = getBasePath(hbuf)			ret = CompareEx(pathName, "@baseDir@\\MS_Customize", 1)	if(ret ==0)	{		return "@baseDir@\\MS_Customize"	}		ret = CompareEx(pathName, "@baseDir@\\MS_MMI\\source\\mmi_app", 1)	if(ret ==0)	{		return "@baseDir@\\MS_MMI\\source\\mmi_app"	}		ret = CompareEx(pathName, "@baseDir@\\project", 1)//left 包含 right(包含6531XX/project)	if(ret ==0)	{		index = SplitMacro(pathName, "\\", strlen("@baseDir@\\project")+1, strlen(pathName))		return strmid(pathName, 0, index)	}	return baseDir # "\\project"}