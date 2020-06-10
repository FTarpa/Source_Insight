﻿
macro OpenMiniTest(hbuf)
{
	isTest = getMacroValue(hbuf, "MiniTest", 1)
	if(isTest != ""){
		sel = MGetWndSel(hbuf)
		cur_line = GetBufLine(hbuf, sel.lnFirst )
		len = strlen(cur_line)

		start  = GetTransCmdS(cur_line,  0,         len)
		next   = GetTransCmdE(cur_line,  start,     len)
		start2 = GetTransCmdS2(cur_line, next + 1,  len)
		next2  = GetTransCmdE(cur_line,  start2,    len)
		start3 = GetTransCmdS2(cur_line, next2 + 1, len)
		next3  = GetTransCmdE(cur_line,  start3,    len)
		//
		word_1 = GetTransStr(cur_line, start, next)
		word_2 = GetTransStr(cur_line, start2, next2)
		word_3 = GetTransStr(cur_line, start3, next3)
		TestMsg("word_1 " # word_1 # CharFromKey(13) # "word_2 " # word_2 # CharFromKey(13) # "word_3 " # word_3 # CharFromKey(13), 1)
		
		if(word_1 == "project")
		{
			bft = getMacroValue(hbuf, "bftParam", 1)
			isSaveRow = 1
			openNoteFile(hbuf, bft, isSaveRow)
		}
		else if(word_1 == "goto_copy")
		{
 			//F5
 			//  1.跳转到复制对应的语言/宏
 			//  2.跳转到选中的宏
			if(strlen(word_2) > 0)
			{
				GotoHan(word_2)
			}
			else
			{
				word_2 = GetClipString(hbuf)
				if(strlen(word_2) > 0)
				{
					GotoHan(word_2)
				}
			}
		}
		else if(word_1 == "goto_select")
		{
 			//F5
 			//  选中宏，mk文件中,          打开/跳转到对应的文件/宏
			cur_line = GetBufLine(hbuf, sel.lnFirst )
			if(strlen(cur_line) < sel.ichLim)
				sel.ichLim = sel.ichLim - 1
			if(sel.ichFirst == sel.ichLim || 4095 == sel.ichLim)
				stop
			cur_sel = strmid(cur_line, sel.ichFirst, sel.ichLim)
			
			bft = "6531E"
			GotoKey(hbuf, bft, cur_sel)
		}
		else if(word_1 == "rule_cn_soft")
		{
 			//F5
 			//  批量测试中文排序的准确性
			hbufRule = OpenCache(getRulePath(0) # "\\Macro_Rule_Han.h")
			lnMax = GetBufLineCount(hbufRule)
			TestFindCacheAll(hbufRule, 0, lnMax)
		}
		else if(word_1 == "rule_en_soft")
		{
 			//F5
 			//  批量测试英文排序的准确性
			hbufRule = OpenCache(getRulePath(0) # "\\Macro_Rule_Key.h")
			lnMax = GetBufLineCount(hbufRule)
			TestFindCacheAll(hbufRule, 0, 3)  //lnMax
		}
		else if(word_1 == "rule_cn_find")
		{
 			//F5
			//  查找中文跳转
			hbufRule = OpenCache(getRulePath(0) # "\\Macro_Rule_Han_file.h")
			lnMax = GetBufLineCount(hbufRule)
			
			TestFindCache(hbufRule, "越", lnMax)
			TestFindCache(hbufRule, "越南", lnMax)
			TestFindCache(hbufRule, "阿", lnMax) // 找不到
			TestFindCache(hbufRule, "匈牙", lnMax)
			TestFindCache(hbufRule, "俄", lnMax)
			TestFindCache(hbufRule, "乌", lnMax)
			TestFindCache(hbufRule, "法", lnMax)
			TestFindCache(hbufRule, "泰", lnMax) // 错
		}
		else if(word_1 == "rule_en_find")
		{
 			//F5
			//  查找英文跳转
			hbufRule = OpenCache(getRulePath(0) # "\\Macro_Rule_Key.h")
			lnMax = GetBufLineCount(hbufRule)
			
			TestFindCache(hbufRule, "TEST", lnMax) // 找不到
			TestFindCache(hbufRule, "CHIP", lnMax) // 找不到
			TestFindCache(hbufRule, "NV3029G", lnMax)
			TestFindCache(hbufRule, "NV3029H", lnMax)
		}
		else if(word_1 == "key_cn_soft")
		{
 			//F6
 			//  英文排序测试
			msg ("test Key file")
			hbufRule = OpenCache(getRulePath(0) # "\\Macro_Rule_Key_file.h")
			QuickSoftCacheTest(hbufRule, 0, GetBufLineCount(hbufRule) - 1)
		}
		else if(word_1 == "key_en_soft")
		{
 			//F6
 			//  中文排序测试
			msg ("test Han file")
			hbufRule = OpenCache(getRulePath(0) # "\\Macro_Rule_Han_file.h")
			QuickSoftCacheTest(hbufRule, 0, GetBufLineCount(hbufRule) - 1)
		}
		else if(word_1 == "add_rule")
		{
 			//F6
 			//  选中后添加规则
			msg ("test AddRule")
			AddRule(hbuf)
		}
		else if(word_1 == "search_version")
		{
 			//F9
 			//  搜索版本号
			SearchVersion(hbuf)
		}
		else if(word_1 == "search_bft")
		{
 			//F9
 			//  
			bft = getMacroValue(hbuf, "bftParam", 1)
			//StartF9Search(hbuf, bft, "")
			StartF9Search(hbuf, bft, word_2)
		}
		else if(word_1 == "sr_group")
		{
 			//F10
 			//  
			SrGroup(hbuf)
			bft = getMacroValue(hbuf, "bftParam", 1)
			MakeSelGroup(hbuf, bft)
		}
		else if(word_1 == "show_menu")
		{
 			//F10
 			//  
			curItem = GetGroupItem("menu3:tool-a2", 1, "Menu", bft)
			msg(curItem)
			iFcurItemile = GetGroupItem("menu3:tool-a2", 2, "Menu", bft)
			msg(curItem)
		}
		else if(word_1 == "group")
		{
			//F10
			bft = getMacroValue(hbuf, "bftParam", 1)
			//filename = getMacroValue(hbuf, "fileParam", 1)
			filename = word_2
			DefaultGroup(filename, bft)
		}
		else if(word_1 == "mode_save")
		{
			//mode
 			//  
//			SaveMode(getSRTmpRow(0), "@mode@")
			mode = "m15"
			SaveMode(15, "@mode@")
		}
		else if(word_1 == "mode_read")
		{
			//mode
 			//  
			mode = ReadMode(getSRTmpRow(0))
			msg ("mode15 @mode@ ")
		}
		else if(word_1 == "line_value")
		{
			//String
 			//  
			v = "CUSTOMER = SE039_YST				"
			val = GetLineValue(v)
			val_f = strmid(val, 0, 5)
			basePro = "...\\common\\nv_parameters"
			//...\common\nv_parameters\SE039_MB\SE039_ANSD_2IN1
			val = cat(basePro, "\\@val_f@_MB\\@val@")
			msg ("val:  ~ [@val@]  " )
		}
		else if(word_1 == "string_translate")
		{
			//String
 			//  
			//path = "F:\\11CW1352MP_BLEPHONE61D_11C_V33\\projects\\M107\\M107_XYZN_S2_4A_NEDADJ_F6\\Resource"
			path = "E:\\desktop\\test"
			
			file = "sub_1.txt"
			
		//	logfile = "z_translate_log.txt"
		//	hbufLog = OpenCache(path # "\\" # logfile)
		//	EmptyCache(hbufLog)

			listfile = "z_translate_list.txt"
			hbuflist = OpenCache(path # "\\" # listfile)

			//不必要分很多文件; 估计有特殊字符Si无法保存
			
		//	TranslateDir(path # "\\sub_1.txt", hbuflist)
		//	TranslateDir(path # "\\sub_2.txt", hbuflist)
		//	TranslateDir(path # "\\sub_3.txt", hbuflist) //error
		//	TranslateDir(path # "\\sub_4.txt", hbuflist) //error
		//	TranslateDir(path # "\\sub_5.txt", hbuflist)
		//	TranslateDir(path # "\\sub_6.txt", hbuflist)
			TranslateDir(path # "\\sub_7.txt", hbuflist)
		//	TranslateDir(path # "\\sub_8.txt", hbuflist)
		//	TranslateDir(path # "\\sub_9.txt", hbuflist)
		//	TranslateDir(path # "\\sub_10.txt", hbuflist)
		//	TranslateDir(path # "\\sub_11.txt", hbuflist)
		//	TranslateDir(path # "\\sub_12.txt", hbuflist)
		//	TranslateDir(path # "\\sub_13.txt", hbuflist)
		//	TranslateDir(path # "\\sub_14.txt", hbuflist)

			CloseBuf(hbuflist)
		}
		else if(word_1 == "shell_cmd")
		{
			//Shell
 			//  
			path = "F:\\6531E_16A\\build"
			//ShellExecute("open", "cmd.exe", "F:;cd @path@;", "C:\\Windows\\System32", 1)
		}
		else if(word_1 == "shell_SvnLog")
		{
			//Shell
 			//  
			path = "F:\\6531E_16A\\project\\SE039_YST_T18_LINNEX_LE01_F2"
			ShellSvnLog(path) 
		}
		else if(word_1 == "shell_SvnDiff")
		{
			//Shell
 			//  
			path1 = "F:\\6531E_16A\\project\\SE039_YST_T18_LINNEX_LE01_F2"
			//path2 = "F:\\6531DA_Btdialer\\version"
			ShellSvnDiff(path1, path2)
		}
		else if(word_1 == "API_log")
		{
			//API
 			//  
			s="asdf"
			//AppendToLog(s)
		}
		else if(word_1 == "API_struct")
		{
			//API
 			//  
			sel.fExtended  //(sel.fRect || sel.lnFirst != sel.lnLast || sel.ichFirst != sel.ichLim)
			sel.fRect      //如果选择是矩形（块样式）则为TRUE。
			SetBufIns(hbuf, sel.lnFirst, sel.ichFirst)
		}
		else if(word_1 == "API_val")
		{
			//API
 			//  
			val = nil
			msg(val)
			val = hNil
			msg(val)
		}
		return 1
	}
	return 0
}

macro TestChar(key)
{
	//正则表达式：
	//[abc]    任何在[]之内的字符
	//[^abc]   任何不在[]之内的字符，^表示不在[]之内
	//转义字符 \t(tab), \s(space), \w(tab or space)

	//表数量的如：
	//* 大于等于0个
	//+ 大于0个，也就是至少有1个
	
	//^    表示行起始，注意不要把这个^和[]里的^搞混了。
	//$    表示行结束

	//分组使用\1, \2, \3, ...
	//old:void func(int var1, int var2)
    //new:void func(int var2, int var1)，
	//old:func(.*, .*)
	//new:func(\2, \1)
	
	//替换整个工程，快捷键ctrl+shift+H
}

macro TestAPI(key)
{
	//_TempHeadTest(hbuf)
	
	/* Document */
	
	loc = DocumentOpen(sFile)
	//DocumentSave(sFile)
	//DocumentSaveComplete
	//Save
	//Save

	
	/* Str */
	//替换
	//ReplaceInBuf(hbuf, oldPattern, newPattern, lnStart, lnLim, fMatchCase, fRegExp, fWholeWordsOnly, fConfirm)
	ReplaceInBuf(hbuf, "^\\(\\t*\\)    ", "\\1\\t", 0, GetBufLineCount(hbuf) + 1, 1, 1, 0, 0)
	cchLine = strlen(szLine)
	//cchLine = instr(szLine) //no avail
	szNewLine = cat(szNewLine, strmid(szLine, ichL, ichR + 1))

	cTotal = GetBufLineLength(buff, ln)
	cur_sel = strmid(cur_line, sel.ichFirst, sel.ichLim)

	
	/* cmd */
	copy
	Paste
	
	/* Buf */
	//获取当前输入的句柄
	//hBuf = 0(none), 1(cur), ...
	 hBuf = GetCurrentBuf()
	 
	cur_line = GetBufLine( hcbuf, sel.lnFirst )
	AppendBufLine(hbuf, "Param:@cur_sel@")
	EmptyBuf(hbuf)
	InsBufLine(hbuf, 0 + 1, "@szLine@" # "###")
	//DelBufLine(hbufCur, lnCur)
	//EmptyBuf(GetBufHandle("Clipboard"))
	//InsBufLine(hbuf, ln + 1, "@szLine@" # "###")
	//PutBufLine(hbuf, iLine, szLine);
	SaveBufAs(hbuf, fname)
	SaveBuf(hbuf)

	SetBufSelText(hbuf, szNew)

	/* file */
	 szfileName = GetFileName(szpathName)

	 
	/* Clipboard */
	hbufClip = GetBufHandle("Clipboard")
	//EmptyBuf(hbufClip)
	cLines = GetBufLineCount(hbufClip)


	GetReg("TabSize")
}

macro OtherAPI(key)
{
	//_TempHeadTest(hbuf)
	
	//Document Events :
	//event// DocumentNew(sFile)
	//event// DocumentOpen(sFile)
	//event// DocumentClose(sFile)
	//event// DocumentSave(sFile)
	//event// DocumentSaveComplete(sFile)
	//event// DocumentChanged(sFile)
	//event// DocumentSelectionChanged(sFile)

	//String Functions :
	AsciiFromChar (ch)
	cat (a, b)
	CharFromAscii (ascii_code)
	islower (ch)
	IsNumber (s)
	isupper (ch)
	strlen (s)
	strmid (s, ichFirst, ichLim)
	strtrunc (s, cch)  字符串截断
	tolower (s)
	toupper (s)

	//Standard Record Structures :
	//Bookmark Record
	//Bufprop Record
	//DIM Record
	//Link Record
	//ProgEnvInfo Record
	//ProgInfo Record
	//Rect Record
	//Selection Record
	//Symbol Record
	//SYSTIME Record

	//Special Constants :
	//True		“1”
	//False		“0”
	//Nil		“” – the empty string.
	//hNil		“0” – an invalid handle value.
	//invalid		"-1" – an invalid index value.

	//Searching Functions :
	GetSourceLink (hbufSource, lnSource)
	LoadSearchPattern(pattern, fMatchCase, fRegExp, fWholeWordsOnly)
	ReplaceInBuf(hbuf, oldPattern, newPattern, lnStart, lnLim, fMatchCase, fRegExp, fWholeWordsOnly, fConfirm)
	SearchForRefs (hbuf, word, fTouchFiles)
	//文件内搜索
	SearchInBuf (hbuf, pattern, lnStart, ichStart, fMatchCase, fRegExp, fWholeWordsOnly)
	//创建一个新的源链接
	SetSourceLink (hbufSource, lnSource, target_file, lnTarget)

	//Window Functions :
	CloseWnd (hwnd)
	GetApplicationWnd ()
	GetCurrentWnd ()
	GetNextWnd (hwnd)
	GetWndBuf (hwnd)
	GetWndClientRect (hwnd)
	GetWndDim (hwnd)
	GetWndHandle (hbuf)
	GetWndHorizScroll (hwnd)
	GetWndLineCount (hwnd)
	GetWndLineWidth (hwnd, ln, cch)
	GetWndParent (hwnd)
	GetWndRect (hwnd)
	GetWndSel (hwnd)
	GetWndSelIchFirst (hwnd)
	GetWndSelIchLim (hwnd)
	GetWndSelLnFirst (hwnd)
	GetWndSelLnLast (hwnd)
	GetWndVertScroll (hwnd)
	IchFromXpos (hwnd, ln, xp)
	IsWndMax (hwnd)
	IsWndMin (hwnd)
	IsWndRestored (hwnd)
	MaximizeWnd (hwnd)
	MinimizeWnd (hwnd)
	NewWnd (hbuf)
	ScrollWndHoriz (hwnd, pixel_count)
	ScrollWndToLine (hwnd, ln)
	ScrollWndVert (hwnd, line_count)
	SetCurrentWnd (hwnd)
	SetWndRect (hwnd, left, top, right, bottom)
	SetWndSel (hwnd, selection_record)
	ToggleWndMax (hwnd)
	XposFromIch (hwnd, ln, ich)

	//Window List Functions :
	//count = BufListCount ()
	//BufListItem (index)
	WndListCount ()
	WndListItem (index)

	//Symbol List Functions :
	SymListCount ()
	SymListFree (hsyml)
	SymListInsert (hsyml, isym, symbolNew)
	SymListItem (hsyml, isym)
	SymListNew ()
	SymListRemove (hsyml, isym)

	//Symbol Functions :
	GetBufSymCount(hbuf)
	GetBufSymLocation(hbuf, isym)
	GetBufSymName(hbuf, isym)
	GetCurSymbol ()
	GetSymbolLine (symbol_name)
	GetSymbolLocation (symbol_name)
	GetSymbolLocationEx (symbol_name, output_buffer, fMatchCase, LocateFiles, fLocateSymbols)
	GetSymbolFromCursor (hbuf, ln, ich)
	GetSymbolLocationFromLn (hbuf, ln)
	JumpToLocation (symbol_record)
	JumpToSymbolDef (symbol_name)
	SymbolChildren (symbol)
	SymbolContainerName (symbol)
	SymbolDeclaredType (symbol)
	SymbolLeafName (symbol)
	SymbolParent (symbol)
	//SymbolRootContainer (symbol) //no avail
	SymbolStructureType (symbol)



	count = BookmarksCount ()
	//BookmarksItem (index)
	//msg ("Bookmarks @count@")

	hprj = GetCurrentProj ()
	count = GetProjFileCount (hprj)
	//msg ("ProjFile @count@")
	filename = GetProjFileName(hprj, 0)
	//msg ("ProjFile @filename@")
	
	path = GetProjDir (hprj)
	msg ("path @path@")
	projName = GetProjName (hprj)
	msg ("projName @projName@")
	
	info = GetProgramEnvironmentInfo ()
	//msg ("Proj info @info@")
	info = GetProgramInfo ()
	//msg ("Proj info @info@")
	
	//功能不清楚
	AddConditionVariable(hprj, "sbd*", "s")
	AddConditionVariable(0, "sbd_tmp.em", "s")
	
	AddFileToProj(hprj, "E:\\save\\SI\\MacroSBD\\sbd_tmp.em")

}

macro OpenRefTest(hbuf)
{
	//_TempHeadTest(hbuf)
	
	/*
	this section:

	Commands Overview
	About Source Insight
	Activate Menu Commands
	Activate Global Symbol List
	Activate Relation Window
	Activate Search Results
	Activate Symbol Window
	Add and Remove Project Files
	Add File
	Add File List
	Advanced Options
	Back Tab
	Backspace
	Beginning of Line
	Beginning of Selection
	Blank Line Down
	Blank Line Up
	Block Down
	Block Up
	Bookmark
	Bottom of File
	Bottom of Window
	Browse Files
	Browse Project Symbols
	Browse Global Symbols Dialog box
	Browse Local File Symbols
	Cascade Windows
	Checkpoint
	Checkpoint All
	Clear Highlights
	Clip Properties
	Clip Window Properties
	Close
	Close All
	Close Project
	Close Window
	Color Options
	Command Shell
	Complete Symbol
	Context Window
	Context Window Properties
	Copy
	Copy Line
	Copy Line Right
	Copy List
	Copy Symbol
	Copy To Clip
	Create Key List
	Create Command List
	Cursor Down
	Cursor Left
	Cursor Right
	Cursor Up
	Custom Commands
	Cut
	Cut Line
	Cut Line Left
	Cut Line Right
	Cut Selection or Paste
	Cut Symbol
	Cut To Clip
	Cut Word
	Cut Word Left
	Delete
	Delete All Clips
	Delete Character
	Delete Clip
	Delete File
	Delete Line
	Display Options
	Document Options
	Draft View
	Drag Line Down
	Drag Line Down More
	Drag Line Up
	Drag Line Up More
	Duplicate
	Duplicate Symbol
	Edit Condition
	Enable Event Handlers
	End of Line
	End of Selection
	Exit
	Exit and Suspend
	Expand Special
	File Options
	Folder Options
	Function Down
	Function Up
	General Options
	Go Back
	Go Back Toggle
	Go Forward
	Go To First Link
	Go To Line
	Go To Next Change
	Go To Previous Change
	Go To Next Link
	Go To Previous Link
	Help
	Help Mode
	Highlight Word
	Incremental Search
	Incremental Search Mode
	Incremental Search Backward
	Horizontal Scroll Bar
	HTML Help
	Indent Left
	Indent Right
	Insert ASCII
	Insert File
	Insert Line
	Insert Line Before Next
	Insert New Line
	Join Lines
	Jump To Base Type
	Jump To Caller
	Jump To Definition
	Jump To Link
	Jump To Prototype
	Key Assignments
	Keyword List
	Language Options
	Language Properties
	Line Numbers
	Link All Windows
	Link Window
	Load Configuration
	Load File
	Load Search String
	Lock Context Window
	Lock Relation Window
	Lookup References
	Make Column Selection
	Menu Assignments
	New
	New Clip
	New Relation Window
	New Project
	New Window
	Next File
	Next Relation Window View
	Open
	Open Project
	Page Down
	Page Setup
	Page Up
	Paren Left
	Paren Right
	Parse Source Links
	Paste
	Paste From Clip
	Paste Line
	Paste Symbol
	Play Recording
	Preferences
	Print
	Print Relation Window
	Project Document Types
	Project File Browser
	Project File List
	Project Symbol Classes
	Project Symbol List
	Project Window Properties
	Project Settings
	Project Report
	Project Window command
	Rebuild Project
	Record New Default Properties
	Redo
	Redo All
	Redraw Screen
	Reform Paragraph
	Refresh Relation Window
	Relation Graph Properties
	Relation Window
	Relation Window Properties
	Relation Window Properties Dialog Box
	Reload File
	Reload Modified Files
	Remove File
	Remove Project
	Remote Options
	Rename
	Renumber
	Repeat Typing
	Replace
	Replace Files
	Restore File
	Restore Lines
	Save
	Save A Copy
	Save All
	Save All Quietly
	Save As
	Save Configuration
	Save Selection
	Save Workspace
	Scroll Half Page Down
	Scroll Half Page Up
	Scroll Left
	Scroll Line Down
	Scroll Line Up
	Scroll Right
	SDK Help
	Search
	Search Backward
	Search Backward for Selection
	Search Files
	Search Forward
	Search Forward for Selection
	Search List
	Search Project
	Searching Options
	Select All
	Select Block
	Select Char Left
	Select Char Right
	Select Function or Symbol
	Select Line
	Select Line Down
	Select Line Up
	Select Match
	Select Next Window
	Select Sentence
	Select Symbol
	Select To
	Select To End Of File
	Select To Top Of File
	Select Word
	Select Word Left
	Select Word Right
	Selection History
	Setup Common Projects
	Setup HTML Help
	Setup WinHelp File
	Show Clipboard
	Show File Status
	Simple Tab
	Smart End of Line
	Smart Beginning of Line
	Smart Rename
	Smart Tab
	Sort Symbol Window
	Sort Symbols By Line
	Sort Symbols by Name
	Sort Symbols By Type
	Source Dynamics on the Web
	Start Recording
	Stop Recording
	Style Properties
	Symbol Info
	Symbol Lookup Options
	Symbol Window command
	Symbol Window Properties
	Sync File Windows
	Synchronize Files
	Syntax Decorations
	Syntax Formatting
	Tile Horizontal
	Tile One Window
	Tile Two Windows
	Tile Vertical
	Toggle Insert Mode
	Top of File
	Top of Window
	Touch All Files in Relation
	Typing Options
	Undo
	Undo All
	Vertical Scroll Bar
	View Clip
	View Relation Outline
	View Relation Window Horizontal Graph
	View Relation Window Vertical Graph
	Window List
	Word Left
	Word Right
	Zoom Window
	*/
}

macro TestSiMro1()
{
	msg("mro1")
	return 1
}

macro TestSiMro2()
{
	msg("mro2")
	return 1
}

macro TestNodeMsg(msgStr)
{
	if(msgStr == "CustomCmd")
	{
		cmdStr = "D:&&cd D:\\Save\\SI\\Macro&&start cmd.exe&&parse"
//		cmdStr = "D:&&start cmd.exe&&parse"
//		cmdStr = "start cmd.exe&&parse"

		msg(cmdStr)
		ShellOpenCustomCmd(cmdStr)
	}
	else if(msgStr == "SiMro")
	{
		//&&左右两边都执行
		if(TestSiMro1()>0 && TestSiMro2()>0)
			msg("a && b")

		if(TestSiMro1()>0 || TestSiMro2()>0)
			msg("a || b")
			
		if(TestSiMro1()==0 && TestSiMro2()==0)
			msg("!a && !b")
	}
	else
	{
		//临时
		msg(msgStr # " no found")
	}
}

macro TestMsg(msgStr, num)
{
	global counter

	//num不传参数会变成")"
	if(num == "X")
	{
		//counter 第2次执行宏未清零, 因此要手动清零
		counter = nil
		return
	}
//	msg(counter)

	if(counter == nil)
	{
    	hbuf = GetCurrentBuf()
		test = getMacroValue(hbuf, "testParam", 1)
		if(test == "")
			counter = 1
//			counter = 3
		else
			counter = test + 1
	}
	if(num < counter)
	{
		//testParam=0: num=0------时打印, 默认
		//testParam=1: num=0/1----时打印
		//testParam=2: num=0/1/2--时打印
		msg(msgStr)
	}
}
