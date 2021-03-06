
基础路径设置:
basePath = Save:node\SQL
base:\\
xiaoshuoPath = Save:node\\Pythons\py_test\xiaoshuo
xiaoshuo:\\


/***********************************************************************/


//目录[Num][Ca]:
//1. 导入
Save:node\SQL\project\Macro_file_Word.h \[1.1\] 创建新表
Save:node\SQL\project\Macro_file_Word.h \[1.2\] 导入新表
Save:node\SQL\project\Macro_file_Word.h \[1.3\] 导入新表--参数说明
//	dict 类
Save:node\SQL\project\Macro_file_Word.h \[1.4\] 导入 word--sql
Save:node\SQL\project\Macro_file_Word.h \[1.5\] 导入 cfg--sql
Save:node\SQL\project\Macro_file_Word.h \[1.6\] 导入 style--sql
Save:node\SQL\project\Macro_file_Word.h \[1.7\] 统计 style
Save:node\SQL\project\Macro_file_Word.h \[1.8\] 整理 conv--sql
Save:node\SQL\project\Macro_file_Word.h \[1.9\] 更新 word
Save:node\SQL\project\Macro_file_Word.h \[1.10\] 验证 style
//	sentence_base_xx 类
Save:node\SQL\project\Macro_file_Word.h \[1.11\] 导入句子
Save:node\SQL\project\Macro_file_Word.h \[1.12\] 临时表--删除重复
Save:node\SQL\project\Macro_file_Word.h \[1.13\] 整理--句子列表 sentence
Save:node\SQL\project\Macro_file_Word.h \[1.14\] 整理--词性列表 sentence_cx
Save:node\SQL\project\Macro_file_Word.h \[1.15\] 整理--句型列表 sentence_list
Save:node\SQL\project\Macro_file_Word.h \[1.16\] 句型 sentence_lib
Save:node\SQL\project\Macro_file_Word.h \[1.17\] 初步制作词典 tbl_base
//	tbl_vector_xx 类
Save:node\SQL\project\Macro_file_Word.h \[1.18\] 词典方向--词向--图
Save:node\SQL\project\Macro_file_Word.h \[1.19\] 解决新旧转换--交叉分类(1)--放弃
//	sentence_path_xx 类
Save:node\SQL\project\Macro_file_Word.h \[1.20\] 导入原句(1)
Save:node\SQL\project\Macro_file_Word.h \[1.21\] 导入原句(2)--统计说明
Save:node\SQL\project\Macro_file_Word.h \[1.22\] 词层公式--原
Save:node\SQL\project\Macro_file_Word.h \[1.23\] 词数公式--整理
Save:node\SQL\project\Macro_file_Word.h \[1.24\] 类型转换(1)--选择数据
Save:node\SQL\project\Macro_file_Word.h \[1.25\] 类型转换(2)--数据权重测试
Save:node\SQL\project\Macro_file_Word.h \[1.26\] 类型转换(3)--常用类, 其他右类
Save:node\SQL\project\Macro_file_Word.h \[1.27\] 类型转换(4)--右类
Save:node\SQL\project\Macro_file_Word.h \[1.28\] 转换结果--词向
Save:node\SQL\project\Macro_file_Word.h \[1.29\] 类型转换(5)--全转换
Save:node\SQL\project\Macro_file_Word.h \[1.30\] 转换结果--全转换
Save:node\SQL\project\Macro_file_Word.h \[1.31\] 更新词性
Save:node\SQL\project\Macro_file_Word.h \[1.32\] 应用新词性
Save:node\SQL\project\Macro_file_Word.h \[1.33\] 手动查找/更新词性
Save:node\SQL\project\Macro_file_Word.h \[1.34\] 
Save:node\SQL\project\Macro_file_Word.h \[1.35\] 
//2. 项目
Save:node\SQL\project\Macro_file_Word.h \[2.1\] 
Save:node\SQL\project\Macro_file_Word.h \[2.2\] 
Save:node\SQL\project\Macro_file_Word.h \[2.3\] 
Save:node\SQL\project\Macro_file_Word.h \[2.4\] 
Save:node\SQL\project\Macro_file_Word.h \[2.5\]
Save:node\SQL\project\Macro_file_Word.h \[2.6\] 未定
Save:node\SQL\project\Macro_file_Word.h \[2.7\] 快速处理--导入新小说
Save:node\SQL\project\Macro_file_Word.h \[2.8\] 快速处理--词魂--自动
Save:node\SQL\project\Macro_file_Word.h \[2.9\]








// 其他文档：
// 字符编码问题
Save:node\SQL\Macro_SQL_Install.h \[3.1\] 安装 pymysql:
// 其他标号
Save:node\Test\Macro_Tmp_Node_Num.h \[1.1\]
//SQL 练习
Save:node\SQL\Macro_SQL_test.h \[1.01\] 程序01：






[1.1] 创建新表
//创建数据库表:
mysql\data_utf8_create.py
python mysql\data_utf8_create.py
python_w mysql\data_utf8_create.py

	

[1.2] 导入新表
//	用工具--编码调整不过来--忽略。
//	用命令导入:
//	  删除重新导入:
DELETE FROM data_utf8_csv;
//	  导入不带标题:
LOAD DATA LOCAL INFILE 'E:\\Desktop\\NLP\\dict_data\\data_utf8_add.csv' INTO TABLE data_utf8_csv
//	  导入带标题、set character 一次就好:
LOAD DATA LOCAL INFILE 'E:\\Desktop\\NLP\\dict_data\\data_utf8_add_title.csv' INTO TABLE data_utf8_csv FIELDS TERMINATED BY ',' IGNORE 1 LINES;
SET character_set_client = utf8;
SET character_set_results = utf8;
//		或
LOAD DATA LOCAL INFILE 'E:\\Desktop\\NLP\\dict_data\\data_utf8_add_title.csv' INTO TABLE data_utf8_csv CHARACTER SET utf8 FIELDS TERMINATED BY ',' IGNORE 1 LINES;
// 第2次打开数据库只要这句就行:
SET character_set_results = utf8;


[1.3] 导入新表--参数说明
//1>去掉引号
//	"1669"	"Jim"	"Smith"
//	use:
//	fields enclosed by '"'
load data infile "/data/mysql/e.sql" into table e fields enclosed by '"'; 


//2>分隔符
//	游标,3,dc,aba
//	use:
//	fields terminated by ','
LOAD DATA LOCAL INFILE 'E:\\Desktop\\NLP\\dict_data\\data_utf8_add.csv' INTO TABLE data_utf8_csv FIELDS TERMINATED BY ',';


//3>去掉标题
//	DTXT,DCNT,DCXO,DCXN
//	use:
//	IGNORE 1 LINES;
LOAD DATA LOCAL INFILE 'E:\\Desktop\\NLP\\dict_data\\data_utf8_add.csv' INTO TABLE data_utf8_csv FIELDS TERMINATED BY ',' IGNORE 1 LINES;


//4>字符集
//	use:
//	CHARACTER SET utf8
LOAD DATA LOCAL INFILE 'E:\\Desktop\\NLP\\dict_data\\data_utf8_add.csv' INTO TABLE data_utf8_csv CHARACTER SET utf8 FIELDS TERMINATED BY ',' IGNORE 1 LINES;


[1.4] 导入 word--sql
//       dict_utf8_all
//创建数据库表:
mysql\word_utf8_create.py
python mysql\word_utf8_create.py
python_w mysql\word_utf8_create.py

//导入新表
//	  删除重新导入:
DELETE FROM dict_utf8_all;
//	  导入不带标题、set character 一次就好:
LOAD DATA LOCAL INFILE 'E:\\Desktop\\NLP\\dict_data\\dict_utf8_all.csv'  INTO TABLE dict_utf8_all FIELDS TERMINATED BY ' ';
SET character_set_client = utf8;
SET character_set_results = utf8;




[1.5] 导入 cfg--sql
//1> 旧词性表:
//       dict_cfg_obase
//  创建数据库表:
mysql\cfg_obase_utf8_create.py
python_w mysql\cfg_obase_utf8_create.py
//	  删除重新导入:
//	  导入不带标题、set character 一次就好:
DELETE FROM dict_cfg_obase;
LOAD DATA LOCAL INFILE 'E:\\Desktop\\NLP\\dict_data\\dict_cfg_obase.csv'  INTO TABLE dict_cfg_obase FIELDS TERMINATED BY ',';


//2> 旧词性表--全:
//       dict_cfg_obase_full
mysql\cfg_obase_full_utf8_create.py
python_w mysql\cfg_obase_full_utf8_create.py
//	  删除重新导入:
//	  导入不带标题、set character 一次就好:
DELETE FROM dict_cfg_obase_full;
LOAD DATA LOCAL INFILE 'E:\\Desktop\\NLP\\dict_data\\dict_cfg_obase_full.csv'  INTO TABLE dict_cfg_obase_full FIELDS TERMINATED BY ',';


//3> 新词性表:
//       dict_cfg_nbase
mysql\cfg_nbase_utf8_create.py
python_w mysql\cfg_nbase_utf8_create.py
//	  删除重新导入:
//	  导入不带标题、set character 一次就好:
DELETE FROM dict_cfg_nbase;
LOAD DATA LOCAL INFILE 'E:\\Desktop\\NLP\\dict_data\\dict_cfg_nbase.csv'  INTO TABLE dict_cfg_nbase FIELDS TERMINATED BY ',';


//4> 数据转换表:  (先不弄, 后面用测试数据整理出来)
//       dict_cfg_conv


[1.6] 导入 style--sql
//1> 添加词性测试数据:
//       dict_cfg_style
mysql\cfg_style_utf8_create.py
python_w mysql\cfg_style_utf8_create.py
//	  删除重新导入:
//	  导入不带标题、set character 一次就好:
DELETE FROM dict_cfg_style;
LOAD DATA LOCAL INFILE 'E:\\Desktop\\NLP\\dict_data\\dict_cfg_style.csv'  INTO TABLE dict_cfg_style FIELDS TERMINATED BY ',';
//	  太慢了要备份:


//2> 更新词性说明:
# 更新 "TESTNN"
UPDATE `dict_cfg_style` a SET `TESTNN`=(SELECT `CXNT` FROM `dict_cfg_nbase` b WHERE b.`CXNI` = a.`TESTN`);  
# 清空 "TESTO"
UPDATE `dict_cfg_style` a SET `TESTO`=""; 
# 更新 "TESTO"
UPDATE `dict_cfg_style` a SET `TESTO`=(SELECT `DCXO` FROM `dict_utf8_all` b WHERE b.`DTXT` = a.`TESTS`);  
# 清空 "TESTON"
UPDATE `dict_cfg_style` a SET `TESTON`=""; 
# 更新 "TESTO"
UPDATE `dict_cfg_style` a SET `TESTON`=(SELECT `CXO` FROM `dict_cfg_obase_full` b WHERE b.`CXOS` = a.`TESTO`);  


[1.7] 统计 style
//1> 统计新->旧词性(full):
//       dict_count_cx_old_full
mysql\count_old_full_utf8_create.py
python_w mysql\count_old_full_utf8_create.py
//	  删除重新导入:
//	  导入不带标题、set character 一次就好:
DELETE FROM dict_count_cx_old_full;
LOAD DATA LOCAL INFILE 'E:\\Desktop\\NLP\\dict_data\\dict_count_cx_old_full.csv'  INTO TABLE dict_count_cx_old_full FIELDS TERMINATED BY ',';
//表结构错误, 备份还原见7>,暂时不改 dict_count_cx_old_full.csv
UPDATE `dict_count_cx_old_full` a SET `CTI`=(SELECT `CXOI` FROM `dict_cfg_obase_full` b WHERE b.`CXI` = a.`CTO`);  
//	  更新 "CT"
UPDATE `dict_count_cx_old_full` a SET `CT`=0, `CTS`=0; 
UPDATE `dict_count_cx_old_full` a SET `CTS`=(SELECT `CXOS` FROM `dict_cfg_obase_full` b WHERE b.`CXI` = a.`CTO`);  
UPDATE `dict_count_cx_old_full` a SET `CT`=(SELECT count(*) FROM `dict_cfg_style` b WHERE b.`TESTO` = a.`CTS` and b.`TESTN` = a.`CTN`);


//2> 统计新->旧词性:
//       dict_count_cx_old
mysql\count_old_utf8_create.py
python_w mysql\count_old_utf8_create.py
//	  删除重新导入:
//	  导入不带标题、set character 一次就好:
DELETE FROM dict_count_cx_old;
LOAD DATA LOCAL INFILE 'E:\\Desktop\\NLP\\dict_data\\dict_count_cx_old.csv'  INTO TABLE dict_count_cx_old FIELDS TERMINATED BY ',';
//表结构错误, 备份还原见7>,暂时不改 dict_count_cx_old.csv
//	  更新 "CT" "CTS", 注意第1条0改1
UPDATE `dict_count_cx_old` a SET `CT`=0; 
UPDATE `dict_count_cx_old` a SET `CTS`=0; 
UPDATE `dict_count_cx_old` a SET `CTS`=(SELECT `CXO` FROM `dict_cfg_obase` b WHERE b.`CXIO` = a.`CTO`);  
UPDATE `dict_count_cx_old` a SET `CT`=(SELECT SUM(`CT`) FROM `dict_count_cx_old_full` b WHERE b.`CTN` = a.`CTN` and b.`CTI` = a.`CTO`);
//	  验证数据
SELECT `CT` FROM `dict_count_cx_old_full` WHERE `CTN` = 1 and `CTI` = 1; 
//SELECT SUM(`CT`) FROM `dict_count_cx_old_full` WHERE `CTN` = 1 AND `CTI` = 1; 
//SELECT FORMAT(SUM(`CT`),2) FROM `dict_count_cx_old_full` WHERE `CTN` = 1 AND `CTI` = 1; 
//	  更新 "CTOS"
UPDATE `dict_count_cx_old` a SET `CTOS`=(select  concat_ws( '_', `CXNT`, `CXNM`) FROM `dict_cfg_nbase` b WHERE b.`CXNI` = a.`CTN`);


//3> 统计旧->新词性(full):从 dict_count_cx_old_full 转过来
//       dict_count_cx_new_full
mysql\count_new_full_utf8_create.py
python_w mysql\count_new_full_utf8_create.py
//	  删除重新导入:
//	  导入不带标题、set character 一次就好:
DELETE FROM dict_count_cx_new_full;
LOAD DATA LOCAL INFILE 'E:\\Desktop\\NLP\\dict_data\\dict_count_cx_new_full.csv'  INTO TABLE dict_count_cx_new_full FIELDS TERMINATED BY ',';
//	  更新 "CT"
UPDATE `dict_count_cx_new_full` a SET `CTS`=0; 
UPDATE `dict_count_cx_new_full` a SET `CTS`=(SELECT `CTS` FROM `dict_count_cx_old_full` b WHERE b.`CTO` = a.`CTO` and b.`CTN` = a.`CTN`);  
UPDATE `dict_count_cx_new_full` a SET `CT`=0; 
UPDATE `dict_count_cx_new_full` a SET `CT`=(SELECT `CT` FROM `dict_count_cx_old_full` b WHERE b.`CTO` = a.`CTO` and b.`CTN` = a.`CTN`);  


//4> 统计旧->新词性(full): 最大值
//       dict_count_cx_new_max
mysql\count_new_max_utf8_create.py
python_w mysql\count_new_max_utf8_create.py
//	  查看需要哪些数据
SELECT  * FROM `dict_count_cx_new_full` GROUP BY `CTO`; 
SELECT `CTO`,`CTN`,`CTS`,MAX(`CT`) FROM `dict_count_cx_new_full` GROUP BY `CTO`; 
//	  导入初始数据:
INSERT INTO dict_count_cx_new_max SELECT `CTO`,`CTN`,`CTS`,MAX(`CT`) FROM `dict_count_cx_new_full` GROUP BY `CTO`; 
//	  查看最大列表, 带重复
SELECT * FROM `dict_count_cx_new_max` as a left join `dict_count_cx_new_full` as b on  b.`CTO` = a.`CTO` and b.`CT` = a.`CTMAX`;
//	  查看最大列表, 不带重复
SELECT * FROM `dict_count_cx_new_max` AS a LEFT JOIN `dict_count_cx_new_full` AS b ON  b.`CTO` = a.`CTO` AND b.`CT` = a.`CTMAX` 
		GROUP BY a.`CTO`,a.`CTMAX`;
//	  更新 "CTNUM" 
UPDATE `dict_count_cx_new_max` a SET `CTNUM`=0; 
UPDATE `dict_count_cx_new_max` a SET `CTNUM`=(SELECT `CTN` FROM `dict_count_cx_new_full` b WHERE b.`CTO` = a.`CTO` and b.`CT` = a.`CTMAX` LIMIT 1); 
//	  更新 "CTMAX" = 0
UPDATE `dict_count_cx_new_max` a SET `CTNUM`=0 WHERE `CTMAX` = "0"; 


//5> 统计旧->新词性:
//       dict_count_cx_new
mysql\count_new_utf8_create.py
python_w mysql\count_new_utf8_create.py
//	  更新 "CT" "CTS", 注意第1条0改1
DELETE FROM dict_count_cx_new;
INSERT INTO dict_count_cx_new select `CTO`,`CTN`,`CTS`,`CTOS`,`CT` FROM dict_count_cx_old  ORDER BY `CTO` ,`CTN` ;



[1.8] 整理   conv--sql
//       dict_cfg_conv
mysql\cfg_conv_utf8_create.py
python_w mysql\cfg_conv_utf8_create.py
//	  查看初始数据:
SELECT `CXI`,`CXOS`,`CXO`,`CTNUM`,0 FROM dict_cfg_obase_full AS a LEFT JOIN `dict_count_cx_new_max` AS b ON  a.`CXI` = b.`CTO`;
//	  导入初始数据:
DELETE FROM dict_cfg_conv;
INSERT INTO dict_cfg_conv SELECT `CXI`,`CXOS`,`CXO`,`CTNUM`,0 FROM dict_cfg_obase_full AS a LEFT JOIN `dict_count_cx_new_max` AS b ON  a.`CXI` = b.`CTO`;
//	  更新 "CTNS" 
UPDATE `dict_cfg_conv` a SET `CTNS`=0; 
UPDATE `dict_cfg_conv` a SET `CTNS`=(SELECT concat_ws( '_', `CXNT`, `CXNM`) FROM `dict_cfg_nbase` b WHERE b.`CXNI` = a.`CTNI`); 
UPDATE `dict_cfg_conv` a SET `CTNS`=0 WHERE `CTNI` = 0; 


//1>  导出conv, 手动补充就算了:
select * from dict_cfg_conv into outfile 'E:\\Desktop\\NLP\\dict_data\\outfile\\dict_cfg_conv.csv' fields terminated by ',';
//个别词性检查也算了，不走精准路线




[1.9] 更新 word
//		 dict_utf8_all
//	  更新 "DCXN" 
UPDATE `dict_utf8_all` a SET `DCXN`=0; 
UPDATE `dict_utf8_all` a SET `DCXN`=(SELECT `CTNI` FROM `dict_cfg_conv` b WHERE b.`CTO` = a.`DCXO`); 

//1>  汇总:
//count: 349046
select count(*) from dict_utf8_all;
//count: 290548+58498
//SELECT COUNT(*) FROM dict_utf8_all WHERE `DCXN` IS NOT NULL;
SELECT COUNT(*) FROM dict_utf8_all WHERE `DCXN` IS NULL;
//select * FROM dict_utf8_all WHERE `DCXN` IS NULL;

//2>  补充分类: i, l u o zg
UPDATE `dict_utf8_all` a SET `DCXN`=26 WHERE `DCXO`="i" or `DCXO`="l"  or `DCXO`="zg" ; 
#     名字
UPDATE `dict_utf8_all` a SET `DCXN`=8 WHERE `DCXO`="nrt" or `DCXO`="nrfg"; 
#     动词
UPDATE `dict_utf8_all` a SET `DCXN`=3 WHERE `DCXO`="vq"; 
UPDATE `dict_utf8_all` a SET `DCXN`=10 WHERE `DCXO`="h"; 
#     数字
UPDATE `dict_utf8_all` a SET `DCXN`=5 WHERE `DCXO`="j"; 
UPDATE `dict_utf8_all` a SET `DCXN`=5 WHERE `DCXO`="mg"; 
#     尾词
UPDATE `dict_utf8_all` a SET `DCXN`=11 WHERE `DCXO`="u" or `DCXO`="y" or `DCXO`="e"; 
UPDATE `dict_utf8_all` a SET `DCXN`=11 WHERE `DCXO`="ul" or `DCXO`="ug"; 
#     声音
UPDATE `dict_utf8_all` a SET `DCXN`=11 WHERE `DCXO`="o"; 
#     部词
UPDATE `dict_utf8_all` a SET `DCXN`=12 WHERE `DCXO`="k" or `DCXO`="dg"; 
#     个词:df不要;
UPDATE `dict_utf8_all` a SET `DCXN`=13 WHERE `DCXO`="df"; 
#     个字:g x
UPDATE `dict_utf8_all` a SET `DCXN`=26 WHERE `DCXO`="g" or `DCXO`="x"; 
#     特殊词:地
UPDATE `dict_utf8_all` a SET `DCXN`=11 WHERE `DCXO`="uv" or `DCXO`="uj" or `DCXO`="ud" or `DCXO`="uz"; 

//3>  单项查询 ul
select * FROM dict_utf8_all WHERE `DCXO`="ul"; 



[1.10] 验证 style
//1> 添加词性测试数据:
//       dict_cfg_style
mysql\cfg_style_utf8_create.py
python_w mysql\cfg_style_utf8_create.py
//	  太慢了要备份:
//	  更新 "QN" = 0
UPDATE `dict_cfg_style` a SET `QN`=0; 
UPDATE `dict_cfg_style` a SET `QN`=(SELECT `DCXN` FROM `dict_utf8_all` b WHERE b.`DTXT` = a.`TESTS`); 


//2> style 表--备份(临时用):
//       dict_cfg_style_bak


//3> 写回主表, 建一个临时更新表:
//       dict_cfg_style_diff
mysql\cfg_style_diff_utf8_create.py
python_w mysql\cfg_style_diff_utf8_create.py
//更新哪些数据
INSERT INTO dict_cfg_style_diff select * FROM dict_cfg_style WHERE `TESTN`!= `QN`;
//测试一条数据更新： "语文"=6
//select * FROM dict_utf8_all WHERE `DTXT`="语文";
//修改一条数据： =6
//UPDATE `dict_utf8_all` a SET `DCXN`=6 WHERE  `DTXT`="语文";
//UPDATE `dict_utf8_all` a SET `DCXN`=(SELECT if(count(`TESTN`)>0,`TESTN`,`DCXN`) FROM `dict_cfg_style_diff` b WHERE b.`TESTS`= "语文") WHERE  `DTXT`="语文";
//写回主表：
UPDATE `dict_utf8_all` a SET `DCXN`=(SELECT if(count(`TESTN`)>0,`TESTN`,`DCXN`) FROM `dict_cfg_style_diff` b WHERE b.`TESTS`= a.`DTXT`);
//验证是否改到:
select * FROM dict_utf8_all WHERE `DTXT`="作家";





[1.11] 导入句子
//  测试
//       sentence_base_test
mysql\sentence_base_test_utf8_create.py
python_w mysql\sentence_base_test_utf8_create.py
//	  查看初始数据:
SELECT `CXI`,`CXOS`,`CXO`,`CTNUM`,0 FROM dict_cfg_obase_full AS a LEFT JOIN `dict_count_cx_new_max` AS b ON  a.`CXI` = b.`CTO`;
//	  导入初始数据:
INSERT INTO sentence_base_test(CCOUNT,SNUM, 
         CHR1, CHR2, CHR3, CHR4, CHR5, CHR6, CHR7, CHR8, 
         CHR9, CHR10, CHR11, CHR12, CHR13, CHR14, CHR15)
         VALUES (4, 3, 
         '游', '标', '', '', '' ,'', '', '', 
         '', '', '', '', '' ,'', '')
         
//分词测试
//fx test
xiaoshuo\test_fc.py
python_t xiaoshuo\test_fc.py
//fx2 test 空
//xiaoshuo\test_fc2.py
//python_t xiaoshuo\test_fc2.py



[1.12] 临时表--删除重复
//       tmp_delete_repeat
mysql\tmp_delete_repeat_utf8_create.py
python_w mysql\tmp_delete_repeat_utf8_create.py
//       DELETE表自增不从1开始, 还是要重建表
DELETE FROM tmp_delete_repeat;
//       INSERT tmp
INSERT INTO tmp_delete_repeat (NID,SID,COUNT) VALUES(1,'a',3);
//       INSERT
INSERT INTO tmp_delete_repeat (NID,SID,COUNT) select 0, DTXT,count(*) as count from dict_utf8_all group by DTXT having count>1;
//       select
SELECT a.* FROM dict_utf8_all AS a RIGHT JOIN `tmp_delete_repeat` AS b ON  a.`DTXT` = b.`SID`;
//       select bak, bak表无存在(这是sql server中的用法, 不支持)
//DROP TABLE IF EXISTS tmp_delete_bak;
//SELECT a.* into tmp_delete_bak FROM dict_utf8_all AS a RIGHT JOIN `tmp_delete_repeat` AS b ON  a.`DTXT` = b.`SID`
//       select bak, 
Create table tmp_delete_bak (SELECT a.* FROM dict_utf8_all AS a RIGHT JOIN `tmp_delete_repeat` AS b ON  a.`DTXT` = b.`SID`);
//       DELETE 
DELETE FROM dict_utf8_all where DTXT in (SELECT SID FROM tmp_delete_repeat);
INSERT INTO dict_utf8_all (NID,SID,COUNT) select 0, DTXT,count(*) as count from dict_utf8_all group by DTXT having count>1;


//另外建表--添加主键，再删除
DELETE FROM 表名 WHERE ID IN ( SELECT * FROM (SELECT MAX(ID) FROM 表名 WHERE ... GROUP BY MSG HAVING COUNT(MSG) > 1) 	AS b); 

DELETE FROM user WHERE wxid IN ( SELECT * FROM (SELECT wxid FROM user GROUP BY wxid HAVING COUNT(wxid) &gt; 1) AS b) 
	AND ID NOT IN (SELECT * FROM (SELECT MIN(ID) FROM user GROUP BY wxid HAVING COUNT(wxid) &gt; 1) AS c)

//-- 思路：prefix_article自身连接，根据相同的aid匹配，然后根据主键id过滤， 形成并列的and条件，删除即可
delete a1 from prefix_article a1, prefix_article a2 where a1.aid = a2.aid and a1.id > a2.id;
//-- 注意这个小于号也是可以的
delete a1 from prefix_article a1, prefix_article a2 where a1.aid = a2.aid and a1.id < a2.id;

//-- sql distinct 语法
select count (distinct aid) from article;




[1.13] 整理--句子列表 sentence
//1) 创建句子表 test
//		 sentence_base_test
mysql\sentence_base_test_utf8_create.py
python_w mysql\sentence_base_test_utf8_create.py
//2) 数据库插入操作 test 100条数据
//		 sentence_base_test
mysql\sentence_base_test_utf8_insert.py
python_w mysql\sentence_base_test_utf8_insert.py
//3) 数据库插入操作 原始文本--用于直观验证
//		 sentence_base_all
mysql\sentence_base_all_utf8_create.py
python_w mysql\sentence_base_all_utf8_create.py
//	 不导了，用拼接
DELETE FROM sentence_base_all;
INSERT INTO sentence_base_all(CID, CCOUNT, SNUM) SELECT `CID`, `CCOUNT`, `SNUM` FROM sentence_base_test; 
UPDATE `sentence_base_all` a SET `PSTR`=(SELECT concat_ws( '', `CHR1`, `CHR2`, `CHR3`, `CHR4`, `CHR5`, `CHR6`, `CHR7`, 
	`CHR8`, `CHR9`, `CHR10`, `CHR11`, `CHR12`, `CHR13`, `CHR14`, `CHR15`) FROM sentence_base_test b where b.CID=a.CID );



[1.14] 整理数据--词性列表 sentence_cx
//添加自增列
sql_sp\bak_alter_tbl.py  sentence_cx

//1) 创建个词--旧词性表, 表结构差不多 test
DROP TABLE IF EXISTS sentence_cx_old_test;
//       sentence_cx_old_test
mysql\sentence_cx_old_test_utf8_create.py
python_w mysql\sentence_cx_old_test_utf8_create.py
//	  导入 "CID" 
DELETE FROM sentence_cx_old_test;
INSERT INTO sentence_cx_old_test SELECT `CID`, `CCOUNT`, `SNUM`, "", "", "", "", "", "", "", "", "", "", "", "", "", "", "" FROM sentence_base_test;
//	  更新 "CX"
sql_sp\sentence_cx_old_test.py



//2) 修改主键, 删除重复步骤略(见mysql4.12)
sql_sp\bak_alter_tbl.py  dict_utf8_all


//3) 创建个词--新词性表, 表结构差不多 test
//		 sentence_cx_new_test
mysql\sentence_cx_new_test_utf8_create.py
python_w mysql\sentence_cx_new_test_utf8_create.py
//	  导入 "CID" 
DELETE FROM sentence_cx_new_test;
INSERT INTO sentence_cx_new_test SELECT `CID`, `CCOUNT`, `SNUM`, "", "", "", "", "", "", "", "", "", "", "", "", "", "", "" FROM sentence_base_test;
//	  更新 "CX"
sql_sp\sentence_cx_new_test.py



[1.15] 整理--句型列表 sentence_list
//1) 创建句型表--new test
//       sentence_list_new_test
mysql\sentence_list_new_test_utf8_create.py
python_w mysql\sentence_list_new_test_utf8_create.py
//	  导入 "CID" 
DELETE FROM sentence_list_new_test;
INSERT INTO sentence_list_new_test SELECT `CID`, `CCOUNT`, `SNUM`, 0, "" FROM sentence_base_test;
//	  清空
UPDATE `sentence_list_new_test` SET `SNUM`=0,`SCOUNT`=0,`SLIST`="";
//   写入list--new (有点慢了)
xiaoshuo\test_list_new.py
python_t xiaoshuo\test_list_new.py


//2) 创建句型表--old test
//		 sentence_list_old_test
mysql\sentence_list_old_test_utf8_create.py
python_w mysql\sentence_list_old_test_utf8_create.py
//	  导入 "CID" 
DELETE FROM sentence_list_old_test;
INSERT INTO sentence_list_old_test SELECT `CID`, `CCOUNT`, `SNUM`, 0, "" FROM sentence_base_test;
//	  清空
UPDATE `sentence_list_old_test` SET `SNUM`=0,`SCOUNT`=0,`SLIST`="";
//   写入list--old (有点慢了)
xiaoshuo\test_list_old.py
python_t xiaoshuo\test_list_old.py



//3) 清除test表，重新导入 
DELETE FROM sentence_base_test;
DELETE FROM sentence_cx_new_test;
DELETE FROM sentence_cx_old_test;
DELETE FROM sentence_list_new_test;
DELETE FROM sentence_list_old_test;
//重新导入 : 3.6--分词测试, 从这一步开始导

//count = 34980
select count(*) from sentence_base_test;
select count(*) from sentence_list_old_test;
select count(*) from sentence_list_new_test;
	
	
[1.16] 句型 sentence_lib
//		 sentence_lib_new
mysql\sentence_lib_new_utf8_create.py
python_w mysql\sentence_lib_new_utf8_create.py
//	  add data
SELECT *,count(*) as count FROM `sentence_list_new_test` GROUP BY `SLIST` ORDER BY count DESC; 
INSERT INTO sentence_lib_new(CCOUNT,SCOUNT,SLIST) SELECT `CCOUNT`, count(*) as count, SLIST FROM sentence_list_new_test  GROUP BY `SLIST` ORDER BY count DESC; 
//	  去掉个位
INSERT INTO sentence_lib_new(CCOUNT,SCOUNT,SLIST) SELECT `CCOUNT`, count(*) as count, SLIST FROM sentence_list_new_test where count>1 GROUP BY `SLIST` ORDER BY count DESC; 
//	  个位数什么用？
//	  更新 BSTR
UPDATE `sentence_list_old_test` SET `SNUM`=0,`SCOUNT`=0,`SLIST`="";
//	  更新 PSTR, 公式没直接改
UPDATE `sentence_lib_new` SET `PSTR`=0 ;
UPDATE `sentence_lib_new` a SET `PSTR`=(SELECT CID FROM `sentence_list_new_test` b WHERE b.`SLIST`= a.`SLIST` limit 1);
UPDATE `sentence_lib_new` a SET `BSTR`=`PSTR`;
UPDATE `sentence_lib_new` a SET `PSTR`=(SELECT PSTR FROM `sentence_base_all` b WHERE b.`CID`= a.`BSTR`);
//	  更新 BSTR, 公式没直接改
sql_sp\sentence_lib_new.py


//5) 查看lib, count最多范围4~9，5最多
SELECT *, count(*)  FROM `sentence_lib_new` GROUP BY `CCOUNT` ORDER BY CCOUNT DESC; 
SELECT * FROM `sentence_lib_new` where `CCOUNT`= 8; 


[1.17] 初步制作词典 tbl_base
//1> 词典
//       tbl_base
mysql\tbl_base_utf8_create.py
python_w mysql\tbl_base_utf8_create.py
//		 INSERT
INSERT INTO tbl_base (SNUM,CCOUNT,SCOUNT,SLIST) select SNUM,CCOUNT,SCOUNT,SLIST FROM `sentence_lib_new` where `CCOUNT`> 8;
//		 添加字段--first id
sql_sp\bak_alter_tbl.py  tbl_base

// 更新 FIRST_ID
UPDATE `tbl_base` SET `FIRST_ID`=0 ;
UPDATE `tbl_base` a SET `FIRST_ID`=(SELECT CID FROM `sentence_list_new_test` b WHERE b.`SLIST`= a.`SLIST` limit 1);


//2> 词典--向量
//       tbl_vector
mysql\tbl_vector_utf8_create.py
python_w mysql\tbl_vector_utf8_create.py
//		 INSERT, 好像只有第1次插入有效, 手加一行26，数据缺！！
DELETE FROM tbl_vector;
INSERT INTO tbl_vector (VID) select CXNI from dict_cfg_nbase;
//  导入:
mysql\tbl_vector_insert.py
python_w mysql\tbl_vector_insert.py


//3> 增加查看样例个数:
//		 tbl_base_all
DROP TABLE IF EXISTS tbl_base_all;
CREATE TABLE tbl_base_all LIKE tbl_base;
//		 INSERT
DELETE FROM tbl_base_all;
INSERT INTO tbl_base_all SELECT a.`SNUM`, a.`CCOUNT`, a.`SCOUNT`, a.`SLIST`, b.`CID` FROM tbl_base AS a
		LEFT JOIN `sentence_list_new_test` AS b ON  a.`SLIST` = b.`SLIST`;
//新旧条目: 2127->2131
SELECT count(*)  FROM `tbl_base`; 
SELECT count(*)  FROM `tbl_base_all`; 


// 中间表, all sentence--中文
//		 tbl_base_all_sentence
DROP TABLE IF EXISTS tbl_base_all_sentence;
CREATE TABLE tbl_base_all_sentence LIKE sentence_base_test;
INSERT INTO tbl_base_all_sentence  SELECT * FROM sentence_base_test AS a where CID in (
	SELECT FIRST_ID  FROM `tbl_base_all`);

// 中间表, all sentence--cx
//		 tbl_base_all_cx
DROP TABLE IF EXISTS tbl_base_all_cx;
CREATE TABLE tbl_base_all_cx LIKE sentence_cx_new_test;
INSERT INTO tbl_base_all_cx  SELECT * FROM sentence_cx_new_test AS a where CID in (
	SELECT FIRST_ID  FROM `tbl_base_all`);


//4> 导入更详细: vector+样例
//		 tbl_base_all_vector
mysql\tbl_base_all_vector_create.py
python_w mysql\tbl_base_all_vector_create.py
//DELETE:
DELETE FROM tbl_base_all_vector;
//导入: 貌似很慢
mysql\tbl_base_all_vector_insert.py
python_w mysql\tbl_base_all_vector_insert.py
//条目: 20368
SELECT count(*)  FROM `tbl_base_all_vector`; 


//导入--中文:
...





[1.18] 词典方向--词向--图
mysql\tbl_vector_utf8_create.py
//		 tbl_vector_mark
mysql\tbl_vector_mark_utf8_create.py
python_w mysql\tbl_vector_mark_utf8_create.py
//		 INSERT, 好像只有第1次插入有效
DELETE FROM tbl_vector_mark;
INSERT INTO tbl_vector_mark (VID) select CXNI from dict_cfg_nbase;
//		 添加sp--标记(-, 0, 1, 2)
//sql_sp\sp_tbl_vector_mark_test.py
sql_sp\sp_tbl_vector_mark.py



1->4,5,8,10,11,15,          9->5,7,14,                  
2->1,                       10->3,7,14,                 
3->7,10,                    11->2,5,9,13,               
4->11,                      12->3,4,9,                  
5->4,6,8,10,14,             13->1,3,4,5,7,8,9,12,       
6->10,15,16,                14->4,16,                   
7->1,4,5,8,11,16            15->3,7,9,10,12,            
8->6,15,16,                 16->11,12,15                


/*//////////////////\\\\\\\\\\\\\\\\\\\
//////////////////{15}\\\\\\\\\\\\\\\\\
////////////////////\\\\\\\\\\\\\\\\\\\
////////////{14}//( )\\{16}\\\\\\\\\\\\
////////////////////\\\\\\\\\\\\\\\\\\\
//////<6>//\( )///<7>\\( )\\<8>\\\\\\
////////////////////\\\\\\\\\\\\\\\\\\\
/\<5>\/\( )\{13}/\( )\/\{9}/( )/\<1>\/
\\\\\\\\\\\\\\\\\\\\///////////////////
\\\\\\<4>\\\( )\\\<3>//( )//<2>//////
\\\\\\\\\\\\\\\\\\\\///////////////////
\\\\\\\\\\\\{12}\\( )//{10}////////////
\\\\\\\\\\\\\\\\\\\\///////////////////
\\\\\\\\\\\\\\\\\\{11}/////////////////
\\\\\\\\\\\\\\\\\\\\/////////////////*/




[1.19] 解决新旧转换--交叉分类(1)
//	dict_count_cx_new, dict_count_cx_old
//1> 名称:     1-->2 6 14, 难度大
//2> 时间词:    2-->8 15 16, 难度一般
//3> 动词:     5-->3 7 10 15, 难度大
//4> 数词:    10-->5 12 14, 难度一般
//5> 副词:    12-->10 12 15, 难度一般
//6> 介词:    13-->7 9, 难度一般

//  排序按数据多少排序：
SELECT *, SUM(CT) SCT FROM dict_count_cx_new where CTO in (1,2,5,10,12,13)  GROUP BY CTO ORDER BY SCT DESC;
//	动词:     '5'-->3 7 10 15,-->默认3 	      已转--次序06,   有用1
//	副词:    '12'-->10 12 15, -->默认15	      已转--次序05,   有用0
//	名称:     '1'-->2 6 14,   -->默认6 4 8    已转--次序04,   有用2
//	介词:    '13'-->7 9,      -->默认9 	      已转--次序01, 有用0
//	数词:    '10'-->5 12 14,  -->默认5	      已转--次序02, 有用1
//	时间词:    '2'-->8 15 16,  -->默认15 8     已转--次序03,  有用0.5
备注: 15时间副词,

//  查看原始转换, 记录目标到上面
select b.CXOI,a.* from dict_cfg_conv a left join dict_cfg_obase_full b on a.CTOI=b.CXI;


//（最近一次转换）
// 略。已放入记录中

//（转换记录）
sql_sp\sql_tbl_vector_mark.py
// 已保存数量: 5
...

//（转换前后准备）
//  转换结果:
//		 tbl_base_chg_vector
mysql\tbl_base_chg_vector_create.py
python_w mysql\tbl_base_chg_vector_create.py

//	存储过程, 添加中文词(不用改，直接跑)
sql_sp\tbl_base_chg_vector.py
//sql_sp\tbl_base_chg_vector_test.py





//其他, 无意义:
//临时表, 查看词性对应词
//       dict_utf8_tmp
DROP TABLE IF EXISTS dict_utf8_tmp;
CREATE TABLE dict_utf8_tmp LIKE dict_utf8_all;


//数词分析:边词_一, 度词_很, 集词_个
SELECT `DTXT`,`DCNT`,`DCXO`,`DCXN` FROM dict_utf8_all AS a LEFT JOIN `dict_cfg_obase_full` AS b ON  a.`DCXO` = b.`CXOS` where `CXOI`= 10;
DELETE FROM dict_utf8_tmp;
INSERT INTO dict_utf8_tmp SELECT `DTXT`,`DCNT`,`DCXO`,`DCXN` FROM dict_utf8_all AS a LEFT JOIN `dict_cfg_obase_full` AS b ON	a.`DCXO` = b.`CXOS` where `CXOI`= 10;
//总数 13258
SELECT count(*)  FROM `dict_utf8_tmp`; 

//ps:解决不了, 没有规律
SELECT *, COUNT(*) FROM tbl_base_all_vector WHERE SLIST LIKE '%_9' GROUP BY SLIST;

	

[1.20] 导入原句(1)
//1) 创建句子表
//		 sentence_path_all
mysql\sentence_path_all_create.py
python_w mysql\sentence_path_all_create.py
//   数据库插入操作, 操作完最好文件名都注释掉, 以免误操作.
//		 sentence_path_all
mysql\sentence_path_all_insert.py
python_w mysql\sentence_path_all_insert.py
//   删除, 自增问题,最好重建表
DELETE FROM sentence_path_all;
SELECT *  FROM `sentence_path_all`; 
//   查看总数 166204, 最后一条
SELECT COUNT(*)  FROM `sentence_path_all`; 
SELECT *  FROM `sentence_path_all` order by cid DESC; 
// 删除超长:  166107
DELETE FROM sentence_path_all where ccount>30;
SELECT COUNT(*)  FROM `sentence_path_all`; 


//2) 更新句子--词性编码 NSTR
sql_sp\sp_sentence_path_all.py
CALL sp_sentence_path_all(); 

//   验证转换结果:
//   非空总数 137475
SELECT COUNT(*) FROM `sentence_path_all` where nstr is not null; 
SELECT COUNT(*) FROM `sentence_path_all` where length(nstr)>0;
SELECT * FROM `sentence_path_all` where nstr is not null order by cid DESC; 
//   长度限制, 总数 137475
SELECT COUNT(*)  FROM `sentence_path_all` where ccount>2 and nstr is not null; 
//   部分转换
SELECT * FROM `sentence_path_all` where nstr is not null order by cid DESC; 
SELECT * FROM `sentence_path_all` where nstr is null order by cid DESC; 
SELECT * FROM `sentence_path_all` where nstr is not null  and cid >70000; 
SELECT * FROM `sentence_path_all` where length(nstr)>0;


//3) 从新更新 NSTR, 部分 (未知类处理)
// 更新未转换 NSTR: 67059
SELECT * FROM `sentence_path_all` WHERE LENGTH(nstr)>0 order by cid DESC;
SELECT * FROM `sentence_path_all_del` WHERE LENGTH(nstr)>0 order by cid DESC; 
DELETE FROM sentence_path_all;
INSERT INTO sentence_path_all SELECT * FROM sentence_path_all_del where  cid >67059;
SELECT * FROM `sentence_path_all`;
// 更新数量:
SELECT * FROM `sentence_path_all` where LENGTH(nstr)>0;
SELECT COUNT(*) FROM `sentence_path_all` where LENGTH(nstr)>0;
SELECT COUNT(*) FROM `sentence_path_all` where ccount>30;
// 更新前100, 验证转换数据:
DELETE FROM sentence_path_all;
INSERT INTO sentence_path_all SELECT * FROM sentence_path_all_del limit 0, 1000;
UPDATE `sentence_path_all` SET `NSTR`=NULL ;
SELECT * FROM `sentence_path_all`;
// 更新全部:
DELETE FROM sentence_path_all;
INSERT INTO sentence_path_all SELECT * FROM sentence_path_all_del;
SELECT * FROM `sentence_path_all`;


[1.21] 导入原句(2)--统计说明
//	 查看总数 86361       --
SELECT COUNT(*)  FROM `sentence_path_all`; 
//	 查看总数 86361       --
SELECT COUNT(*)  FROM `sentence_path_all_del`; 
//	 查看总数 166107      --带未知词性
SELECT COUNT(*)  FROM `sentence_path_all_no_del`; 
//	 查看总数 10504       --带特定词
SELECT COUNT(*)  FROM `sentence_path_test`; 

	

[1.22] 词层公式--原
//	创建词层表
//		 sentence_path_layer
mysql\sentence_path_layer_create.py
python_w mysql\sentence_path_layer_create.py
//   数据库插入操作, 一定要先删除, 主键不重复
//		 sentence_path_layer
mysql\sentence_path_layer_insert.py
python_w mysql\sentence_path_layer_insert.py
//   删除
DELETE FROM sentence_path_layer;
SELECT *  FROM `sentence_path_layer`; 
//   删除不全词性
DELETE FROM sentence_path_all where nstr like '%\_\_%';
SELECT * FROM sentence_path_all WHERE nstr LIKE '%\_\_%';
SELECT COUNT(*) FROM sentence_path_all WHERE nstr LIKE '%\_\_%';
SELECT COUNT(*)  FROM `sentence_path_all`; 
//   删除_结尾 误操作
DELETE FROM sentence_path_all where nstr like '%\_';
SELECT * FROM sentence_path_all WHERE nstr LIKE '%\_';
SELECT COUNT(*) FROM sentence_path_all WHERE nstr LIKE '%\_';
//  和差检查
SELECT * FROM sentence_path_layer WHERE nid in ('10_4_5', '4_5', '10_4');
SELECT * FROM sentence_path_layer WHERE nid LIKE '4\_5\__';
SELECT sum(ncount) FROM sentence_path_layer WHERE nid LIKE '4\_5\__';
SELECT sum(ncount) FROM sentence_path_layer;


//  备份
sql_sp\bak_tbl.py   sentence_path_all_del
sql_sp\bak_tbl.py   sentence_path_all_no_del



[1.23] 词数公式--整理
//	创建词数表
//		 sentence_path_num
mysql\sentence_path_num_create.py
python_w mysql\sentence_path_num_create.py

//	 删除, 主键不重复, 先删除
DELETE FROM sentence_path_num;
//   插入--一组
sql_sp\sp_sentence_path_num.py
//   插入--批量: 要很久10min+
sql_sp\sp_sentence_path_list.py
call sp_sentence_path_list();
//  设置分数val 验证
sql_sp\sql_sentence_path_num.py  sql_update


//  创建函数, 已弃用
sql_sp\sql_sentence_path_num.py  INS_SENTS_PATH_NUM   

//   备份
sql_sp\bak_tbl.py   sentence_path_layer_bak
sql_sp\bak_tbl.py   sentence_path_num_bak
	



[1.24] 类型转换(1)--选择数据
//		 sentence_path_test
//
//    名词: 6_10,或6_15--4,8,2    (OK)
//    名词: 6_16--4,8,2          (OK)
//    右类: 3_11--10,7,15,    先放:   的 了
//    右类: 3_15--10,7,       先放:   的 了
//    数词: 5_6--14,12           (OK)
//    数词: 5_8--12,14. 总数少.
//    数词: 5_14--12,14. 总数少.
//    副词: 15_7--8,10,12 右类: 有 从 在
//    副词: 15_9--8,10,12 右类: 是 被
//
//   提取原词,类似备份
sql_sp\bak_tbl.py   sentence_path_test
//   提取原词,类似备份--的
sql_sp\bak_tbl.py   sentence_path_test_te

//（参考转换记录）
sql_sp\sql_tbl_vector_mark.py



[1.25] 类型转换(2)--数据权重测试
//   选择3~10条数据
DELETE FROM sentence_path_test where cid>100;
SELECT * FROM `sentence_path_test`;
//   删除
DELETE FROM sentence_path_test_w;
SELECT * FROM `sentence_path_test_w`;
//   带参数导入(1)--log
mysql\sentence_path_test_param_insert_log.py
python_w mysql\sentence_path_test_param_insert_log.py 6 10 4 8 2
//   带参数导入(2)--log
mysql\sentence_path_test_te_insert_log.py
python_w mysql\sentence_path_test_te_insert_log.py 11 3 7 15
//   带参数导入(2)
mysql\sentence_path_test_te_insert.py
python_w mysql\sentence_path_test_te_insert.py 11 3 7 15
//	 数据库插入操作, 弃用(设置参数不便)
mysql\sentence_path_test_w_insert.py
python_w mysql\sentence_path_test_w_insert.py


//验证 INSERT SQL
sql_sp\sql_sentence_path_test_w.py sentence_path_test_w

// 手动更新其他类 + 验证
sql_sp\sql_sentence_path_test.py   calc_tool
sql_sp\sql_sentence_path_test.py   calc_log
sql_sp\sql_sentence_path_test.py   calc_update

// 备份
sql_sp\bak_tbl.py  sentence_path_test_w_log_bak



[1.26] 类型转换(3)--常用类, 其他右类
//   新建表
//		 sentence_path_test_w
mysql\sentence_path_test_w_create.py
python_w mysql\sentence_path_test_w_create.py
//   删除
DELETE FROM sentence_path_test_w;
SELECT * FROM `sentence_path_test_w`;
//   带参数导入(1)
mysql\sentence_path_test_param_insert.py
python_w mysql\sentence_path_test_param_insert.py 6 10 4 8 2
python_w mysql\sentence_path_test_param_insert.py 6 15 4 8 2
python_w mysql\sentence_path_test_param_insert.py 6 16 4 8 2
python_w mysql\sentence_path_test_param_insert.py 5 6 14 12 0
python_w mysql\sentence_path_test_param_insert.py 15 9 10 12 8
python_w mysql\sentence_path_test_param_insert.py 15 7 10 12 8
python_w mysql\sentence_path_test_param_insert.py 3 11 10 7 15

// 备份
sql_sp\bak_tbl.py  sentence_path_test_w_6_bak


//  其他:
//   右类建表
//		 sentence_path_test_right
mysql\sentence_path_test_right_create.py
python_w mysql\sentence_path_test_right_create.py
//   右类统计
sql_sp\bak_count.py
SELECT w3,w4,n4,count(w4) cntw4 FROM `sentence_path_test_w` group by w4 order by cntw4 desc;
INSERT INTO sentence_path_test_right SELECT w3,w4,n4,count(w4) cntw4 FROM `sentence_path_test_w` group by w4 order by cntw4 desc;
//   后续逐个处理右类



[1.27] 类型转换(4)--右类
//		 sentence_path_test_w
//  
//   提取原词,类似备份--的
sql_sp\bak_tbl.py   sentence_path_test_te
//   提取原词--sql
SELECT * FROM `sentence_path_test` WHERE CSTR REGEXP "\_.*\_的\_.*\_";
//   删除
DELETE FROM sentence_path_test_w;
SELECT * FROM `sentence_path_test_w`;
//   带参数导入(2)--带参数1
mysql\sentence_path_test_te_insert_simple.py
python_w mysql\sentence_path_test_te_insert_simple.py "的"

//   带参数导入(2)
mysql\sentence_path_test_te_insert.py
python_w mysql\sentence_path_test_te_insert.py 11 3 7 15
// 备份
sql_sp\bak_tbl.py  sentence_path_test_w_11_bak


//  其他:
//   右类权重建表
//		 sentence_path_test_right_base
mysql\sentence_path_test_right_base_create.py
python_w mysql\sentence_path_test_right_base_create.py
//   删除
DELETE FROM sentence_path_test_right_base;
SELECT * FROM `sentence_path_test_right_base`;
//   手动更新权重
sql_sp\sql_sentence_path_test.py   calc_update_list
//   手动更新权重--next
sql_sp\sql_sentence_path_test.py   calc_update_next
sql_sp\sql_sentence_path_test.py   calc_update_next_all
	
//   添加字段
sql_sp\bak_alter_tbl.py  sentence_path_test_right_base


//next
// 1 t1--提取原词,类似备份--的
sql_sp\bak_tbl.py   sentence_path_test_te
// 2 t2--删除
DELETE FROM sentence_path_test_w;
SELECT * FROM `sentence_path_test_w`;
// 3 t2--带参数导入(2)--带参数1
python_w mysql\sentence_path_test_te_insert_simple.py "了"
python_w mysql\sentence_path_test_te_insert_simple.py "着"
python_w mysql\sentence_path_test_te_insert_simple.py "是"
python_w mysql\sentence_path_test_te_insert_simple.py "在"
python_w mysql\sentence_path_test_te_insert_simple.py "有"
python_w mysql\sentence_path_test_te_insert_simple.py "被"
python_w mysql\sentence_path_test_te_insert_simple.py "就"
python_w mysql\sentence_path_test_te_insert_simple.py "从"
// 4 t3--手动更新权重--next
sql_sp\sql_sentence_path_test.py   calc_update_next_all
sql_sp\sql_sentence_path_test.py   calc_update_next_order

//查看
SELECT * FROM `sentence_path_test_right_base` order by wstr, val desc;
SELECT cid,cstr,nstr FROM `sentence_path_all` WHERE CSTR REGEXP "\_.*\_了\_.*\_";


//手记1:粗选
// 了:选3或11，限D区
// 从:多义，选7或9，限TR区
// 在:选7或9，限TR区, 选对角比较好--7
// 就:选7或9或15，限T区, 分区的话选15合适--chg15.
// 是:选7或9或3，--chg3.
// 有:选7或9或3，分D区的话选3合适--chg3.
// 的:选11，限D区
// 着:选11，限D区
// 被:选9，限R区


//手记1:
//  第六局:改为组合词
//  选择:动名词. 你_永远_都_有_第二个_选择





[1.28] 转换结果--词向
//	 转换结果
//		 sentence_path_test_result
mysql\sentence_path_test_result_create.py
python_w mysql\sentence_path_test_result_create.py
//合并时统计条数
//最新条数--343--478--1058--2397--3422
DELETE FROM sentence_path_test_result;
SELECT count(*) FROM `sentence_path_test_result`;
// 更新(1)--6-->2
INSERT INTO sentence_path_test_result SELECT cw,cn,tn3,tv2 FROM `sentence_path_test_w` WHERE tv2>=18 and cv<100;
SELECT cw,cn,tn3,tv2 FROM `sentence_path_test_w` WHERE tv2>=18 and cv<100;
//         (2)
INSERT INTO sentence_path_test_result SELECT cw,cn,tn3,tv2 FROM `sentence_path_test_w` WHERE tv2>=18 and (cv<tv2*3 or cv<100);
SELECT cw,cn,tn3,tv2 FROM `sentence_path_test_w` WHERE tv2>=18 and (cv<tv2*3 or cv<100);
// 更新(2)--6-->4
INSERT INTO sentence_path_test_result SELECT cw,cn,tn2,tv2 FROM `sentence_path_test_w` WHERE tv2<18 and tv1>=18 and cv<100;
SELECT cw,cn,tn1,tv2 FROM `sentence_path_test_w` WHERE tv2<18 and tv1>=18 and (cv<tv1*3 or cv<100);
SELECT cw,cn,tn1,tv2 FROM `sentence_path_test_w` WHERE tv2<18 and tv1>=18 and cv<100;
// 更新(3)--6-->8
INSERT INTO sentence_path_test_result SELECT cw,cn,tn2,tv2 FROM `sentence_path_test_w` WHERE tv2>40  and cv<230;
SELECT cw,cn,tn2,tv2 FROM `sentence_path_test_w` WHERE tv2>40  and cv<230;
// 更新(4)--5-->14
INSERT INTO sentence_path_test_result SELECT cw,cn,tn1,tv1 FROM `sentence_path_test_w` WHERE tv1>=20;
SELECT cw,cn,tn1,tv1 FROM `sentence_path_test_w` WHERE tv1>=20;
// 更新(5)--15-->12 右词，忽略

// 备份
sql_sp\bak_tbl.py   sentence_path_test_result_bak



[1.29] 类型转换(5)--全转换
//3422
//这个也不准,就不更新了,仍用错误分类.
SELECT count(*) FROM `sentence_path_test_result`;


//full
// 1 t1--提取原词,类似备份--6,3,5,15
sql_sp\bak_tbl.py   sentence_path_test_full
// 2 t2--删除
DELETE FROM sentence_path_test_w;
SELECT * FROM `sentence_path_test_w`;
// 3 t2--带参数导入(2)--带参数1
mysql\sentence_path_test_full_insert_simple.py
python_w mysql\sentence_path_test_full_insert_simple.py 6
python_w mysql\sentence_path_test_full_insert_simple.py 3
python_w mysql\sentence_path_test_full_insert_simple.py 5
python_w mysql\sentence_path_test_full_insert_simple.py 15
// 4 t3--手动更新权重--next
sql_sp\sql_sentence_path_test.py   calc_update_full_all
//   说明
sql_sp\sql_sentence_path_test.py   calc_update_full_order

// 备份
sql_sp\bak_tbl.py   sentence_path_test_w_full_bak
sql_sp\bak_tbl.py   sentence_path_test_w_3_bak
sql_sp\bak_tbl.py   sentence_path_test_w_6_bak
sql_sp\bak_tbl.py   sentence_path_test_w_11_bak
sql_sp\bak_tbl.py   sentence_path_test_w_15_bak





[1.30] 转换结果--全转换
// 创建--备份
sql_sp\bak_tbl.py   sentence_path_test_result_full
sql_sp\bak_tbl.py   sentence_path_test_result_merge
sql_sp\bak_tbl.py   sentence_path_test_result_del


//   转换步骤
sql_sp\sql_sentence_path_test.py   calc_update_test_result
//   转换步骤
sql_sp\sql_sentence_path_test.py   calc_update_test_result_te

// 备份
sql_sp\bak_tbl.py  sentence_path_test_result_merge_bak




[1.31] 更新词性
//       dict_utf8_update
//创建数据库表:
mysql\word_utf8_update_create.py
python_w mysql\word_utf8_update_create.py
// add
INSERT INTO dict_utf8_update  SELECT *,0 FROM `dict_utf8_all` ;
// set
UPDATE `dict_utf8_update` SET `DCXE`=`DCXN`;
// merge
UPDATE `dict_utf8_update`a right join sentence_path_test_result_merge b on a.DTXT=b.cw
	SET `DCXE`=`TN`;
// check
select * from  `dict_utf8_update` where `DCXN`!=`DCXE`;

//重全名
rename table table1 to table2;
rename table sentence_path_all_no_del to sentence_path_all_no_del;
rename table sentence_path_all_del  to sentence_path_all_no_edit;
rename table sentence_path_all_no_edit  to sentence_path_all_del;


//更新句子
UPDATE `sentence_path_all` SET `NSTR`="";
//更新句子--词性编码 NSTR
sql_sp\sp_sentence_path_update.py
CALL sp_sentence_path_update(); 

//   部分测试:
sql_sp\sql_sentence_path_update.py  sentence_path_all_edit

// 备份
sql_sp\bak_tbl.py  sentence_path_all_no_del
sql_sp\bak_tbl.py  sentence_path_all_del_bak
sql_sp\bak_tbl.py  sentence_path_all_edit
	


[1.32] 应用新词性
//检查太卡了
select * from dict_utf8_all a left join dict_utf8_all_bak b on a.DTXT=b.DTXT;
//最新:
tbl: dict_utf8_update
col: DCXE


[1.33] 手动查找/更新词性
// 手动更新词性
sql_sp\bak_data_update.py  update_cx


[1.34] 
// 第3指标优化：
//   <0.5 隐藏值可能高了
//   >0.5 语法错误
//   0, 26 分开有用？
// 精细化处理：
//   token_id, 从这去看分词
//   初始w, 训练加快
//   不常用词用相同标签代替
// 交换顺序, 正反比相近 再训练




[1.35] 
//超级模块
sqlite3\
py_zhong\run_20191130.py
python_w py_zhong\run_20191130.py



[2.1] 




[2.2] 





[2.3] 







[2.4] 




[2.5]



	
	
[2.6] 未定
//   组合词
sql_sp\sql_sentence_path_test.py   calc_update_test_result_zu
//	 短语块
sql_sp\sql_sentence_path_test.py   calc_update_test_short



[2.7] 快速处理--导入新小说
// 1)新建类似表格, 先插入再删的话, ID会很大
sql_sp\bak_tbl.py sentence_mini_all

// 2)insert, 操作完文件名都注释掉
mysql\sentence_mini_all_insert.py
python_w mysql\sentence_mini_all_insert.py

// 3)备份+删除超长 (临时备份)
sql_sp\bak_tbl.py sentence_mini_lysheng_no_del   # 表格内容, 删不删不重复
sql_sp\bak_tbl.py sentence_mini_lysheng_del      # 表格内容, 只要删了超长就行
// 4)update NSTR--test
sql_sp\sql_sentence_mini_test.py  update_test
//   update NSTR
sql_sp\sql_sentence_mini_test.py  update_all
sql_sp\sp_sentence_mini_all.py
CALL sp_sentence_mini_all(); 
// 5)备份+NSTR
sql_sp\bak_tbl.py sentence_mini_lysheng_del_two
// 6)删除不全词性
sql_sp\sql_sentence_mini_test.py  del_no_full
// 7)备份+NSTR+Del
sql_sp\bak_tbl.py sentence_mini_lysheng_del_three




[2.8] 小计划2--词魂--自动
	sentence_path_test
//   选择测试数据
sql_sp\sql_sentence_mini_test.py  update_mini_test



[2.9]




