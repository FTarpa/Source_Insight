

import tensorflow as tf
import numpy as np
import pandas as pd


list_a = [[1,2],[3,4]]
list_b = [[5,6],[7,8]]
list_c = [9, 10]



#list ת����array����

print ('\narray a:', np.array(list_a))
print ('\narray a:', np.array(list_a).T)
print ('\narray b:', np.array(list_b))
print ('\narray c:', np.array(list_c))


#arrayת����dataframe
arr_a = np.array(list_a)
arr_b = np.array(list_b)
arr_c = np.array(list_c)
print ('\ndf a:', pd.DataFrame(arr_a))
print ('\ndf b:', pd.DataFrame(arr_b))
print ('\ndf c:', pd.DataFrame(arr_c))



#dfת����array
df_a = pd.DataFrame(arr_a)
df_b = pd.DataFrame(arr_b)
df_c = pd.DataFrame(arr_c)
print ('\narray a:', df_a.values)
print ('\narray b:', df_b.values)
print ('\narray c:', df_c.values)
print ('\nflatten a:', df_a.values.flatten())
print ('\nSeries a:', pd.Series(arr_c))



list_a = [[1,2],[3,4],[3,4],[3,4],[3,4],[3,4],[9,9]]
list_b = [[1,2],[3,4],[3,4],[3,4],[3,4],[3,4],[9,9]]
list_c = [9, 10, 10, 10, 10, 10, 10]
arr_a = np.array(list_a)
arr_b = np.array(list_b)
arr_c = np.array(list_c)
df_a = tf.data.Dataset.from_tensor_slices((arr_a, arr_b, arr_c))
df_a  = df_a.repeat().shuffle(2).batch(2).prefetch(1)

# �ܹ�ȡ������(����): 
#     shuffle_cnt(2) + prefetch_cnt(1) + batch_size*steps( 2*(2+1)-2)=10
for step, (batch_x1, batch_x2, batch_y) in enumerate(df_a.take(2), 1):
    print("step: %i, \nbatch_x1: %s, \nbatch_x2: %s, \nbatch_y: %s" % (step, batch_x1, batch_x2, batch_y))


#��ά����, ����
#    list_a = [[[1,1],[1,1]],[[2,2],[2,2]],[[2,2],[2,2],[2,2]]]
#    list_b = [[[1,2],[1,2]],[[2,2],[2,2]],[[2,2],[2,2],[2,2]]]
#    list_c = [9, 10, 10]
#    arr_a = np.array(list_a)
#    arr_b = np.array(list_b)
#    arr_c = np.array(list_c)
#    df_a = tf.data.Dataset.from_tensor_slices((arr_a, arr_b, arr_c))
#    df_a  = df_a.repeat().shuffle(2).batch(2).prefetch(1)


#��4��, ������С����һ��
list_a = [[1,2,4],[3,4,4]]
list_b = [[1,2,4],[3,4,4]]
list_c = [[1,2,4],[3,4,4]]
list_d = [9, 10]
arr_a = np.array(list_a)
arr_b = np.array(list_b)
arr_c = np.array(list_c)
arr_d = np.array(list_d)
df_a = tf.data.Dataset.from_tensor_slices((arr_a, arr_b, arr_c, arr_d))
df_a  = df_a.repeat().shuffle(2).batch(2).prefetch(1)

# �ܹ�ȡ������(����): 
#     shuffle_cnt(2) + prefetch_cnt(1) + batch_size*steps( 2*(2+1)-2)=10
for step, (batch_x1, batch_x2, batch_x3, batch_y) in enumerate(df_a.take(2), 1):
    print("\nstep: %i, \nbatch_x1: %s, \nbatch_x2: %s, \nbatch_x3: %s, \nbatch_y: %s" % (step, batch_x1, batch_x2, batch_x3, batch_y))






