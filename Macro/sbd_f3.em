﻿macro SearchBackward(){	var line_count	var max_len	var sel	var isCircle	isCircle = True //是否循环搜索		hbuf = GetCurrentBuf()	hwnd = GetCurrentWnd()	if (hwnd == 0)		stop	if(!isCircle)	{		sel = MGetWndSel(hbuf)		SearchBackwardSel(hbuf, sel)	}	else	{		sel = MGetWndSel(hbuf)		row = sel.lnFirst		column = sel.ichFirst		//msg ("@row@  @column@")				SearchBackwardSel(hbuf, sel)				sel = MGetWndSel(hbuf)		row_new = sel.lnFirst		column_new = sel.ichFirst		//msg ("@row@  @column@")				if(row_new == row && column_new == column){			line_count = GetBufLineCount(hbuf)			last_line = GetBufLine(hbuf, line_count-1)			max_len = strlen(last_line)-1						sel.ichFirst = max_len			sel.ichLim = max_len			sel.lnFirst = line_count			sel.lnLast = line_count			SetWndSel(hwnd, sel)						Search_Backward		}	}}//向前查找; macro SearchBackwardSel(hbuf, sel){	if (IsSingleSelect(sel))	{		cur_line = GetBufLine(hbuf, sel.lnFirst )		if(sel.ichLim > strlen(cur_line)) //不能选换行符，会报错		{			sel.ichLim = strlen(cur_line)		}		if(sel.ichFirst == sel.ichLim)			stop		cur_sel = strmid(cur_line, sel.ichFirst, sel.ichLim)		//默认用通配符搜索, 这个选项会改变下次搜索		isSolid = FindString(cur_sel, ".")		if(isSolid != "X")		{			LoadSearchPattern("@cur_sel@", false, false, false);		}		else		{			LoadSearchPattern("@cur_sel@", false, true, false);		}			}	Search_Backward}
