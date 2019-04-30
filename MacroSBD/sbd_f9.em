
macro SearchFile()
{
    hwnd = GetCurrentWnd()
    hbuf = GetCurrentBuf()
	if (hwnd == 0)
	{
    	hbuf = OpenDefaultSR(hbuf)
    	stop
	}
	if(IsMacroFile(hbuf))
	{
		OpenExistFile("sbd_test.em")
    	stop
	}
    

	bft = getBft(1)
//	bft = getBufBft(hbuf, 1) //ֻ����һ��, �Ȳ�����
//	if(bft == "")
//		stop
	//bft = "9820e" //test

	file = "\\search\\Macro_ALL_@bft@.h"
	
	if(IsFileName(hbuf, "Macro_ALL_"))
	{
		close
	}
	else if(bft == "9820e")
	{
		sel = MGetWndSel(hbuf)
		if (IsSingleSelect(sel))
		{
			cur_line = GetBufLine(hbuf, sel.lnFirst )		
			 //ѡ�����һ�У������з������
			if(strlen(cur_line) < sel.ichLim)
				sel.ichLim = sel.ichLim - 1
			if(sel.ichFirst == sel.ichLim || 4095 == sel.ichLim)
				stop
			cur_sel = strmid(cur_line, sel.ichFirst, sel.ichLim)

			fI = FindString(cur_sel, ".")
			if(fI != "X")
			{
				strEx = strmid(cur_sel, fI + 1, strlen(cur_sel))
				if(strEx == "c" || strEx == "h" || strEx == "java" || strEx == "mk" || strEx == "xml" || strEx == "xml" )
					file = "\\search\\Macro_ALL_@bft@_" # toupper (strEx) # ".h"
				else if(strEx == "jpg" || strEx == "png" || strEx == "bmp" || strEx == "jif")
					file = "\\search\\Macro_ALL_@bft@_" # "JPG_PNG" # ".h"
				else
					file = "\\search\\Macro_ALL_@bft@_OTHER.h"
			}
			else
			{
				file = "\\search\\Macro_ALL_@bft@_OTHER.h"
			}
			//msg(file)  //test
			
			hSbuf = OpenCache(getNodePath(0) # file)
			if(hSbuf != hNil)
			{
				//ֻ�ܲ��ļ���, �Ҳ�ʹ��ͨ���
				cur_sel = ReplaceWord(cur_sel, "\\", "\\\\")
				cur_sel = ReplaceWord(cur_sel, "/", "\\\\")
				reTxt = ShowSearchMar(hSbuf, "\\\\" # cur_sel # "$")
				if(reTxt == "")
				{
					//����ĸ��д, �ز�һ��
					ch = strmid(cur_sel, 0, 1)
					dCh = AsciiFromChar (ch)
					if(dCh>=97 && dCh<=97+26)
					{
						cur_sel = toupper (strmid(cur_sel, 0, 1)) # strmid(cur_sel, 1, strlen(cur_sel))
						reTxt = ShowSearchMar(hSbuf, "\\\\" # cur_sel # "$")
					}
				}
				
				//��ѯ���
				if(reTxt == "")
				{
					msg("��")
				}
				else if(reTxt == "All")
				{
					msg("���ȫ���ļ���?")
					AddAllFile(hbuf, hSbuf, sel.lnFirst + 1, cur_sel)
					SaveBuf(hbuf)
				}
				else
				{
					iS = sel.ichLim - strlen(reTxt)
					if(iS >= 0)
					{
						oldTxt = strmid(cur_line, iS, sel.ichLim)
						oldTxt = ReplaceWord(oldTxt, "/", "\\")
						if(oldTxt == reTxt)
						{
							msg("��ͬ")
							stop
						}
					}
					//����ͬ
					msg(reTxt)
					InsBufLine(hbuf, sel.lnFirst + 1, "@reTxt@")
					SaveBuf(hbuf)
				}
			}
		}
		else
		{
			hbuf = OpenExistFile(getNodePath(0) # file)
		}
	}
	else
	{
		hbuf = OpenExistFile(getNodePath(0) # file)
	}
	
}



macro ShowSearchMar(hbuf, searchStr)
{
	mSel = SearchInBuf(hbuf, searchStr, 0, 0, TRUE, TRUE, FALSE)
	allKeyTxt = ""
	index = 1
	indexMin = 1
	indexMax = indexMin + 40
	line = ""
	reTxt = ""

	while (mSel != "" && index < indexMax)
	{
		line = GetBufLine(hbuf, mSel.lnFirst )
		{
			numStr = (index-indexMin+1)
			allKeyTxt = allKeyTxt # numStr # "." # line # CharFromKey(13)
			index = index + 1
		}
		mSel = SearchInBuf(hbuf, searchStr, mSel.lnLast+1, 0, TRUE, TRUE, FALSE)
	}
	index = index - 1
	if(index == 1)
	{
		reTxt = line
	}
	else if(index > 1)
	{
		msg(allKeyTxt)
		reTxt = GetSearchMar(hbuf, searchStr, index)
		if(reTxt == "")
			reTxt = "All"
	}
	return reTxt
}

macro GetSearchMar(hbuf, searchStr, indexMax)
{
	mIndex = 0
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
//	mIndex = mIndex - 1
	if (mIndex > indexMax)
		mIndex = indexMax
	
	reTxt = ""
	if (mIndex>0)
	{
		mSel = SearchInBuf(hbuf, searchStr, 0, 0, TRUE, TRUE, FALSE)
		index = 1

		while (mSel != "")
		{
			line = GetBufLine(hbuf, mSel.lnFirst )
			if(index == mIndex)
			{
				reTxt = line
				break
			}
			index = index + 1
			mSel = SearchInBuf(hbuf, searchStr, mSel.lnLast+1, 0, TRUE, TRUE, FALSE)
		}
	}
	return reTxt
}

macro AddAllFile(hbuf, hSbuf, curLn, searchStr)
{
	line = ""
	mSel = SearchInBuf(hSbuf, searchStr, 0, 0, TRUE, TRUE, FALSE)
	while (mSel != "")
	{
		line = GetBufLine(hSbuf, mSel.lnFirst )
		InsBufLine(hbuf, curLn, "@line@")
		curLn = curLn + 1
		mSel = SearchInBuf(hSbuf, searchStr, mSel.lnLast+1, 0, TRUE, TRUE, FALSE)
	}
}
//key:F1->V
macro SearchVersion(hbuf)
{
	var mMacro
	var mFile
	var mWord
	
	if(IsMacroFile(hbuf))  //����
	{
		mMacro="OpenCache"
		mWord = "MacroSBD"
		mFile = "sbd_f9.em"
		
		SearchVersionExt(hbuf, mFile, mMacro, mWord)
	}
	else
	{
		mMacro="_MOCOR_SW_VERSION_"
		mFile = "version_software_mocor.h"

		//sel = MGetWndSel(hbuf)
		if (1)//IsNoSelect(sel)) 
		{
			//���а�����
			mWord = GetClipString(hbuf)
		}
		else
		{
			//��ǰѡ������
			mWord = GetBufLine(hbuf, sel.lnFirst )
			if(strlen(mWord) < sel.ichLim)
				sel.ichLim = sel.ichLim - 1
			if(sel.ichFirst == sel.ichLim || 4095 == sel.ichLim)
				stop
			mWord = strmid(mWord, sel.ichFirst, sel.ichLim)
		}
		if(mWord == "")
		{
			stop
		}
		SearchVersionExt(hbuf, mFile, mMacro, mWord)
	}
}
macro SearchVersionExt(hbuf, mFile, mMacro, mWord)
{
	var pathname
	var filename
	var verFile
	var verSel
	//var verCount

	verCount = 0
	
	
	bft = getBft(5)
//	if(bft == "")
//		stop
	verFile = getNodePath(0) # "\\version\\si_version_@bft@.h"
	verBuf = OpenCache(verFile)

	verSel = SearchInBuf(verBuf, mWord, 0, 0, FALSE, FALSE, FALSE)

	lnMax = GetBufLineCount(verBuf)
	//msg ("verSel @verSel@ verFile @verFile@")

	//���������������ʱ�ļ��У����û��������������ʱ�ļ�
	if (verSel == nil)
	{
		msg("��ʼ�������а汾��")
		isSave = TRUE
		EmptyBuf(verBuf)
		
		// for each project file...
		ifileMac = GetProjFileCount(hprj)
		ifile = 0
		//msg ("ifileMac @ifileMac@")
		while (ifile < ifileMac)
		{
			pathname = GetProjFileName(hprj, ifile)
			filename = GetFileName(pathname)

			if (filename == mFile)
			{
				ipath = GetRelativelyDir(pathname, baseDir, filename)
				hbuf = OpenBuf(pathname)
				if (hbuf != hNil)
				{
					//verCount = verCount + 1
					sel = SearchInBuf(hbuf, mMacro, 0, 0, FALSE, FALSE, FALSE)
					//msg ("sel @sel@ pathname @pathname@")
					if (sel != nil)
					{							
						lineStr = ipath # "," # GetBufLine(hbuf, sel.lnFirst) # "," # sel.lnLast
						AppendBufLine(verBuf, "@lineStr@")
					}
					CloseBuf(hbuf)
				}
			}
			
			// next ifile
			ifile = ifile + 1
		}
		SaveBuf(verBuf)
		verSel = SearchInBuf(verBuf, mWord, 0, 0, FALSE, FALSE, FALSE)
		//msg ("verSel @verSel@ verCount @verCount@")

	}
	
	//SR: ����������浽�������
	baseSR = OpenDefaultSR(hbuf)
	AppendBufLine(baseSR, "----version: @mWord@")
	if (verSel != nil)
	{
		var ichCommp
		//Ŀ¼���ܰ���E:\6531E Ҳ���ܲ�����
	    if(SplitMacro(baseDir, ":", 0, strlen(baseDir)>0)
	    {
	    	baseDir = ""
	    }
	    else
	    {
			baseDir = baseDir # "\\"
	    }
	    
		while (verSel != "")
		{
			line = GetBufLine(verBuf, verSel.lnFirst )
			ilen = strlen(line)
			
			ichComm1 = SplitMacro(line, ",", 0, ilen)
			ichComm2 = SplitMacro(line, ",", ichComm1+1, ilen)
			//ichComm3 = SplitMacro(line, ",", ichComm2+1, ilen)
			
			ipath    = strmid(line, 0, ichComm1)
			iversion = strmid(line, ichComm1+1, ichComm2)
			irow 	 = strmid(line, ichComm2+1, ilen)
			//irow 	 = strmid(line, ichComm2+1, ichComm3)
			//pathname = strmid(line, ichComm3+1, ilen)
			
			lnMax = GetBufLineCount(baseSR)
			lineStr = mFile # " (@ipath@):@iversion@"
			AppendBufLine(baseSR, "@lineStr@")
			
			//����һ���µ�Դ����
			SetSourceLink (baseSR, lnMax, baseDir # ipath # "\\" # mFile, irow)
			//SetSourceLink (baseSR, lnMax, baseDir # pathname, irow)
			
			//verSel = SearchInBuf(verBuf, mWord, verSel.lnLast, verSel.ichLim, 0, 0, 0)
			verSel = SearchInBuf(verBuf, mWord, verSel.lnLast+1, 0, 0, 0, 0)
		}
	}
	else
	{
		AppendBufLine(baseSR, "----no found version, pls update svn and add si file.")
	}
	SaveBuf(baseSR)
	
	hwnd = GetCurrentWnd()
	lnTop = GetWndVertScroll(hwnd);
	cLines = GetWndLineCount(hwnd);
	lnMax = GetBufLineCount(baseSR)
	if (lnTop + cLines + 2 < lnMax)
	{
		lnTop = lnMax - cLines + 1 + 5;
		ScrollWndToLine(hwnd, lnTop); 
	}
	CloseBuf(verBuf)
}

macro FunTotal(hbuf)
{
	sel = MGetWndSel(hbuf)
	cur_line = GetBufLine(hbuf, sel.lnFirst )
	
	//��ʾ�����ļ�����+����
	//fftype = ".em"
	fftype = "." # cur_line
	ffCount = FunTotalCalc(hbuf, fftype)
	
	//��ĩβ�� = TRUE
	strNew = cur_line # ": " # ffCount
	PutBufLine(hbuf, sel.lnFirst, strNew);
}
macro FunTotalCalc(hbuf, type)
{
	var pathname
	var filename
	var verSel
	var ffCount

	ffCount = 0
	
	hprj = GetCurrentProj ()
	
	// for each project file...
	ifileMac = GetProjFileCount(hprj)
	if(type == "" || type == ".")
	{
		return ifileMac
	}
	ifile = 0
	//msg ("ifileMac @ifileMac@")
	while (ifile < ifileMac)
	{
		pathname = GetProjFileName(hprj, ifile)
		filename = GetFileName(pathname)
		//type = ".java" ".c" 
		isF = IsFileType(filename, type)

		if (isF)
		{
			ffCount = ffCount + 1
		}
		
		// next ifile
		ifile = ifile + 1
	}
	return ffCount
}

//����
macro SearchTest(hbuf)
{
	//SearchVersion(hbuf)
}


