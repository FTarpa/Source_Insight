#!/usr/bin/python
# -*- coding: UTF-8 -*-
import tensorflow as tf
import numpy as np


a = np.array([[[2,3],[2,3]],
              [[2,3],[2,3]]])
    
b = np.array([[[2,3]]])
c = np.array([[2,3]])
d = np.array([2,3])
d3 = np.array([2,3,4])

e = np.array([[[2]]])
f = np.array([[2]])
g = np.array([2])
m = np.array([0,0])
n1 = np.array([0,1])
n3 = np.array([1,1,1,0,0,0])



# �ӷ�: ��״ͬa
print('�ӷ� = %s' %( a+b))
print('�ӷ� = %s' %( a+c))
print('�ӷ� = %s' %( a+d))

# ˫x˫: ��״ͬa
print('\n˫x˫ = %s' %( tf.multiply(a,b)))
print('˫x˫ = %s' %(tf.multiply(a,c)))
print('˫x˫ = %s' %(tf.multiply(a,d)))

# ˫x��: ��״ͬa
print('\n˫x�� = %s' %(tf.multiply(a,e)))
print('˫x�� = %s' %( tf.multiply(a,f)))
print('˫x�� = %s' %( tf.multiply(a,g)))


# ��x˫: ��״�ɱ���?
print('\n��x˫ = %s' %(tf.multiply(e,d)))
# ˫x��: err?
#print('\n˫x�� = %s' %(tf.multiply(d,d3)))
# ��00=����
print('shape%s x shape%s = %s' %(e.shape, m.shape, e+m))

# ����:
n4 = tf.expand_dims(n3, -1)
print('\n���� = %s' %(tf.multiply(n4,n1)+tf.multiply(1-n4,1-n1)))

# 2*4*2  X mark(2*4)
A242 = np.array([[[1,10],[1,11],[1,12],[1,13]],[[2,10],[2,11],[2,12],[2,13]]])
B24  = np.array([[1,1,0,0],[0,0,1,1]])
A224=tf.transpose(A242,[2,0,1])
S224=tf.multiply(A224, B24)
S242=tf.transpose(S224,[1,2,0])
print('\nmark A242= %s' %(A242))
print('mark = %s' %(A224))
print('mark = %s' %(S224))
print('mark = %s' %(S242))


