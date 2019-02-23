
macro Group()
{
	//_TempHeadF10(hbuf)
	hwnd = GetCurrentWnd()
	hbuf = GetCurrentBuf()
	
	if (hwnd == 0)
	{
    	hbuf = OpenDefaultSR(hbuf)
    	stop
	}
	//日志功能
	if(IsFileName(hbuf, "Macro_") || IsFileName(hbuf, "Simple_CTRL_"))
	{
		NoteGroup(hbuf)
		stop
	}
	
	if(IsMakeFile(hbuf))
	{
		MakeGroup(hbuf)
	}
	else if(IsMacroFile(hbuf))
	{
		ShowMacroGroup(hbuf)
	}
	else if(IsSRFile(hbuf))
	{
		SrGroup(hbuf)
	}
	else
	{
		DefaultGroup(hbuf)
	}
}

macro GetNumFromKey(key, count)
{
	if (key >= 49 && key <= 57 && (key - 48) <= count)
	{
		return (key - 48)
	}
 	else if(key == 48)
	{
	 	if(10 <= count)
			return (10)
 		else
			return (0)
	}
 	else if(key >= 97 && (key - 97 + 11) <= count)
	{
		return (key - 97 + 11)
	}
	return -1
}
macro GetKeyExt(count)
{
	key = GetKey()
	return GetNumFromKey(key, count)
}
macro GetKeyStr(index)
{
	if (index >= 1 && index <= 9)
	{
		return (index # "")
	}
 	else if(index == 10)
	{
		return "0"
	}
 	else if(index > 10)
	{
		return CharFromKey(index - 11 + 97)
	}
	return ""
}
macro getBft(num)
{
	hprj = GetCurrentProj ()
	path = GetProjDir (hprj)
	bft = getBaseFileType(path, num) //num = 2
	if(bft == "")
		stop
	return bft
}
macro MakeGroup(hbuf)
{
	bft = getBft(2)
	clipStr = GetClipString(hbuf)
	sel = MGetWndSel(hbuf)
	if (!IsHasSelect(sel) && clipStr != "")
	{
		ckey = FindKeyFromGroup(hbuf, clipStr, bft)
		if(ckey == "")
		{
			//便于整行替换时, 先跳转到对应位置
			mcr = GetLineMacro(clipStr)
			mSel = SearchInBuf(hbuf, "^@mcr@", 0, 0, 0, 1, 0)
			if (mSel != "")
			{
				ScrollCursor(mSel)
				return
			}
		}
		else
		{
			GotoMakeHead(hbuf, ckey)
		}
	}
	else
	{
		MakeSelGroup(hbuf, bft)
	}
}
macro MakeSelGroup(hbuf, bft)
{
	//_TempHeadF10(hbuf)
	sel = MGetWndSel(hbuf)
	if (IsSingleSelect(sel))
	{
		cur_line = GetBufLine(hbuf, sel.lnFirst )
		if(sel.ichLim > strlen(cur_line))
			stop
		if(sel.ichFirst == sel.ichLim || 4095 == sel.ichLim)
			stop
		cur_sel = strmid(cur_line, sel.ichFirst, sel.ichLim)
		
		//1.quick goto
		curSearch = ReadMode(getCurSearch(0))
		if(curSearch == cur_sel)
		{
			tmpKey   = ReadMode(getCurHead(0))
			curIndex = ReadMode(getCurIndex(0))
			count    = ReadMode(getCurCount(0))
			
			if(curIndex < 1)
			{
				//不固定跳转
				curRow = count
				selHead = GetGroupItem(tmpKey, 1, "Make", bft)
				mSel = SearchInBuf(hbuf, selHead, curRow + 1, 0, 0, 1, 0)
				if (mSel == "")
				{
					mSel = SearchInBuf(hbuf, selHead, 0, 0, 0, 1, 0)
				}
				if (mSel != "")
				{
					if (mSel.lnFirst != curRow)
					{
						cur_line = GetBufLine(hbuf, mSel.lnFirst )
						mar = GetLineMacro(cur_line)
						mSel.ichFirst = FindString( cur_line, mar )
						mSel.ichLim = mSel.ichFirst + strlen(mar)
						ScrollCursor(mSel)
						//save后方便逐个跳转
						SaveMode(getCurSearch(0), "@mar@")
						SaveMode(getCurCount(0), mSel.lnFirst)
					}
				}
				return
			}
			else
			{
				//固定跳转
				if(count<1)
				{
					count = ShowGroupMenu(tmpKey, "Make", 0, bft)
					SaveMode(getCurCount(0), "@count@")
					
					if(curIndex == count)
						curIndex = 1
					else
						curIndex = curIndex + 1
					nextKey = GetGroupItem(tmpKey, curIndex, "Make", bft)
					if(nextKey !="")
					{
						ret  = GotoNextMacroEx(hbuf, nextKey, 0, 0)
						if(ret == 1)
						{
							SaveMode(getCurSearch(0), "@nextKey@")
							SaveMode(getCurIndex(0), "@curIndex@")
							return
						}
					}
				}
			}
		}
		
		//2.select key->group to Insert
		count = ShowGroupMenu(cur_sel, "Make", 1, bft)
		if(count>0)
		{
			key = GetKeyExt(count)
			if (key>0)
			{
				tmpMacro = GetGroupItem(cur_sel, key, "Make", bft)
				mSel = SearchInBuf(hbuf, "@tmpMacro@", 0, 0, 0, 0, 0)
				if (mSel != "")
				{
					ScrollCursor(mSel)
					return
				}
				else
				{
					InsBufLine(hbuf, sel.lnFirst + 1, "@tmpMacro@ = TRUE")
					return
				}
			}
			return
		}
		
		//3.select not exist Macro to ADD
		tmpKey = GetGroupHead(cur_sel, "Make", bft)
		if(tmpKey == "")
		{
			if(strlen(cur_sel)>25)
				grMsg = strmid(cur_sel,0,25) # "..."
			else
				grMsg = cur_sel
			grMsg = "Add item: @grMsg@" # CharFromKey(13)
			grMsg = grMsg # "Note: LCD、camera、torch" # CharFromKey(13)
			head = Ask("@grMsg@")
			grRule = OpenCache(getNodePath(0) # "\\group\\Macro_Group_Make_@bft@.h")

			mSel = SearchInBuf(grRule, "head:@head@", 0, 0, FALSE, FALSE, FALSE)
			if (mSel == "")
			{
				AppendBufLine(grRule, "")
				AppendBufLine(grRule, "head:@head@,@head@")
			}
			AppendBufLine(grRule, "item:@head@,@cur_sel@")
			SaveBuf(grRule)
			CloseBuf(grRule)
			return
		}
		
		//count = ShowGroupMenu(tmpKey, "Make", 0, bft)
		tmpCI = GetGroupCountAndIndex(tmpKey, cur_sel, "Make", bft)
		curIndex = tmpCI/100
		count 	 = tmpCI - curIndex*100
		{
			//4.select exist Macro to Next
			if(curIndex == count)
				curIndex = 1
			else
				curIndex = curIndex + 1
			nextKey= GetGroupItem(tmpKey, curIndex, "Make", bft)
			if(nextKey !="")
			{
				ret  = GotoNextMacroEx(hbuf, nextKey, 0, 0)
				if(ret == 1)
				{
					SaveMode(getCurSearch(0), "@nextKey@")
					SaveMode(getCurIndex(0), "@curIndex@")
					SaveMode(getCurCount(0), "@count@")
					SaveMode(getCurHead(0), "@tmpKey@")
					return
				}
			}
		}
		
		//5.select exist Macro to Insert
		count = ShowGroupMenu(tmpKey, "Make", 1, bft)
		key = GetKeyExt(count)
		if (key>0)
		{
			tmpMacro= GetGroupItem(tmpKey, key, "Make", bft)
			mSel = SearchInBuf(hbuf, "@tmpMacro@", 0, 0, 0, 0, 0)
			if (mSel != "")
			{
				ScrollCursor(mSel)
				return
			}
			else
			{
				InsBufLine(hbuf, sel.lnFirst + 1, "@tmpMacro@ = TRUE")
				return
			}
		}
		return
	}
	count = ShowGroupMenu("", "Make", 1, bft)
	if(count>0)
	{
		key = GetKeyExt(count)
		if (key>0)
		{
			//6.only goto first
			head = GetGroupItem("", key, "Make", bft)
			selHead = GetGroupItem(head, 1, "Make", bft)
			if(selHead !="")
			{
				if(strmid(selHead,0,1) =="^")
				{
					mSel = SearchInBuf(hbuf, selHead, 0, 0, 0, 1, 0)
					if (mSel != "")
					{
						cur_line = GetBufLine(hbuf, mSel.lnFirst )
						mar = GetLineMacro(cur_line)
						mSel.ichFirst = FindString( cur_line, mar )
						mSel.ichLim = mSel.ichFirst + strlen(mar)
						ScrollCursor(mSel)
						//save后方便逐个跳转
						SaveMode(getCurSearch(0), "@mar@")
						SaveMode(getCurIndex(0), "0")
						SaveMode(getCurCount(0), mSel.lnFirst)
						SaveMode(getCurHead(0), "@head@")
						return
					}
				}
				else
				{
					ret = GotoNextMacroEx(hbuf, selHead, 0, 0)
					if(ret == 1)
					{
						SaveMode(getCurSearch(0), "@selHead@")
						SaveMode(getCurIndex(0), "1")
						SaveMode(getCurCount(0), "0")
						SaveMode(getCurHead(0), "@head@")
						return
					}
				}
			}

			//7.select head to goto
			GotoMakeHead(hbuf, head)
		}
	}
	else
	{
		msg("No Make List")
	}
	
}

macro SrGroup(hbuf)
{
	//_TempHeadF10(hbuf)
	bft = getBft(2)
	count = ShowGroupMenu("", "Menu", 1, bft)
	if(count>0)
	{
		key = GetKeyExt(count)
		if (key>0)
		{
			file = GetGroupItem("", key, "Menu", bft)
			OpenExistFile(file)
		}
	}
	else
	{
		msg("No Menu List")
	}
}
//添加SR列表
macro DefaultGroup(hbuf)
{
	//_TempHeadF10(hbuf)
	bft = getBft(2)
	szpathName = GetBufName(hbuf)
	filename = GetFileName(szpathName)
	mNote = GetGroupHead(filename, "Menu", bft)
	if(mNote == "")
	{
		grMsg = "Add Menu, File: @filename@" # CharFromKey(13)
		grMsg = grMsg # "Note: set、tool、menu" # CharFromKey(13)
		mNote = Ask("@grMsg@")
		grRule = OpenCache(getNodePath(0) # "\\group\\Macro_Group_@grFile@_@bft@.h")

		mSel = SearchInBuf(grRule, mNote, 0, 0, FALSE, FALSE, FALSE)
		if (mSel == "")
		{
			AppendBufLine(grRule, "")
			AppendBufLine(grRule, "head:@mNote@,@mNote@")
		}
		AppendBufLine(grRule, "item:@mNote@,@filename@")
		SaveBuf(grRule)
		CloseBuf(grRule)
	}
	else
	{
		//如果备注同名，显示相关列表
		count = ShowGroupMenu(mNote, "Menu", 1, bft)
		if(count>0)
		{
			key = GetKeyExt(count)
			if (key>0)
			{
				file = GetGroupItem(mNote, key, "Menu", bft)
				OpenExistFile(file)
			}
		}
		else
		{
			msg("Cur Item: @mNote@  @filename@")
		}
	}
}

//菜单级数对应的所有名称+文件名
macro ShowGroupMenu(curHead, grFile, isShow, bft)
{
	//_TempHeadF10(hbuf)
	mFile = getNodePath(0) # "\\group\\Macro_Group_@grFile@_@bft@.h"
	
	if(curHead == "")
	{
		mKey = "head:"
	}
	else
	{
		mKey = "item:" # curHead # ","
	}
	mBuf = OpenCache(mFile)
	mSel = SearchInBuf(mBuf, mKey, 0, 0, FALSE, FALSE, FALSE)
	menuMsg = ""
	index = 0

	while (mSel != "")
	{
		index = index + 1
		line = GetBufLine(mBuf, mSel.lnFirst )
		ilen = strlen(line)
		
		ichFile = SplitMacro(line, ",", 0, ilen)
		curItem   = strmid(line, ichFile+1, ilen)
		indexStr = GetKeyStr(index)
		menuMsg = menuMsg # "@indexStr@. @curItem@" # CharFromKey(13)
		
		mSel = SearchInBuf(mBuf, mKey, mSel.lnLast+1, 0, 0, 0, 0)
	}
	CloseBuf(mBuf)
	if(index > 0 && isShow)
	{
		msg(menuMsg)
	}
	return index
}

//get:key->value
macro GetGroupItem(curHead, mIndex, grFile, bft)
{
	//_TempHeadF10(hbuf)
	mFile = getNodePath(0) # "\\group\\Macro_Group_@grFile@_@bft@.h"
	
	if(curHead == "")
	{
		mKey = "head:"
	}
	else
	{
		mKey = "item:" # curHead # ","
	}
	mBuf = OpenCache(mFile)
	mSel = SearchInBuf(mBuf, mKey, 0, 0, FALSE, FALSE, FALSE)
	index = 1
	curItem = ""

	while (mSel != "")
	{
		if(index == mIndex)
		{
			line = GetBufLine(mBuf, mSel.lnFirst )
			ilen = strlen(line)
			
			ichFile = SplitMacro(line, ",", 0, ilen)
			curItem   = strmid(line, ichFile+1, ilen)
			break
		}
		
		mSel = SearchInBuf(mBuf, mKey, mSel.lnLast+1, 0, 0, 0, 0)
		index = index + 1
	}
	CloseBuf(mBuf)
	return curItem
}
macro GetGroupCountAndIndex(curHead, curMacro, grFile, bft)
{
	//_TempHeadF10(hbuf)
	mFile = getNodePath(0) # "\\group\\Macro_Group_@grFile@_@bft@.h"
	
	if(curHead == "")
	{
		mKey = "head:"
	}
	else
	{
		mKey = "item:" # curHead # ","
	}
	mBuf = OpenCache(mFile)
	mSel = SearchInBuf(mBuf, mKey, 0, 0, FALSE, FALSE, FALSE)
	index = 1
	curItem = ""
	curIndex = 0

	while (mSel != "")
	{
		line = GetBufLine(mBuf, mSel.lnFirst )
		ilen = strlen(line)
		
		ichFile = SplitMacro(line, ",", 0, ilen)
		curItem   = strmid(line, ichFile+1, ilen)
		if(curItem == curMacro)
		{
			curIndex = index
			//break
		}
		
		mSel = SearchInBuf(mBuf, mKey, mSel.lnLast+1, 0, 0, 0, 0)
		index = index + 1
	}
	CloseBuf(mBuf)
	return (curIndex*100 + index-1) //index-1是总数
}

//get:value->key
macro GetGroupHead(curItem, grFile, bft)
{
	//_TempHeadF10(hbuf)
	mFile = getNodePath(0) # "\\group\\Macro_Group_@grFile@_@bft@.h"
	
	mBuf = OpenCache(mFile)
	mSel = SearchInBuf(mBuf, curItem, 0, 0, FALSE, FALSE, FALSE)
	//item:calc,mmicalc_main.c
	curHead = ""
	if (mSel != "")
	{
		//menu2:tool-a1,sbd_f3.em
		line = GetBufLine(mBuf, mSel.lnFirst )
		ilen = strlen(line)
		
		ichLv1 = SplitMacro(line, ":", 0, ilen)		
		//iLv   = strmid(line, 0, ichLv1) //"menu"
		
		ichLv2 = SplitMacro(line, ",", 0, ilen)
		curHead    = strmid(line, ichLv1 + 1, ichLv2) //"calc"
	}
	CloseBuf(mBuf)
	return curHead
}

//find key from mk group
macro FindKeyFromGroup(hbuf, word, bft)
{
	hbufRule = OpenCache(getNodePath(0) # "\\group\\Macro_Group_Make_@bft@.h")
	ret = ""
	
	len = strlen (word)
	left = 0
	right = 0
	while (1)
	{
		right = SplitMacro(word, "_", left, len)
		if (right == -1)
		{
			mcr = strmid(word, left, len);
		}
		else if (right >= left)
		{
			mcr = strmid(word, left, right);
		}
		else
		{
			break
		}
		
		row = FindCacheWholeFile(hbufRule, "head:" # mcr # ",")
		if(row >= 0)
		{
			ret = mcr
			break
		}
		else
		{
			if (right == -1)
			{
				break
			}
			left = right + 1
			continue
		}
	}
	
	CloseBuf(hbufRule)
	return ret;
}

macro GotoMakeHead(hbuf, head)
{
	//7.select head to goto(1)
	//use rule search
	mSel = SearchInBuf(hbuf, "^#@head@", 0, 0, 0, 1, 0)
	if (mSel != "")
	{
		mSel.ichFirst = mSel.ichLim - strlen(head)
		ScrollCursor(mSel)
		return
	}
	
	//8.select head to goto(1)
	mSel = SearchInBuf(hbuf, "^# .*@head@", 0, 0, 0, 1, 0)
	if (mSel != "")
	{
		mSel.ichFirst = mSel.ichLim - strlen(head)
		ScrollCursor(mSel)
		return
	}
}
//////////////////////////////////////////////////////////////
macro NoteGroup(hbuf)
{
	//快捷键F10->sa;key=sa最多位数为2:
	count = 2;
	i = 0;
	strKey = ""
	isPreview = 0

	//1.部分索引优先跳转, 不能跳转再提示
	while(i<count)
	{
		key = GetKey()
		//不建议快捷键0-9, 错误信息中有很多[1]
	 	if(key >= 97 && key <= 97 + 26)          		//a-z
		{
			strKey = strKey # CharFromKey(key)
		}
		else if (key >= 4208 && key <= 4219)             // F1~F12,!=F10
		{
			if(key >= 4217)
			{
				strKey = strKey # "F1" # (key-4217)
			}
			else
			{
				strKey = strKey # "F" # (key-4207)
			}
		}
		else if (key >= 1048688 && key <= 1048699)       // F1~F12,!=F10
		{
			if(key >= 1048697)
			{
				strKey = strKey # "F1" # (key-1048697)
			}
			else
			{
				strKey = strKey # "F" # (key-1048687)
			}
		}
		else if (key >= 262192 && key <= 262202)       		// ctrl+0,9
		{
			strKey = strKey # "N" # (key-262192)
		}
		else if (key >= 262209 && key <= 262209 + 26 && key != 262209 + 3)       // ctrl+a,z,非d
		{
			strKey = strKey # "C" # CharFromKey(key - 262209 + 97)
		}
		else      // ctrl+d, F10, ...
		{
		 	if(i==0)
			{
				isPreview = 1
			}
			break
		}
		
		searchStr = "[" # strKey # "]"
		mSel = SearchInBuf(hbuf, searchStr, 0, 0, TRUE, FALSE, FALSE)
		if (mSel != nil)
		{
			ScrollCursor(mSel)
			return
		}
		i = i + 1
	}


	//2.索引提示
	//ctrl+D->x, Fx, Ctrl+x直接跳, 其他的用列表显示
	//其他情况, 应该只有ctrl+D->Ctrl+D, 1~9, 其他特殊符号
	if(isPreview)
	{
		NoteGroupPreview(hbuf, key)
	}
}
macro NoteGroupPreview(hbuf, key)
{
	//3.索引提示分组0~9
	mode = key - 48
	if(key == 49)
		searchStr = "\\[[a-z]+\\]"	//1		//a~zz
	else if(key == 50)
		searchStr = "\\[C[a-z]\\]"	//2		//Cz~Fz
	else if(key >= 51 && key <= 54)
	{
		mode = 51 - 48
		searchStr = "\\[[0-9\.]+\\]"	//3~6		//0-9. 隐藏标号,默认中不显示
		//searchStr = "\\[N[0-9]+\\]"	//6		//N0-9
	}
	else if(key >= 1 && key <= 10)
	{
		mode = 51 - 48
		searchStr = "\\[[0-9\.]+\\]"	  		//0-9. 特殊隐藏标号, 只能ctrl+D翻页, 最多10*40=400条
	}
	else if(key == 55)
		searchStr = "\\[F[0-9]+\\]"	//7  //F1~F12
	else if(key == 56)
		searchStr = "\\[ [a-zFNC][a-z0-9]*\\]"	//8		//空格+默认
	else if(key == 96)							//~
	{
		//显示帮助
		mStr =        "ctrl+D->~ 显示帮助" # CharFromKey(13)
		mStr = mStr # "ctrl+D->1 显示索引[a-z]+" # CharFromKey(13)
		mStr = mStr # "ctrl+D->2 显示索引[Ca-z] ctrl+a" # CharFromKey(13)
		mStr = mStr # "ctrl+D->3 显示索引[0-9.]+" # CharFromKey(13)
		mStr = mStr # "ctrl+D->4 显示索引[0-9.]+" # CharFromKey(13)
		mStr = mStr # "ctrl+D->5 显示索引[0-9.]+" # CharFromKey(13)
		mStr = mStr # "ctrl+D->6 显示索引[0-9.]+" # CharFromKey(13)
		//mStr = mStr # "ctrl+D->6 显示索引[N0-9.]+ ctrl+0" # CharFromKey(13)
		mStr = mStr # "ctrl+D->7 显示索引[F1-12]" # CharFromKey(13)
		mStr = mStr # "ctrl+D->8 显示索引[ xxx] 空格+默认" # CharFromKey(13)
		mStr = mStr # "ctrl+D->9 显示默认索引 确认加空格区分" # CharFromKey(13)
		mStr = mStr # "ctrl+D->ctrl+D 显示默认索引" # CharFromKey(13)
		msg(mStr)
		stop
	}
	else
	{
		if(mode != 9)
			mode = 0
		//3.1. 显示用数字标号
		cM = NoteGroupGetMode(hbuf, "\\[Num\\]")
		if(cM)
		{
			key = 51
			mode = key - 48
			searchStr = "\\[[0-9\.]+\\]"	//3
		}
		else
		{
			searchStr = "\\[[a-zFNC][a-z0-9]*\\]"
		}
	}
	
	//4.索引提示分组0~9 开始搜索索引
	mSel = SearchInBuf(hbuf, searchStr, 0, 0, TRUE, TRUE, FALSE)
	allKeyTxt = ""
	index = 1
	if(key >= 51 && key <= 54)
		indexMin = (key - 51)*40 + 1
	else if(key >= 1 && key <= 10)
		indexMin = (key - 1)*40 + 1
	else
		indexMin = 1
	indexMax = indexMin + 40
	
	//4.1 上一次位数, 标号1-9是否显示01~09
	nBit = ReadMode(getNumBits(0))
	if(!IsNumber (nBit))
		nBit = 1
	if(nBit == 0)
		nBit = 1

	while (mSel != "" && index < indexMax)
	{
		if(index >= indexMin)
		{
			line = GetBufLine(hbuf, mSel.lnFirst )
			indexa = FindString(line, "[")
			ch = strmid(line, indexa + 1, indexa + 2)
			if(mode == 0 && (ch == "F" || ch == "N" || ch == "C"))
			{
				allKeyTxt = allKeyTxt # "-" #  "." # line # CharFromKey(13)
				indexMax = indexMax - 1
			}
			else if(mode == 3)
			{
				line = strmid(line, indexa, strlen(line))
				//allKeyTxt = allKeyTxt # GetKeyStr(index) # "."  # " " # line # CharFromKey(13)
				numStr = (index-indexMin+1)
				if(numStr < 10)
				{
					numStr = "00" # numStr
					numStr = strmid(numStr, strlen(numStr)- nBit, strlen(numStr))
				}
				allKeyTxt = allKeyTxt # numStr # "."  # " " # line # CharFromKey(13)
				index = index + 1
			}
			else
			{
				//allKeyTxt = allKeyTxt # GetKeyStr(index) # "." # line # CharFromKey(13)
				numStr = (index-indexMin+1)
				if(numStr < 10)
				{
					numStr = "00" # numStr
					numStr = strmid(numStr, strlen(numStr)- nBit, strlen(numStr))
				}
				allKeyTxt = allKeyTxt # numStr # "." # line # CharFromKey(13)
				index = index + 1
			}
		}
		else
		{
			index = index + 1
		}
		mSel = SearchInBuf(hbuf, searchStr, mSel.lnLast+1, 0, TRUE, TRUE, FALSE)
	}
	//4.索引提示分组0~9 显示索引
	if(mode == 9)
	{
		//替换掉索引 [x]类型变成[ x]类型, 加空格
		newTxt = allKeyTxt
		if(newTxt == "")
			newTxt = "无"
		newTxt = "原文件中的[],  与索引冲突,按确认加上空格区分:" # CharFromKey(13) # CharFromKey(13) # newTxt
		msg(newTxt)
		NoteGroupDelete(hbuf, searchStr)
		stop
	}
	else if(mode == 8)
	{
		//替换掉索引 [x]类型变成[ x]类型, 加空格, 显示旧内容
		newTxt = allKeyTxt
		if(newTxt == "")
			newTxt = "无"
		newTxt = "显示加空格的[ ],  与索引冲突:" # CharFromKey(13) # CharFromKey(13) # newTxt
		msg(newTxt)
	}
	else if(allKeyTxt == "")
	{
		//无索引
		if(key == 48 + 3)
		{
			newTxt = "无索引" # CharFromKey(13)
			msg(newTxt)
		}
		else
		{
			//再搜一遍数字编号
			NoteGroupPreview(hbuf, 48 + 3)
		}
		stop
	}
	else
	{
		nTitle = ""
		if(index < 40 && key == 51)
		{
			//不够一页
			nTitle = ""
		}
		else if(key >= 51 && key <= 54)
		{
			nTitle = "当前第" # (key - 51 + 1) # "页, 下一页: ctrl+D 或 "
			if(key == 54)
			{
				nTitle = nTitle # "第一页: ctrl+D->3"
			}
			else
			{
				nTitle = nTitle # "ctrl+D->" # (key - 51 + 4)
			}
		}
		else if(key >= 1 && key <= 10)
		{
			nTitle = "当前第" # key # "页, 下一页: ctrl+D"
		}
		msg(allKeyTxt # nTitle)
	}

	
	//5.选择索引
	if(allKeyTxt != "")
	{
		SaveNumBitsMode(index - indexMin)
		if(mode == 0)
			searchStr = "\\[[a-z][a-z0-9]*\\]"
		NoteGroupGoto(hbuf, searchStr, indexMin, index - 1)
	}
}
macro NoteGroupGoto(hbuf, searchStr, indexMin, indexMax)
{
	mIndex = 0
	key = 0
	bit = indexMax - indexMin
	//2位数需求输入1~2个数
	while (bit > 0 && mIndex*10 <= indexMax)
	{
		key = GetKey()
		//输入0-9a-z, 返回0-9+26
		i = GetNumFromKey(key, 10 - 1)
		if(i >= 0)
		{
			mIndex = mIndex*10+i
		}
		else if(key == 262209 + 3) // ctrl+d
		{
			//下一页(+ 1), 编号从0开始, 页数循环 ctrl+3~6
			page = indexMin/40 + 1
			page = page + 48 + 3
			if(page > 48 + 6)
			{
				//1) 下一页: 第5页
				page = page - (48 + 6) + 4
				//2) 下一页: 第1页
				//page = 48 + 3
			}
			NoteGroupPreview(hbuf, page)
			break
		}
		bit = bit/10
	}
	//if (mIndex > index)
	//	mIndex = index
	mIndex = mIndex + indexMin - 1
	
	if (mIndex>0)
	{
		if(mode == 0)
		{
			searchStr = "\\[[a-z]+\\]"
		}
		mSel = SearchInBuf(hbuf, searchStr, 0, 0, TRUE, TRUE, FALSE)
		indexN = 1
		curItem = ""

		while (mSel != "")
		{
			if(indexN == mIndex)
			{
				break
			}
			mSel = SearchInBuf(hbuf, searchStr, mSel.lnLast+1, 0, TRUE, TRUE, FALSE)
			indexN = indexN + 1
		}
		if (mSel != "")
		{
			ScrollCursor(mSel)
		}
	}
	else
	{
		//再搜一次ctrl+a-z
		count = 2;
		i = 0;
		strKey = ""
		
		while(i<count)
		{
		 	if(key >= 97 && key <= 97 + 26)
			{
				strKey = strKey # CharFromKey(key)
			}
			else
			{
				break
			}

			searchStr = "[" # strKey # "]"
			mSel = SearchInBuf(hbuf, searchStr, 0, 0, TRUE, FALSE, FALSE)
			if (mSel != nil)
			{
				ScrollCursor(mSel)
				return
			}
			i = i + 1
			key = GetKey()
		}
	}
}
macro NoteGroupDelete(hbuf, searchStr)
{
	mSel = SearchInBuf(hbuf, searchStr, 0, 0, TRUE, TRUE, FALSE)
	index = 1
	allKeyTxt = ""

	while (mSel != "")
	{
		line = GetBufLine(hbuf, mSel.lnFirst )
		//不考虑一行2个[]
		indexa = mSel.ichFirst
		newLine = strmid(line, 0, indexa + 1) # " " # strmid(line, indexa + 1, strlen(line))
		PutBufLine(hbuf, mSel.lnFirst, newLine);
		
		mSel = SearchInBuf(hbuf, searchStr, mSel.lnLast, mSel.ichLim, TRUE, TRUE, FALSE)
	}
}
macro NoteGroupGetMode(hbuf, searchStr)
{
	//判断当前是不是标号模式: 存在[Num]
	mSel = SearchInBuf(hbuf, searchStr, 0, 0, FALSE, TRUE, FALSE)
	if (mSel != "")
		return 1
	else
		return 0
}
//////////////////////////////////////////////////////////////
macro ShowMacroGroup(mBuf)
{
	//_TempHeadF10(hbuf)
	mFile = getSavePath(0) # "\\SI\\MacroSBD\\sbd_ctrl.em"
	
	mKey = "^macro "
	mSel = SearchInBuf(mBuf, mKey, 0, 0, FALSE, TRUE, FALSE)
	menuMsg = ""
	mLen = strlen(mKey) - 1
	index = 0

	while (mSel != "")
	{
		index = index + 1
		line = GetBufLine(mBuf, mSel.lnFirst )
		ilen = strlen(line)
		
		curItem   = strmid(line, mLen, ilen)
		row = mSel.lnFirst + 1
		menuMsg = menuMsg # "@row@  @curItem@" # CharFromKey(13) # CharFromKey(13)
		
		mSel = SearchInBuf(mBuf, mKey, mSel.lnLast+1, 0, FALSE, TRUE, FALSE)
	}
	if(index > 0)
	{
		msg(menuMsg)
	}
	return index
}
macro OpenF10Test(hbuf, v)
{
	//_TempHeadF10(hbuf)
	//Tree()
	bft = getBft(2)
	if(v == ")") //from F1, no param, param is ")"
	{
		v = "F101"
	}
	else if(v == "F10") //from F10
	{
		v = "F102"
	}
	
	if(v == "F101")
	{
	}
	else if(v == "F102")
	{
		//DefaultGroup(hbuf)
		SrGroup(hbuf)
		MakeSelGroup(hbuf, bft)
	}
	else if(v == "F104")
	{
		curItem = GetGroupItem("menu3:tool-a2", 1, "Menu", bft)
		msg(curItem)
		iFcurItemile = GetGroupItem("menu3:tool-a2", 2, "Menu", bft)
		msg(curItem)
	}

}


