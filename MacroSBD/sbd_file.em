/*
FunĿ¼��
macro _TempHeadFile(hbuf){}
_TempCfgFile(hbuf)
_TempFileType(hbuf)
_TempMakeFile(hbuf)
_TempOpenFile(hbuf)
_TempFileFun(hbuf)
_TempCmdFile(hbuf)
_TempSelect(hbuf)
**/
/***********************************************************************/
/**************************** cfg file *********************************/
/***********************************************************************/
//macro _TempCfgFile(hbuf){		_TempHeadFile(hbuf)		}

macro getMarBasePath(0)		{	return "basePath"	}

//��ȡ����BUF
macro GetCfgBuf(mode)
{
	SetName = getNodePath(0) # "\\Macro_Set.h"
	setBuf = OpenCache(SetName)
	
	return setBuf
}

//�к�Ϊ˫�������һ����Ϊ��ע��Ϣ
macro getToolsRow(0)		{	return 12	}
macro getMakeRow(0)			{	return 15	}
macro getBCompareRow(0)		{	return 18	}
macro getTreeRow(0)			{	return 21	}
macro getSRTmpRow(0)		{	return 24	}
macro getLastCommandRow(0)	{	return 27	}
//macro getSearchRow(0)		{	return 30	}
//macro getSearchColumn(0)	{	return 33	}
macro getCurSearch(0)		{	return 36	}
macro getCurHead(0)			{	return 39	}
macro getCurIndex(0)		{	return 42	}
macro getCurCount(0)		{	return 45	}
macro getBCompareOnOff(0)	{	return 48	}
//macro getPathRow(0)			{	return 51	}
macro getWndVertRow(0)		{	return 54	}
macro getNoteHanderSet(0)	{	return 57	}
macro getNoteHanderBak(0)	{	return 60	}
macro getNoteBasePath(0)	{	return 63	}
macro getNumBits(0)			{	return 66	}
macro getFileCode(0)		{	return 69	}



//��ȡ��ǰ����:Ĭ��F5~goto           F6-rule
macro ReadMode(setRow)
{
	var setBuf
	setBuf = GetCfgBuf(0)
	ln = GetBufLineCount(setBuf)
	if(setRow <= ln){
		lnStr = GetBufLine(setBuf, setRow - 1)
		//val = GetLineMacro(lnStr)
		return lnStr //val
	}else{
		msgErr = getNodePath(0) # "\\Macro_Set.h"  # "," # CharFromKey(13)
		msg (msgErr # "tools mode row (@ln@), read error")
		return 0
	}
}

//���浱ǰ����:Ĭ��F5~goto           F6-rule
macro SaveMode(setRow, val)
{
	var setBuf
	setBuf = GetCfgBuf(0)

	//��ӿ���
	ln = GetBufLineCount(setBuf)
	while (ln < setRow)
	{
		AppendBufLine(setBuf, "")
		ln =  ln + 1
	}
	
	PutBufLine(setBuf, setRow - 1, "@val@")
	SaveBuf(setBuf)
}
macro SaveProjectFile(setRow, SetName, val)
{
	var setBuf
	setBuf = OpenCache(SetName)
	PutBufLine(setBuf, setRow - 1, "@val@")
	SaveBuf(setBuf)
}
macro SaveNumBitsMode(val)
{
	valB = val
	bit = 0
	while (valB > 0)
	{
		valB = valB/10
		bit = bit + 1
	}
	SaveMode(getNumBits(0), "@bit@")
}



/***********************************************************************/
/**************************** file type *********************************/
/***********************************************************************/
//macro _TempFileType(hbuf){		_TempHeadFile(hbuf)		}

macro IsSRFile(hbuf)
{
	fName = GetFileName(GetBufName(hbuf))
	return IsFileType(fName, ".SearchResults")
}

macro IsMacroFile(hbuf)
{
	fName = GetFileName(GetBufName(hbuf))
	return IsFileType(fName, ".em")
}

macro IsMakeFile(hbuf)
{
	fName = GetFileName(GetBufName(hbuf))
	return IsFileType(fName, ".mk") || IsFileType(fName, ".def") || IsFileType(fName, ".mak")
}

macro IsTxtFile(hbuf)
{
	fName = GetFileName(GetBufName(hbuf))
	return IsFileType(fName, ".c")
}

macro IsExeFile(hbuf)
{
	fName = GetFileName(GetBufName(hbuf))
	return IsFileType(fName, ".exe") || IsFileType(fName, ".bat")
}

macro IsScriptFile(hbuf)
{
	//# as Comment
	fName = GetFileName(GetBufName(hbuf))
	return IsFileType(fName, ".py") || IsFileType(fName, ".make")
}

//���ұ�ƥ��
macro IsFileType(filename, type)
{
	len = strlen (filename)	
	typeLen = strlen (type)

	if(len>typeLen)
	{
		if(strmid (filename, len-typeLen, len) == type)
		{	
			return 1
		}
	}
	return 0
}
//�����ƥ��
macro IsFileName(hbuf, type)
{
	filename = GetFileName(GetBufName(hbuf))
	len = strlen (filename)	
	typeLen = strlen (type)

	if(len>typeLen)
	{
		if(strmid(filename, 0, typeLen) == type)
		{
			return 1
		}
	}
	else if(len==typeLen)
	{
		if(filename == type)
		{	
			return 1
		}
	}
	return 0
}
//�����ƥ��
macro IsPathName(hbuf, type)
{
	pathname = GetBufName(hbuf)
	len = strlen (pathname)	
	typeLen = strlen (type)

	if(len>typeLen)
	{
		if(strmid(pathname, 0, typeLen) == type)
		{
			return 1
		}
	}
	else if(len==typeLen)
	{
		if(pathname == type)
		{	
			return 1
		}
	}
	return 0
}

macro OpenDefaultSR(hbuf)
{
	hprj = GetCurrentProj ()
	if (hprj == 0)
	{
		Msg ("You must have a project open.")
		stop
	}
	
	path = GetProjDir (hprj)
	projName = GetProjName (hprj)
	//filename = GetFileName(projName)
	
	type = getBaseType(path)
	if(type == 0)
	{
		stop
	}
	file = projName # ".SearchResults"
	
	hbuf = OpenExistFile(file)
	//setCurrentBuf(hbuf)
	return hbuf
}

macro SetClipString(Str)
{
	hbufClip = GetBufHandle("Clipboard")
	lnMax = GetBufLineCount(hbufClip)
	klen = strlen(Str)
	if(klen > 0)
	{
		EmptyBuf(hbufClip)
		iStart = 0
		while (1)
		{
			ichKey = SplitMacro(Str, CharFromKey(13), iStart, klen)
			if(ichKey >= 0)
			{
				iNote = strmid(Str,iStart, ichKey)
				AppendBufLine(hbufClip, "@iNote@")
			}
			else
			{
				iNote = strmid(Str,iStart, klen)
				AppendBufLine(hbufClip, "@iNote@")
				break
			}
			iStart = ichKey + 1
		}
	}
}
macro GetClipString(hbuf)
{
	hbufClip = GetBufHandle("Clipboard")
	lnMax = GetBufLineCount(hbufClip)
	if(lnMax>0)
	{
		return GetBufLine(hbufClip, 0)
	}else
	{
		return ""
	}
}
macro GetClipStringI(hbuf, i)
{
	hbufClip = GetBufHandle("Clipboard")
	lnMax = GetBufLineCount(hbufClip)
	if(i == "")
	{
		return lnMax
	}
	else if(i < 0)
	{
		return lnMax
	}
	else if(lnMax>i)
	{
		return GetBufLine(hbufClip, i)
	}
	else if(lnMax>0)
	{
		//i%lnMax
		return GetBufLine(hbufClip, i-i/lnMax*lnMax)
	}
	else
	{
		return ""
	}
}

macro ShowFileName(hbuf, isShow)
{
	szpathName = GetBufName(hbuf)
	filename = GetFileName(szpathName)

	if(isShow)
	{
		msg ("@filename@")
	}
	hbufClip = GetBufHandle("Clipboard")
	if (hbufClip != hNil)
	{
		EmptyBuf(hbufClip)
		AppendBufLine(hbufClip, "@filename@")
		CloseBuf(hbufClip)
	}
}

macro GetMkFileName(hbuf)
{
	szpathName = GetBufName(hbuf)
	filename = GetFileName(szpathName)
	
	len = strlen (filename)	
	if(len>11)
	{
		filename = strmid (filename, 8, len-3)
	}
	else if(len>3)
	{
		filename = strmid (filename, 0, len-3)
	}
	return filename
}

macro GetRelativelyDir(curName, baseDir, filename)
{
	len = strlen (curName)	
	baseLen = strlen (baseDir)
	fileLen = strlen (filename)

	if(curName[2] != ":")
	{
		return strmid (curName, 0, len - fileLen - 1)
	}
	else if(len > baseLen+fileLen+1)
	{
		//����Ŀ¼���һ��"\"
		return strmid (curName, baseLen + 1, len - fileLen - 1)
	}
	else
	{
		return ""
	}
}


/***********************************************************************/
/************************** make file **********************************/
/***********************************************************************/
//macro _TempMakeFile(hbuf){		_TempHeadFile(hbuf)		}

//����Ĭ��mk
macro OpenDefaultMake(hbuf)
{
	var projectName

	projectName = ReadMode(getMakeRow(0))
	if(projectName != null)
	{
		hbuf = OpenMakeFile(hbuf, projectName)
	}
	else
	{
		msg ("�밴F11->9ָ��Ĭ��mk�ļ�")
	}
}

//ָ��Ĭ��mk
macro SetDefaultMake(hbuf)
{
	sel = MGetWndSel(hbuf)
	if (IsNoSelect(sel)) //δѡ��
	{
		if(IsMakeFile(hbuf))
		{
			projectName = GetMkFileName(hbuf)
			SaveMode(getMakeRow(0), "@projectName@")
		}
		else
		{
			//�� ����mk...
			msg ("����mk�ļ��У�ָ��Ĭ��mk")
		}
	}
	else
	{
		cur_line = GetBufLine(hbuf, sel.lnFirst )
		if(strlen(cur_line) < sel.ichLim)
			sel.ichLim = sel.ichLim - 1
		if(sel.ichFirst == sel.ichLim || 4095 == sel.ichLim)
			stop
		cur_sel = strmid(cur_line, sel.ichFirst, sel.ichLim)
		
		if(IsSRFile(hbuf))
		{
			projectName = cur_sel
			SaveMode(getMakeRow(0), "@projectName@")
		}
		else
		{
			msg ("����SR�ļ��У�ѡ����Ŀ���ƣ�ָ��Ĭ��mk")
		}
	}
}



/***********************************************************************/
/************************** open file **********************************/
/***********************************************************************/
//macro _TempOpenFile(hbuf){		_TempHeadFile(hbuf)		}

macro OpenCache(file)
{	
	global errFile
	hbuf = GetBufHandle(file)
	if (hbuf == hNil)
	{
	 	hbuf = OpenBuf(file)
		if (hbuf == hNil){
			//msg ("hbuf doesn't exist.")
			//hbuf = NewBuf(file)
			if(errFile != file)
			{
				//change bug: file no exist
				//static val, Prompt once
				msg("file no exist:" # CharFromKey(13) #  file)
				errFile = file
			}
			stop
		}
 	}
	return hbuf
}

macro OpenFile(file)
{	
	hbuf = OpenCache(file)
	setCurrentBuf(hbuf)
	return hbuf
}


macro OpenExistFile(file)
{	
	hbuf = GetBufHandle(file)
	if (hbuf == hNil)
	{
	 	hbuf = OpenBuf(file)
		if (hbuf == hNil){
			//msg ("hbuf doesn't exist.")
			//hbuf = NewBuf(file)
			return hNil
		}
 	}
	if (hbuf != hNil){
		setCurrentBuf(hbuf)
	}
	return hbuf
}
macro OpenExistFileRow(file, row)
{	
	hbuf = GetBufHandle(file)
	isScroll = 0
	if (hbuf == hNil)
	{
	 	hbuf = OpenBuf(file)
		if (hbuf == hNil){
			//msg ("hbuf doesn't exist.")
			//hbuf = NewBuf(file)
			return hNil
		}
		isScroll = 1
 	}
	if (hbuf != hNil){
		setCurrentBuf(hbuf)
	}
	if (isScroll == 1 && row > 0){
		hwnd = GetCurrentWnd()
		ScrollWndToLine(hwnd, row); 
	}
	return hbuf
}

macro IsExistFile(file)
{	
	hbuf = GetBufHandle(file)
	if (hbuf == hNil)
	{
	 	hbuf = OpenBuf(file)
		if (hbuf == hNil){
			//msg ("hbuf doesn't exist.")
			//hbuf = NewBuf(file)
			return 0
		}
		CloseBuf(hbuf)
 	}
	return 1
}

macro OpenSelMakeFile(hbuf)
{
	sel = MGetWndSel(hbuf)
	if (!IsNoSelect(sel)) //δѡ��
	{
		cur_line = GetBufLine(hbuf, sel.lnFirst )
		if(strlen(cur_line) < sel.ichLim)
			sel.ichLim = sel.ichLim - 1
		if(sel.ichFirst == sel.ichLim || 4095 == sel.ichLim)
			stop
		cur_sel = strmid(cur_line, sel.ichFirst, sel.ichLim)
		if(IsSRFile(hbuf))
		{
			return OpenMakeFile(hbuf, cur_sel)
		}
	}
	return ""
}
macro OpenMakeFile(hbuf, file)
{
	pathName = GetBufName(hbuf)
	projectPath = getProjectPath(pathName)
	//hbuf = OpenCache("@projectPath@\\@file@\\project_@file@.mk")	//����target.		
	//setCurrentBuf(hbuf)
	hbuf = OpenExistFile("@projectPath@\\@file@\\project_@file@.mk")	//����target.
	return hbuf
}

macro OpenCmdFile(hbuf)
{
	baseDir = getBasePath(hbuf)
	ret = ShellOpenCmd(baseDir,  "cmd2.exe")
	if (ret == 0)
	{
		ret = ShellOpenCmd(baseDir,  "cmd.cmd")
	}
	if (ret == 0)
	{	
		ret = ShellOpenCmd(baseDir,  "")
	}
	return hbuf
}

// delete all lines in the buffer
macro EmptyCache(hbuf)
{
	//EmptyBuf(hbuf)
	lnMax = GetBufLineCount(hbuf)
	while (lnMax > 0)
		{
		DelBufLine(hbuf, 0)
		lnMax = lnMax - 1
		}
}

//ret = 0(���ļ�) 1(ֻ�в���) 2(�в���+Ŀ¼)
macro GetParamCacheType(hbuf, param)
{
	lnMax = GetBufLineCount(hbuf)
	len = strlen(param)
	var line
	ret = 0
	
	if(lnMax > 0)
	{
		line = GetBufLine(hbuf, lnMax-1)
	}
	while (lnMax > 0)
	{
		if(ret == 0)
		{
			//�в��� ret = 1
			if(line != "")
			{
				if(len > 0)
				{
					ret = 1
					continue
				}
				else
				{
					return ret
				}
			}
		}
		else if(ret == 1)
		{
			//��ָ������ ret = 2
			if(param == strmid(line, 0, len))
			{
				ret = 2
				return ret
			}
		}
		lnMax = lnMax - 1
		line = GetBufLine(hbuf, lnMax)
	}
	return ret
}
/***********************************************************************/
/************************** select  **********************************/
/***********************************************************************/
//macro _TempFileFun(hbuf){		_TempHeadFile(hbuf)		}

macro GetTransFileName(hbuf, fName, cNum)
{
	//�ļ���ת��:
	bPath = ""
	if(bPath == "" && cNum == 6)
	{
		//android service path: basePath = F:\9820e 
		bPath = ReadMode(getNoteBasePath(0))
	}
	if(bPath == "" && cNum == 1)
	{
		if(IsSRFile(hbuf))
		{
			if(IsPathName(hbuf, getSavePath(0) # "\\Source Insight"))
			{
				bPath = getSavePath(0)
			}
		}
		//android service path: basePath = F:\9820e 
		bPath = ReadMode(getNoteBasePath(0))
	}
	if(bPath == "" && cNum == 2)
	{
		if(IsSRFile(hbuf))
		{
			if(IsPathName(hbuf, getSavePath(0) # "\\Source Insight"))
			{
				bPath = getSavePath(0)
			}
		}
	}
	if(bPath == "")
	{
		//���û������basePath������ĿĿ¼
		bPath = getMacroValue(hbuf, getMarBasePath(0), 1) //"basePath"
	}
	if(bPath == "")
	{
		bPath = getBasePath(hbuf)
	}

	//���ָ�Ŀ¼
	re = FindString(fName, ":")
	if(re == "X")
	{
		if(strlen(fName) > 2)
		{
			// "\\192.168.2.115\..."
			if(strmid(fName,0,2) != "\\\\")
			{
				if(strmid(fName,0,1)!="\\" && strmid(fName,0,1)!="/")
					fName = bPath # "\\" # fName
				else
					fName = bPath # fName
			}
		}
		else
		{
			fName = bPath
		}
	}
	
	//use "^" as space
	fName = ReplaceWord(fName, "^", " ")
	//use "Save:" as SavePath
	fName = ReplaceWord(fName, "Save:", getSavePath(0) # "\\")
	return fName
}

macro GetTransCmdS(cur_line, index, len)
{
	//������ת��: ɾ���ո�
	//��һ���ǿ�
	start = StartWS(cur_line, index)
	if (start == "X")
	{
		stop
	}
	return start
}
macro GetTransCmdS2(cur_line, index, len)
{
	//������ת��: ɾ���ո�
	//��һ���ǿ�
	start = StartWS(cur_line, index)
	if (start == "X")
	{
		start = len
	}
	return start
}
macro GetTransCmdE(cur_line, start, len)
{
	//������ת��: ɾ���ո�
	//��һ���ո�
	next = NextWS(cur_line, start)
	if (next == "X")
	{
		next = len
	}
	return next
}
macro GetTransStr(cur_line, index, len)
{
	if(index == "X")
	{
		return ""
	}
	else if(index >= len)
	{
		return ""
	}
	else
	{
		return strmid(cur_line, index, len)
	}
}
macro GetTransRootDir(fName)
{
	index = FindString(fName, ":")
	if (index == "X")
	{
		return ""
	}
	else
	{
		return strmid(fName, 0, index + 1)
	}
}
/***********************************************************************/
/************************** select  **********************************/
/***********************************************************************/
//macro _TempCmdFile(hbuf){		_TempHeadFile(hbuf)		}

macro ReadCmdFileList(hbuf, cur_row, bsDir, fName)
{
	var cmdBuf
	var firstReRow
	var mIndex
	var indexMax

	//file name list Line:5~N
	firstReRow = 5
	//select line -> add
	mIndex = 0
	indexMax = 0
	
	fileName = getTXTPath(0) # "\\si_filelist.h"
	cmdBuf = OpenCache(fileName)
	ln = GetBufLineCount(cmdBuf)
	fNameRow = 2
	if(fNameRow <= ln){
		lnStr = GetBufLine(cmdBuf, fNameRow - 1)
		//val = GetLineMacro(lnStr)
		if(lnStr == "@bsDir@ @fName@")
		{
			len = strlen(bsDir)
			indexMax = ln - firstReRow + 1
			retRow = firstReRow
			flistMsg = ""
			index = 0

			if(retRow == ln)
			{
				mIndex = 1
			}
			else
			{
				while (retRow <= ln)
				{
					index = index + 1
					line = GetBufLine(cmdBuf, retRow - 1)
					if(strlen(line) > len)
					{
						lnStr = strmid(line, len + 1, strlen(line))
						flistMsg = flistMsg # "@index@. @lnStr@" # CharFromKey(13)
					}
					retRow = retRow + 1
				}
				if(flistMsg != "")
				{
					msg(flistMsg)
					
					key = 0
					bit = indexMax
					//2λ����������1~2����
					while (bit > 0 && mIndex*10 <= indexMax)
					{
						key = GetKey()
						//����0-9a-z, ����0-9+26
						i = GetNumFromKey(key, 10 - 1)
						if(i >= 0)
						{
							mIndex = mIndex*10+i
						}
						bit = bit/10
					}
				}
			}
			if (mIndex > indexMax)
			{
				msg("�±� (@mIndex@) ����Χ 1~@indexMax@.")
			}
			else
			{
				//��ȡ��ǰ��, �滻Ϊ���ļ���
				line = GetBufLine(cmdBuf, mIndex + firstReRow - 2)
				lnStr = strmid(line, len + 1, strlen(line))
				upLine = GetBufLine(hbuf, cur_row)
				upLnStr = strmid(upLine, 0, strlen(upLine) - 3 - strlen(fName))

				newLine = upLnStr # lnStr
				msg("Add Line:" # CharFromKey(13) # newLine)
				InsBufLine(hbuf, cur_row + 1, newLine);
				SaveBuf(hbuf)
			}
			return 1
		}
	}
	return 0
}
/***********************************************************************/
/************************** select  **********************************/
/***********************************************************************/
//macro _TempSelect(hbuf){		_TempHeadFile(hbuf)		}


macro MGetWndSel(hbuf)
{
	hwnd = GetCurrentWnd()
	if (hwnd == 0)
		stop
		
	sel = GetWndSel(hwnd)
	return sel
}

//��ѡ��
macro IsHasSelect(sel)
{
	return (sel.ichFirst != sel.ichLim || sel.lnFirst != sel.lnLast)
}
//���ǵ���ѡ��, ͬ IsSingleSelect �෴
macro IsNoSelect(sel)
{
	return (sel.ichFirst == sel.ichLim || sel.lnFirst != sel.lnLast)
}
//һ���ѡ��, ��ѡ���߲�����ѡ��
macro IsNoRowSelect(sel)
{
	return (sel.ichFirst != 0 && sel.lnFirst == sel.lnLast)
}
//�ǵ���ѡ��, ͬ IsNoSelect �෴
macro IsSingleSelect(sel)
{
	return (sel.ichFirst != sel.ichLim && sel.lnFirst == sel.lnLast)
}
//�Ƕ���ѡ��
macro IsMoreSelect(sel)
{
	return (sel.lnFirst != sel.lnLast)
}

macro ScrollCursor(mSel)
{
	hwnd = GetCurrentWnd()
	if(mSel.lnFirst>10)
		ScrollWndToLine(hwnd, mSel.lnFirst-10)
	else
		ScrollWndToLine(hwnd, 0)
	SetWndSel(hwnd, mSel)
}
macro ScrollCursorRow(row1, row2)
{
	hwnd = GetCurrentWnd()
	if(row1>20)
		ScrollWndToLine(hwnd, row1-10)
	else
		ScrollWndToLine(hwnd, row1)
	mSel = "lnFirst=\"@row1@\";ichFirst=\"0\";lnLast=\"@row2@\";ichLim=\"0\";fExtended=\"1\";fRect=\"0\""
	SetWndSel(hwnd, mSel)
}
/***********************************************************************/


