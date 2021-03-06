
基础路径设置:
basePath = D:\project\NLP
toolPath = Save:node\Pythons
tool:\\

/***********************************************************************/

//目录[Num][Ca]:
// 1. Jieba 参考
Save:node\Pythons\project\Macro_Pythons_jieba_fast.h \[1.1\] Jieba 参考
Save:node\Pythons\project\Macro_Pythons_jieba_fast.h \[1.2\] 支持三种分词模式
Save:node\Pythons\project\Macro_Pythons_jieba_fast.h \[1.3\] 主要算法：
Save:node\Pythons\project\Macro_Pythons_jieba_fast.h \[1.4\] 代码框架
Save:node\Pythons\project\Macro_Pythons_jieba_fast.h \[1.5\] 算法1 前缀词典
Save:node\Pythons\project\Macro_Pythons_jieba_fast.h \[1.6\] 
Save:node\Pythons\project\Macro_Pythons_jieba_fast.h \[1.7\] local---------------导出到mysql
Save:node\Pythons\project\Macro_Pythons_jieba_fast.h \[1.8\] 
Save:node\Pythons\project\Macro_Pythons_jieba_fast.h \[1.9\] 
Save:node\Pythons\project\Macro_Pythons_jieba_fast.h \[1.10\] annotated_jieba----参考代码
Save:node\Pythons\project\Macro_Pythons_jieba_fast.h \[1.11\] jieba.cut----------test
Save:node\Pythons\project\Macro_Pythons_jieba_fast.h \[1.12\] addr---------------修改默认词库
Save:node\Pythons\project\Macro_Pythons_jieba_fast.h \[1.13\] 
// 2. Jieba 源码分析
Save:node\Pythons\project\Macro_Pythons_jieba_fast.h \[2.1\] 分词
Save:node\Pythons\project\Macro_Pythons_jieba_fast.h \[2.2\] 前缀词典的构建
Save:node\Pythons\project\Macro_Pythons_jieba_fast.h \[2.3\] 有向无环图的构建
Save:node\Pythons\project\Macro_Pythons_jieba_fast.h \[2.4\] 最大概率计算
Save:node\Pythons\project\Macro_Pythons_jieba_fast.h \[2.5\] 关键词提取
Save:node\Pythons\project\Macro_Pythons_jieba_fast.h \[2.6\] 词性标注
Save:node\Pythons\project\Macro_Pythons_jieba_fast.h \[2.7\] 词语位置
Save:node\Pythons\project\Macro_Pythons_jieba_fast.h \[2.8\] 
Save:node\Pythons\project\Macro_Pythons_jieba_fast.h \[2.9\] 
Save:node\Pythons\project\Macro_Pythons_jieba_fast.h \[2.10\] 
// 3. cx 数据整理
Save:node\Pythons\project\Macro_Pythons_jieba_fast.h \[3.1\] 分句 test
Save:node\Pythons\project\Macro_Pythons_jieba_fast.h \[3.2\] 分析小说
Save:node\Pythons\project\Macro_Pythons_jieba_fast.h \[3.3\] 关键词的提取
Save:node\Pythons\project\Macro_Pythons_jieba_fast.h \[3.4\] 绘图
Save:node\Pythons\project\Macro_Pythons_jieba_fast.h \[3.5\] 文件读写
Save:node\Pythons\project\Macro_Pythons_jieba_fast.h \[3.6\] 
Save:node\Pythons\project\Macro_Pythons_jieba_fast.h \[3.7\] 
Save:node\Pythons\project\Macro_Pythons_jieba_fast.h \[3.8\] 
Save:node\Pythons\project\Macro_Pythons_jieba_fast.h \[3.9\] 
Save:node\Pythons\project\Macro_Pythons_jieba_fast.h \[3.10\] 
Save:node\Pythons\project\Macro_Pythons_jieba_fast.h \[3.11\] 
// 4. 中文分词意义
Save:node\Pythons\project\Macro_Pythons_jieba_fast.h \[4.1\] 中文分词的难点
Save:node\Pythons\project\Macro_Pythons_jieba_fast.h \[4.2\] 真假词性转换
Save:node\Pythons\project\Macro_Pythons_jieba_fast.h \[4.3\] 文本手动整理
Save:node\Pythons\project\Macro_Pythons_jieba_fast.h \[4.4\] 
Save:node\Pythons\project\Macro_Pythons_jieba_fast.h \[4.5\] 
Save:node\Pythons\project\Macro_Pythons_jieba_fast.h \[4.6\] 
	







[1.1] Jieba 参考
//Jieba 参考
https://blog.csdn.net/Kaiyuan_sjtu/article/details/81982536

//Jieba 注释
https://github.com/ustcdane/annotated_jieba

//Jieba 代码仓库
https://github.com/deepcs233/jieba_fast












[1.2] 支持三种分词模式
支持三种分词模式：
	精确模式，试图将句子最精确地切开，适合文本分析；

	全模式，把句子中所有的可以成词的词语都扫描出来, 速度非常快，但是不能解决歧义；

	搜索引擎模式，在精确模式的基础上，对长词再次切分，提高召回率，适合用于搜索引擎分词。

支持繁体分词
支持自定义词典
MIT 授权协议




[1.3] 主要算法：
基于前缀词典实现词图扫描，生成句子中汉字所有可能成词情况所构成的有向无环图（DAG），采用动态规划查找最大概率路径，找出基于词频的最大切分组合；

对于未登录词，采用了基于汉字成词能力的 HMM模型，采用Viterbi算法进行计算；

基于Viterbi算法的词性标注；

分别基于tfidf和textrank模型抽取关键词；




[1.4] 代码框架
//短语抽取模抉
jieba_fast\analyse
	jieba_fast\analyse\analyzer.py
	jieba_fast\analyse\idf.txt
	jieba_fast\analyse\init.Py
	//TextRank方法
	jieba_fast\analyse\textrank.py
	//TIDr方法
	jieba_fast\analyse\tfidf.py
jieba_fast\_compat.pY
jieba_fast\dict.cxt
//基于HMM的切分方法
jieba_fast\finalseg 
	jieba_fast\finalseg\_init_.Py
	jieba_fast\finalseg\prob_emit.py
	jieba_fast\finalseg\prob_emit.py 
	jieba_fast\finalseg\prob_start.py
	jieba_fast\finalseg\prob_atart.py
	jieba_fast\finalseg\prob_tran3.py
	jieba_fast\finalseg\probtrana.Py
//基于DAG的切分方法
jieba_fast\_init__.Py
jieba_fast\main_ _.Py
// #词性标注模快
jieba_fast\posseg
	jieba_fast\posseg\char_state_cab.Py
	jieba_fast\posseg\char_state_tab.Py
	jieba_fast\posseg\_init__.py
	jieba_fast\posseg\prob_emit.Py
	jieba_fast\posseg\prob_emit.py
	jieba_fast\posseg\prob_3tart.Py
	jieba_fast\posseg\prob atart.Py
	jieba_fast\posseg\prob_trana.Py
	jieba_fast\posseg\prob_tran3.Py 
	jieba_fast\posseg\viterbi.py




[1.5] 算法1 前缀词典
基于前缀词典及动态规划实现分词

词典形式如下，每一行有三列，第一列是词，第二列是词频，第三列是词性。
	北京大学 2053 nt
	大学 20025 n

//举个栗子:以“去北京大学玩”为例

有向无环图的构建
//	去 -- 0: [0]
//	北 -- 1: [1,2,4]
//	京 -- 2: [2]
//	大 -- 3: [3,4]
//	学 -- 4: [4]
//	玩 -- 5: [5]





[1.6] 
	
	
	
[1.7] local---------------导出到mysql
//local
C:\Users\Administrator\AppData\Local\Programs\Python\Python36\Lib\site-packages\jieba\posseg

// 导出到mysql
//     替换原目录
Save:node\Pythons\mysql_bak\jieba___init__.py
Save:node\Pythons\mysql_bak\, add bmp.bat



[1.8] 
	
	
	
[1.9] 
	
	
	
[1.10] annotated_jieba----参考代码
// addr:
https://github.com/ustcdane/annotated_jieba
// path:
jb1Path = annotated_jieba

jb1:test\demo.py
python_w jb1:test\demo.py

//	========================================
//	1. 分词
//	----------------------------------------
//	Full Mode: 我/ 来到/ 北京/ 清华/ 清华大学/ 华大/ 大学
//	Default Mode: 我/ 来到/ 北京/ 清华大学
//	他, 来到, 了, 网易, 杭研, 大厦
//	小明, 硕士, 毕业, 于, 中国, 科学, 学院, 科学院, 中国科学院, 计算, 计算所, ，, 后, 在, 日本, 京都, 大学, 日本京都大学, 深
//	========================================
//	2. 添加自定义词典/调整词典
//	----------------------------------------
//	如果/放到/post/中将/出错/。
//	494
//	如果/放到/post/中/将/出错/。
//	「/台/中/」/正确/应该/不会/被/切开
//	69
//	「/台中/」/正确/应该/不会/被/切开
//	========================================
//	3. 关键词提取
//	----------------------------------------
//	 TF-IDF
//	----------------------------------------
//	欧亚 0.7300142700289363
//	----------------------------------------
//	 TextRank
//	----------------------------------------
//	吉林 1.0
//	欧亚 0.9966893354178172
//	========================================
//	4. 词性标注
//	----------------------------------------
//	我 r
//	========================================
//	6. Tokenize: 返回词语在原文的起止位置
//	----------------------------------------
//	 默认模式
//	----------------------------------------
//	word 永和 			   start: 0 			   end:2
//	----------------------------------------
//	 搜索模式
//	----------------------------------------
//	word 永和 			   start: 0 			   end:2

	
[1.11] jieba.cut test
jb1:test\demo2.py
python_w jb1:test\demo2.py
	
//	from __future__ import unicode_literals
//	import sys
//	sys.path.append("../")
//
//	import jieba
//	import jieba.posseg
//	import jieba.analyse
//
//
//	print('='*40)
//	print('1. 分词')
//	print('-'*40)
//
//	seg_list = jieba.cut("我来到北京清华大学", cut_all=True)
//	print("Full Mode: " + "/ ".join(seg_list))  # 全模式
	
	
[1.12] addr修改默认词库
// addr:
https://blog.csdn.net/qq_29202513/article/details/85236995


[1.13] 



// Jieba 源码分析
[2.1] 分词
//	分词的主函数
jieba\__init__.py  def^lcut(self, *args, **kwargs):
//	分词的主函数
jieba\__init__.py  def^cut(self, sentence, cut_all=False, HMM=True):
	
//1) 用例
//	用例1:
//	seg_list = jieba.cut("我来到北京清华大学", cut_all=True)
//	print("Full Mode: " + "/ ".join(seg_list))  # 全模式

//	用例2:
//	seg_list = jieba.cut("我来到北京清华大学", cut_all=False)
//	print("Default Mode: " + "/ ".join(seg_list))  # 默认模式

//	用例3:
//	seg_list = jieba.cut_for_search("小明硕士毕业于中国科学院计算所，后在日本京都大学深造")  # 搜索引擎模式
//	print(", ".join(seg_list))


//2) 使用__cut__DAG(self, sentence)函数构建前缀词典；
//使用get_DAG(self, sentence)函数构建有向无环图；
//使用calc(self, sentence, DAG, route)基于最大概率路径进行分词，如果遇到未登陆词，则调用HMM模型进行切分。


//3) 添加自定义词典/调整词典
//	print(jieba.suggest_freq(('中', '将'), True))
//	print(jieba.suggest_freq('台中', True))





[2.2] 前缀词典的构建
jieba\__init__.py  def^gen_pfdict(self, f)

//构建前缀词典，解析离线统计词典文本文件f（每一行分别对应着词，词频，词性），
//    将词和词频提取出来，形成key-value对，加入到前缀词典中lfreq
//    对于每个词，再分别获得它的前缀词，如果前缀词已经存在于前缀词典中，则不处理；
//    如果不在，则将词频设为0便于后续DAG构建






[2.3] 有向无环图的构建
//python的字典结构，最终的效果是{k : [k , j , ..] , m : [m , p , q] , ...}
jieba\__init__.py  def^get_DAG(self, sentence)






[2.4] 最大概率计算
jieba\__init__.py  def^calc(self, sentence, DAG, route):








[2.5] 关键词提取
s = "此外，公司拟对全资子公司吉林欧亚置业有限公司增资4.3亿元，"
for x, w in jieba.analyse.extract_tags(s, withWeight=True):
for x, w in jieba.analyse.textrank(s, withWeight=True):
	
	
	
	
	


[2.6] 词性标注
	
//	words = jieba.posseg.cut("我爱北京天安门")
//	for word, flag in words:
//	    print('%s %s' % (word, flag))






[2.7] 词语位置
result = jieba.tokenize('永和服装饰品有限公司')
result = jieba.tokenize('永和服装饰品有限公司', mode='search')


[2.8] 









[2.9] 


[2.10] 




[3.1] 分句 test
//分句
tool:xiaoshuo\test_split.py
python_w tool:xiaoshuo\test_split.py
//分词
tool:xiaoshuo\test_cut.py
python_w tool:xiaoshuo\test_cut.py
//词频:
tool:xiaoshuo\test_nltk.py
python_w tool:xiaoshuo\test_nltk.py


[3.2] 分析小说
//参考
https://blog.csdn.net/qq_33320337/article/details/86694040
//准备
tool:xiaoshuo\data_name.txt
//人物名字
tool:xiaoshuo\test_name.py
python_w tool:xiaoshuo\test_name.py

[3.3] 关键词的提取
//关键词的提取
tool:xiaoshuo\test_extract_tags.py
python_w tool:xiaoshuo\test_extract_tags.py
//绘制人物关系网络图
tool:xiaoshuo\test_networkx.py
python_w tool:xiaoshuo\test_networkx.py

[3.4] 绘图
//gnuplot点线风格
tool:xiaoshuo\test_gnuplot.py
python_w tool:xiaoshuo\test_gnuplot.py
//柱状图
tool:xiaoshuo\test_gnuplot2.py
python_w tool:xiaoshuo\test_gnuplot2.py
//	gunplot绘图
//计算男主和女主的相似度
tool:xiaoshuo\test_gensim.py
python_w tool:xiaoshuo\test_gensim.py


[3.5] 文件读写
//CMD中文
在CMD里输入 “chcp 936”
//read
tool:xiaoshuo\test_read.py
python_w tool:xiaoshuo\test_read.py
//write
tool:xiaoshuo\test_write.py
python_w tool:xiaoshuo\test_write.py



[3.6] 


[3.7] 


[3.8] 





[3.9] 












[3.10] 


[3.11] 



[3.11] 











[4.1] 中文分词的难点
分词规范，词的定义还不明确 (《统计自然语言处理》宗成庆)

歧义切分问题，交集型切分问题，多义组合型切分歧义等 
结婚的和尚未结婚的 => 
结婚／的／和／尚未／结婚／的 
结婚／的／和尚／未／结婚／的

未登录词问题 
有两种解释：
一是已有的词表中没有收录的词，
二是已有的训练语料中未曾出现过的词，
第二种含义中未登录词又称OOV(Out of Vocabulary)。
对于大规模真实文本来说，未登录词对于分词的精度的影响远超歧义切分。
一些网络新词，自造词一般都属于这些词。



[4.2] 真假词性转换
//1 数据转换流程: 推出真词性
短句+分词+词性
短句+分词+词性+真词性
短句+分词+词性+真词性+词典
短句+分词+词性+真词性+词典+处理

//2 中间数据：
批量处理部分;
	假词性->真词性		//合并cx都在py中

	个词词性->真词性->对照->重新标注
	个词词性->批量标注
	
句式+文本练习；
	文本->句式->标注练习
	文本->句式->标注汇总->手动合并
	
	文本->句式->句式统计
	文本->句式->常用句式->手动确认
	
	文本->句式相同->推测词性
	文本->句式相同->推测词性
	
句式+深入练习；
	词性->详细分类：颜色...
	
句式+词魂；
	词性->词性的功能，前后...
	词性->象形符号表示
	
	句式->省略词性
	句式->通用句式
	词性重定义
		
//3 数据存储：
//原表;
//原表备份1、2;

//假真词性对照表：a真 A假
//	已标注即主词性：a, 10,9,12,...
真假词性统计表;
	已标注即主词性：A, 10,9,12,...
个词词性对照表;
	a, a+, A, A+, 
词性统计表;
	即前面表格的数字：10,9,12,...

句式表;

句式学习表;
	先不进入总表


//4 测试：
直接显示
	词性列表举例;
	句式列表举例;
	人名列表举例;
	
预测
	补空->句式回填
	
发散

//5 高级篇：
专项练习
	数学
	歧义
	
结合深入
	灵魂









[4.3] 文本手动整理
//前整理
1.确认标点符号
2.删除空格




[4.4] 




[4.5] 




[4.6] 




[4.7] 




[4.8] 




[4.9] 




[4.10] 



