


基础路径设置:
basePath = D:\project\NLP\nlp_block
	
/***********************************************************************/


	
README.md



[4.36] 分词--
// 公共模块

_loader.py
_token.py
_losses.py
_layer.py
_block.py
_model.py
_tool.py
// 新--(板模型)--内存异常
run_block.py
python_w run_block.py

// 旧--(板模型)--训练
runtest_all\runtest_model_calc.py
python_w runtest_all\runtest_model_calc.py

// 旧--(板模型)--预测, 保存结果
runtest_all\runtest_model.py
python_w runtest_all\runtest_model.py

// 旧--(板模型)--参数分析--双标准
runtest_all\runtest_param.py
python_w runtest_all\runtest_param.py

// 旧--(板模型)--参数混合
runtest_all\runtest_merge.py
python_w runtest_all\runtest_merge.py




[4.37] 分词--整体测试
// 公共模块
_loader_bl.py
_layer_bl.py
_model_bl.py
_model_calc_no_use.py
// 整体测试--(分块模型)--效果不好
runtest_all\runtest_sent_block.py
python_w runtest_all\runtest_sent_block.py

// 单句测试--(分块模型)--效果不好
runtest_all\runtest_model_bl.py
python_w runtest_all\runtest_model_bl.py

// 单句测试--(网中网模型)
runtest_all\runtest_layer.py
python_w runtest_all\runtest_layer.py





[4.38] 分词--单元测试
// 预处理--加载, 设置数量
runtest\runtest_load.py  run_load
python_w runtest\runtest_load.py

// 预处理--序列化m2n
runtest\runtest_seq.py
python_w runtest\runtest_seq.py

// 预处理--单句分词
runtest\runtest_split.py
python_w runtest\runtest_split.py

// 预处理--分块(没用上)
runtest\runtest_block.py
python_w runtest\runtest_block.py

// 预处理--math
runtest\runtest_math.py
python_w runtest\runtest_math.py


// 试200随机
// 删除t+f均等










