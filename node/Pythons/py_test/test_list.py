#!/usr/bin/python
# -*- coding: UTF-8 -*-
 
# ��д����˵��
def changeme( mylist ):
   "�޸Ĵ�����б�"
   mylist.append([1,2,3,4]);
   print ("������ȡֵ: ", mylist)
   return
 
# ����changeme����
mylist = [10,20,30];
changeme( mylist );
print ("������ȡֵ: ", mylist)


#mylist2 = [[10,20,30],[10,20,30],[10,20,30],[10,20,30]];
#ndims = mylist2.shape.ndims
#print ("ndims: ", ndims)
#print ("shape: ", mylist2.shape)


input_shape = [3,4,1];
tmp_shape1 = input_shape[0:-1];
tmp_shape2 = [input_shape[-1] * 7];
tmp_shape3 = tmp_shape1 + tmp_shape2;
out_shape = input_shape[0:-1] + [input_shape[-1] * 7]
print ("tmp_shape1: ", tmp_shape1)
print ("tmp_shape2: ", tmp_shape2)
print ("tmp_shape3: ", tmp_shape3)
print ("out_shape: ", out_shape)


#//	������ȡֵ:  [10, 20, 30, [1, 2, 3, 4]]
#//	������ȡֵ:  [10, 20, 30, [1, 2, 3, 4]]

