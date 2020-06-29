
基础路径设置:
basePath = Save:node\SQL
base:\\

bakPath = D:\project\bak\bak\Sql\sqlite3
bak:\\

/***********************************************************************/

//目录[Num][Ca]:
// 1. 
Save:node\SQL\project\Macro_file_Name.h \[1.1\] geren
Save:node\SQL\project\Macro_file_Name.h \[1.2\] code
Save:node\SQL\project\Macro_file_Name.h \[1.3\] pinyin
Save:node\SQL\project\Macro_file_Name.h \[1.4\] pipei
Save:node\SQL\project\Macro_file_Name.h \[1.5\] g_super-------拆分
Save:node\SQL\project\Macro_file_Name.h \[1.6\] 
Save:node\SQL\project\Macro_file_Name.h \[1.7\] 
Save:node\SQL\project\Macro_file_Name.h \[1.8\] 
Save:node\SQL\project\Macro_file_Name.h \[1.9\] 
Save:node\SQL\project\Macro_file_Name.h \[1.10\] 
Save:node\SQL\project\Macro_file_Name.h \[1.11\] 
Save:node\SQL\project\Macro_file_Name.h \[1.12\] 




[1.1] geren
// 1) 创建表
bak:tbl_create\name_geren_create.py
python_w bak:tbl_create\name_geren_create.py

// 2) 向csv导出
bak:tbl_export\name_geren_write.py
python_w bak:tbl_import\name_geren_write.py

// geren old-utf8
//   导出到geren_2，避免覆盖 (现在已弃用)
bak:tbl_export\name_gerenOld_write.py
python_w bak:tbl_export\name_gerenOld_write.py

// 3) 从csv导入
//   用这个批处理，会补全编码
bak:tbl_import\name_geren_read.py
python_w bak:tbl_import\name_geren_read.py


// 输出
bak:\\
bak:output.csv



[1.2] code
// 1) 创建表
bak:tbl_create\name_code_create.py
python_w bak:tbl_create\name_code_create.py

// 2) 向csv导出
// code-utf8
bak:tbl_export\name_code_write.py
python_w bak:tbl_export\name_code_write.py

// code old-utf8
bak:tbl_export\name_codeOld_write.py
python_w bak:tbl_export\name_codeOld_write.py

// 3) 从csv导入
//   中文只能用csv-utf8格式?
bak:tbl_import\name_code_read.py
python_w bak:tbl_import\name_code_read.py




[1.3] pinyin
// 1) 创建表
bak:tbl_create\name_pinyin_create.py
python_w bak:tbl_create\name_pinyin_create.py

// 2) 向csv导出
// pinyin-utf8
bak:tbl_export\name_pinyin_write.py
python_w bak:tbl_export\name_code_write.py

// pinyin old-utf8
bak:tbl_export\name_pinyinOld_write.py
python_w bak:tbl_export\name_pinyinOld_write.py

// 3) 从csv导入
bak:tbl_import\name_pinyin_read.py
python_w bak:tbl_import\name_pinyin_read.py



[1.4] pipei
// 1) 创建表
//   不要主键
bak:tbl_create\name_pipei_create.py
python_w bak:tbl_create\name_pipei_create.py

// 2) 向csv导出
// pipei-utf8
bak:tbl_export\name_pipei_write.py
python_w bak:tbl_export\name_code_write.py
// pipei old-utf8
bak:tbl_export\name_pipeiOld_write.py
python_w bak:tbl_export\name_pipeiOld_write.py

// 3) 从csv导入
bak:tbl_import\name_pipei_read.py
python_w bak:tbl_import\name_pipei_read.py



[1.5] g_super
// 1) 创建表
bak:tbl_create\name_g_super_create.py
python_w bak:tbl_create\name_g_super_create.py

// 2) 向csv导出
bak:tbl_export\name_g_super_write.py
python_w bak:tbl_import\name_g_super_write.py

// 3) 从csv导入
//   用这个批处理，会补全编码
bak:tbl_import\name_g_super_read.py
python_w bak:tbl_import\name_g_super_read.py


// 输出
bak:csv\
bak:output.csv


[1.6] 




[1.7] 




[1.8] 




[1.9] 




[1.10] 



[1.11] 




[1.12] 




[1.13] 




[1.14] 




[1.15] 



