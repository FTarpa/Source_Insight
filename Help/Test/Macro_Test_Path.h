
# *************************************************************************
#    �����ļ�
# *************************************************************************


//1) ����·������:
//basePath = Save:node\Pythons

// ����basePath, �� basePath + cur
py_test\file_read_a.txt
py_test\file_read_b.txt

// ������basePath, �� project path + cur
py_test\file_read_a.txt


//2) Project·������
ProjectPath = Save:node\Pythons
// ok
Project:py_test\file_read_a.txt
// err
Project2:py_test\file_read_b.txt
Project: py_test\file_read_a.txt


//3) Tool·������
Tool2Path = Save:node\Pythons
// ok
Tool2:py_test\file_read_a.txt
// err
Tool:py_test\file_read_b.txt


//3) Data·������
DataPath = Save:node\Pythons
// ok
Data:py_test\file_read_a.txt
// err
Data2:py_test\file_read_b.txt


//4) TSTS·������
TSTSPath = Save:node\Pythons
// ok
TSTS:py_test\file_read_a.txt
// err
TSTSS:py_test\file_read_b.txt








