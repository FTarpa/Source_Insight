#!/usr/bin/python
# -*- coding: UTF-8 -*-
 
#��д����˵��
def printinfo( name, age = 35 ):
   "��ӡ�κδ�����ַ���"
   print ("Name: ", name);
   print ("Age ", age);
   return;
 
#����printinfo����
printinfo( age=50, name="miki" );
printinfo( name="miki" );


# ��д����˵��
def printinfo( arg1, *vartuple ):
   "��ӡ�κδ���Ĳ���"
   print ("���: ")
   print (arg1)
   for var in vartuple:
      print (var)
   return;
 
# ����printinfo ����
printinfo( 10 );
printinfo( 70, 60, 50 );



# ��д����˵��
sum = lambda arg1, arg2: arg1 + arg2;
 
# ����sum����
print ("��Ӻ��ֵΪ : ", sum( 10, 20 ))
print ("��Ӻ��ֵΪ : ", sum( 20, 20 ))



#//	Name:  miki
#//	Age  50
#//	Name:  miki
#//	Age  35
#//	���:
#//	10
#//	���:
#//	70
#//	60
#//	50
#//	��Ӻ��ֵΪ :  30
#//	��Ӻ��ֵΪ :  40

