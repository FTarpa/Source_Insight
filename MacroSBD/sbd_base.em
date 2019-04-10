
macro getProjectFromList(n)
{
	// 6531DA 项目路径
	if (n == 10)	{	return "E:\\SVN\\6531DA_new" 	} //第1项不能为空
	//if (n == 12)	{	return "F:\\SBD_6531_12C_DA_FCC" 	}
	
	// 6531btdialer 项目路径
	if (n == 20)	{	return "F:\\6531DA_Btdialer" 	} //第1项不能为空
	
	// 6531E 项目路径
	if (n == 30)	{	return "F:\\6531E_16A" 	}
	if (n == 31)	{	return "F:\\_SI4.0\\6531E.si4project" 	}		 //30到39逐个取非空，这里保存一个无用值
	if (n == 32)	{	return "F:\\6531G_16A_MP_W17.43.4" 	}
	if (n == 33)	{	return "F:\\_SI4.0\\6531G.si4project" 	}
	

	// soft 项目路径
	if (n == 40)	{	return "F:\\soft" 	}
	
	// 6533 项目路径
	if (n == 50)	{	return "F:\\SC6533G\\soft" 	} //其他不要设置奇数项
	if (n == 51)	{	return "E:\\SC6533G" 	} //解决源码+SI目录分开问题, SR dir 不在soft中
	
	// 7701 项目路径
	if (n == 60)	{	return "D:\\SVN\\SC7701" 	}

	// MTK 项目路径1
	if (n == 70)	{	return "F:\\6261D_KM" 	} //其他不要设置奇数项
	if (n == 71)	{	return "F:\\_SI4.0\\11CW1352MP_KM.si4project" 	}  	//解决源码+SI目录分开问题, 源码目录单独设置在前一项
	if (n == 72)	{	return "F:\\6261A_11C_V33" 	} 
	if (n == 73)	{	return "F:\\_SI4.0\\11CW1352MP_BLEPHONE61A.si4project" 	} 
	if (n == 74)	{	return "F:\\6261D_11C_V33" 	} 
	if (n == 75)	{	return "F:\\_SI4.0\6261D_11C_V33.si4project" 	} 
	
	// base -> save
	if (n == 80)	{	return "E:\\save" 	}
	
	// tmp
	if (n == 90)	{	return "X:\\NoneEmpty" 	}  //add new ...
	
	// tmp
	if (n == 100)	{	return "X:\\NoneEmpty" 	}  //add new ...
	
	// tmp
	if (n == 110)	{	return "X:\\NoneEmpty" 	}  //add new ...
	if (n == 111)	{	return "X:\\NoneEmpty" 	}  //110与112之间不能省略，暂时这样，不想改了
	if (n == 112)	{	return "X:\\NoneEmpty" 	}
	
	// python
	if (n == 120)	{	return "D:\\project\\GitHub\\myPython" 	}
	if (n == 121)	{	return "D:\\_SI4.0\\myPython.si4project" 	}

	// tmp
	if (n == 130)	{	return "X:\\NoneEmpty" 	}  //add new ...
	
	// 9820E
	if (n == 140)	{	return "F:\\9820e" 	}
	if (n == 141)	{	return "F:\\_SI4.0\\9820E_local.si4project" 	} //local code

	// tmp
	if (n == 150)	{	return "X:\\NoneEmpty" 	}  //add new ...

	//新加type同步修改笔记名称：
	// -> getBaseFileType(pathName, s)
	
	//
	return ""
}

//用固定目录，SI_base中不用添加这些文件了，只用添加.em的目录
macro getSavePath(0)		{	return "E:\\save"					}	//按F1->Q打开目录
macro getCmdPath(0)			{	return "E:\\save\\SI\\Cmd"			}	//ShellExecute目录
macro getTXTPath(0)			{	return "E:\\save\\SI\\Cmd_TXT"		}	//ShellExecute目录
macro getNodePath(0)		{	return "E:\\save\\SI\\node"			}	
macro getDesktopPath(0)		{	return "E:\\desktop"				}	//桌面，创建桌面link

//Cmd
macro getBComparePath(0)	{	return "\"C:\\Program Files\\Beyond Compare 4\\BCompare.exe\""			}
//macro getBComparePath(0)	{	return "\"C:\\Program Files (x86)\\Beyond Compare 3\\BCompare.exe\""			}

//VC
macro getVCPath(0)			{	return "C:\\Program Files (x86)\\Microsoft Visual Studio\\Common\\MSDev98\\Bin\\MSDEV.EXE"		}

//VC2008
macro getVS08Path(0)		{	return "C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\Common7\\IDE\\devenv.exe"		}

//RAR
macro getRARPath(0)			{	return "\"C:\\Program Files (x86)\\360\\360zip\\360zip.exe\""		}

macro forProjectPath(basePath)
{
	var err
	var n
	var path
	
	n = 10
	err = 0
	while (1)
	{
		path = getProjectFromList(n) //遍历路径列表
		
		if("" == path){
			if(0 == n-n/10*10 || 100 == n){
				return err
			}else{
				n = (1 + n/10)*10	//加10
				continue
			}
		}else{
			if(basePath == path){
				return n
			}else{
				n = n + 1
				continue
			}
		}
	}
}

//目录操作
macro getCurPath(hbuf)
{
	if(IsSRFile(hbuf))
	{
		if(IsPathName(hbuf, getSavePath(0) # "\\Source Insight"))
		{
			return getSavePath(0)
		}
		else
		{
			hprj = GetCurrentProj ()
			return GetProjDir (hprj)
		}
	}
	else if(IsFileName(hbuf, "Macro_")||IsFileName(hbuf, "Simple_CTRL_"))
	{
		hprj = GetCurrentProj ()
		if(hprj>0)
		{
			projPath = GetProjDir (hprj)
			//移动F:\\xx\\SI4.0文件会使默认改为F:
			if(strlen (projPath) < 4)
			{
				return GetProjDir (hprj)
			}
			else if(strmid(projPath, strlen (projPath) - 4, strlen (projPath)) != "Base")
			{	
				return GetProjDir (hprj)
			}
		}
	}
	//获取 当前目录, 不包括文件名
	return getBaseDir(GetBufName(hbuf), 0)
}
macro getBasePath(hbuf)
{
	//获取目录 6531E:
	hprj = GetCurrentProj ()
	//pathName = GetProjName (hprj)
	proPath = GetProjDir (hprj)
	
	ret = CompareEx(proPath, getSavePath(0), 1)//left 包含 right
	if(ret == 0)
	{
		return getSavePath(0)
	}
	else
	{
		return proPath
	}
}
macro getProjectPath(pathName)
{
	//获取目录 6531E/project, 不考虑 C:
	//待改成getBaseProjectEx+"/project"
	return getBaseDir(pathName, 1)	//getProjectPath
}
macro getCurProject(pathName)
{
	//获取目录 6531E/project/SE039_XX, 考虑设置值:
	//先获取目录 6531E/project, 项目路径未设置即返回上级目录
	project = getProjectPath(pathName)
	ret = CompareEx(pathName, project, 1)//路径 包含"6531E/project"
	if(ret ==0)
	{
		//project后面的第一个DirName
		index = SplitMacro(pathName, "\\", strlen(project)+1, strlen(pathName))
		if(index<0)
		{
			msg("项目路径未设置, 请在 sbd_base.em 上添加")
			return ""
		}
		return strmid(pathName, 0, index)
	}
	else
	{
		//F1->9保存的DirName
		projectName = ReadMode(getMakeRow(0))
		if(projectName != null)
		{
			return project # "\\" # projectName
		}
	}
	return ""
}
macro getCurProjectName(pathName)
{
	//获取目录 SE039_.._F2:
	project = getProjectPath(pathName)
	ret = CompareEx(pathName, project, 1)//left 包含 right(包含6531E/project)
	if(ret ==0)
	{
		//project后面的第一个DirName
		index = SplitMacro(pathName, "\\", strlen(project)+1, strlen(pathName))
		return strmid(pathName, strlen(project)+1, index)
	}
	else
	{
		//F1->9保存的DirName
		projectName = ReadMode(getMakeRow(0))
		if(projectName != null)
		{
			return projectName
		}
	}
	return ""
}
macro getBaseType(pathName)
{
	// n == 10: 6531DA
	// n == 20: 6531DB
	// n == 30: 6531E
	// n == 40: soft
	// n == 50: 6533
	// n == 60: 7701
	// n == 70: MTK
	type = getBaseDir(pathName, 3)
	return type/10 *10
}
macro getBaseFileType(pathName, s)
{
	//s=1~5:按note文件名排序分类;
	//s=1:Macro_ALL_XXX              搜索所有宏
	//s=2:Macro_Group_Make_XXX       分组(现在用不上)
	//	  Macro_Group_Menu_XXX
	//s=3:Macro_Note_XXX             笔记 
	//s=4:Macro_Rule_Key_file_XXX    F5--跳转功能
	//s=5:si_version_XXX             F1->V--搜索版本号
	type = getBaseType(pathName)
	if(type == 10 || type == 20 || type == 30)
	{
		if((s == 1 || s == 5) && type == 10)
		{
			baseFileType = "6531D"
		}
		else if((s == 1 || s == 5) && type == 20)
		{
			baseFileType = "6531DB"
		}
		else
		{
			baseFileType = "6531E"
		}
	}
	else if(type == 40 || type == 50)
	{
		if(s == 5)
		{
			baseFileType = ""
		}
		else if((s == 3) && type == 40)
		{
			baseFileType = "RDA"
		}
		else
		{
			baseFileType = "6533"
		}
	}
	else if(type == 60)
	{
		baseFileType = "7701"
	}
	else if(type == 70)
	{
		if(s == 5)
		{
			baseFileType = ""
		}
		else
		{
			baseFileType = "MTK"
		}
	}
	else if(type == 120 || type == 130)
	{
		if(s == 3)
		{
			//baseFileType = "Python"
			baseFileType = "Pythons"  //带s用模板2
		}
		else
		{
			baseFileType = ""
		}
	}
	else if(type == 140)
	{
		if(s == 1)
		{
			baseFileType = "9820e"
		}
		else if(s == 3)	//note
		{
			//baseFileType = "9820e"
			baseFileType = "9820es"  //带s用模板2
		}
		else
		{
			baseFileType = ""
		}
	}
	else
	{
		if(s == 2 || s == 4)
		{
			baseFileType = ""
		}
		else
		{
			baseFileType = "Base"
		}
	}
	return baseFileType
}

//common
macro getBaseDir(pathName, type)
{
	//msg ("getBaseDir.@pathName@.@type@")

	nlength = strlen(pathName)
	var name
	var i
	var n
	var start
	var err

	err = -1
	i = 0		//文件名长度
	start = 0	//路径总长度
	while (1)
	{
		i = start
		name = ""
		while ( i < nlength)
		{
			ch = pathName[i]
			if ("\\" == "@ch@")
				break
			i = i + 1
		}
		if(type == 0 || start == 0){
			if(nlength == i){	//文件在根目录下时，未找到"\\"
				i = start - 1
				break
			}
			start = i + 1
		}else if(i - start > 0){
			name = strmid(pathName, start, i)
			
			n = forProjectPath(strmid(pathName, 0, i))
			if(n == 0)
			{
				err = start - 1
				start = i + 1
				continue
			}
			else if(n-n/2*2==1) //单数为只是SI目录, 前一项为真实目录(目录分开)
			{
				n = n - 1
			}
			
			n0 = n/10*10
			
			// n == 10: 6531DA
			// n == 20: 6531btdialer
			// n == 30: 6531E
			// n == 40: soft
			// n == 50: 6533
			
			if(type==1)
			{
				//msg ("getBaseDir.@pathName@.i~@i@.n~@n@")
				if(n0==10 || n0==20 || n0==30){
					return getProjectFromList(n) # "\\project"
				}else if(n0==40 || n0==50){
					return getProjectFromList(n) # "\\target"
				}else if(n0==70){
					return getProjectFromList(n) # "\\make"
				}else{
					return getProjectFromList(n)
				}
			}
			else if(type==3)
			{
				return n
			}
		}else{
			i = err
			break
		}
	}
	if(type==3){
		return 0
	}else if(0==start)//默认位置
	{
		//return cat("F:\\SBD_6531_12C_DA", "\\project")
		return cat(getProjectFromList(10), "\\project")
	}
	else if(i > 0)
	{
		return cat(strmid(pathName, 0, i), "")
	}
	else
	{
		return ""
	}
}

