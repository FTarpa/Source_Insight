

//Ŀ¼[Num][Ca]:
// 1. numpy
Save:node\Pythons\study\Macro_Pythons_numpy.h \[1.1\] numpyģ��
Save:node\Pythons\study\Macro_Pythons_numpy.h \[1.2\] np.array()
Save:node\Pythons\study\Macro_Pythons_numpy.h \[1.3\] arr.shape--------------��״
Save:node\Pythons\study\Macro_Pythons_numpy.h \[1.4\] np.ones----------------��������
Save:node\Pythons\study\Macro_Pythons_numpy.h \[1.5\] np.random.randint------�����
Save:node\Pythons\study\Macro_Pythons_numpy.h \[1.6\] np.eye-----------------�Խ��߾���
Save:node\Pythons\study\Macro_Pythons_numpy.h \[1.7\] ndarray������
Save:node\Pythons\study\Macro_Pythons_numpy.h \[1.8\] arr[1][2]--------------����
Save:node\Pythons\study\Macro_Pythons_numpy.h \[1.9\] arr[0:2]---------------��Ƭ
Save:node\Pythons\study\Macro_Pythons_numpy.h \[1.10\] ::--------------------���ݷ�ת
Save:node\Pythons\study\Macro_Pythons_numpy.h \[1.11\] arr.reshape()---------����
Save:node\Pythons\study\Macro_Pythons_numpy.h \[1.12\] np.concatenate()------����
Save:node\Pythons\study\Macro_Pythons_numpy.h \[1.13\] np.split()------------�з�
Save:node\Pythons\study\Macro_Pythons_numpy.h \[1.14\] a.copy()--------------����
Save:node\Pythons\study\Macro_Pythons_numpy.h \[1.15\] arr1.ravel------------�����ƽ��
Save:node\Pythons\study\Macro_Pythons_numpy.h \[1.16\] np.c_[arr1,arr2,��]----����ϲ�
Save:node\Pythons\study\Macro_Pythons_numpy.h \[1.17\] np.unique-------------��ȡ���鲻�ظ���ֵ
Save:node\Pythons\study\Macro_Pythons_numpy.h \[1.18\] np.sum----------------���
Save:node\Pythons\study\Macro_Pythons_numpy.h \[1.19\] np.max/ np.min--------�����Сֵ
Save:node\Pythons\study\Macro_Pythons_numpy.h \[1.20\] �����ۺϲ���
Save:node\Pythons\study\Macro_Pythons_numpy.h \[1.21\] np.dot()--------------�����
Save:node\Pythons\study\Macro_Pythons_numpy.h \[1.22\] np.sort()-------------����
Save:node\Pythons\study\Macro_Pythons_numpy.h \[1.23\] 
Save:node\Pythons\study\Macro_Pythons_numpy.h \[1.24\] 
Save:node\Pythons\study\Macro_Pythons_numpy.h \[1.25\] 
Save:node\Pythons\study\Macro_Pythons_numpy.h \[1.26\] 



[1.1] numpyģ��
//����ģ��
import numpy as np
//�鿴numpy�汾
np.__version__




[1.2] np.array()
arr1=np.array([1,2,3,4])
//�鿴��������������
type(arr1)
�����numpy.ndarray
1
2
//������ά����
arr2= np.array([[1,2,3],[4,5,6],[7,8,9]])
//������ά����
arry3=np.array([[[1,2,3],[4,5,6],[7,8,9]]])
//numpyĬ��ndarray������Ԫ�ص���������ͬ��
ͳһ�������ȼ���str>float>int




[1.3] arr.shape----------��״
//shape���ص���ndarray��������״(����������Ԫ��)����
�����(3, 3)




[1.4] np.one----------------��������
//np.ones(shape, dtype=None, order=��C��)
arr= np.ones(shape=(2,2),dtype=int) 

np.zeros
//np.zeros(shape, dtype=None, order=��C��)
arr=np.zeros([2,3])

np.full
//np.full(shape, fill_value, dtype=None, order=��C��)
//  ����2��3�е�ȫ����ֵ��Ϊ10�Ķ�ά����
arr=np.full(shape=(2,4),fill_value=10,dtype=int)

np.linspace----------�Ȳ�����
//np.linspace(start, stop, num=50, endpoint=True, retstep=False, dtype=None) 
//  �����ֵΪ0����10��ֵ����ֵΪ9
arr_linspace=np.linspace(start=0,stop=10,num=10,endpoint=False)
arr_linspace
//�����array([ 0.,  1.,  2.,  3.,  4.,  5.,  6.,  7.,  8.,  9.])


np.arange----------һά����
//np.arange([start, ]stop, [step, ]dtype=None)
##�����ֵΪ0����5(10����2)��ֵ����ֵΪ8��ֻ�ܴ���һά����
arr_arange=np.arange(0,10,2)
arr_arange
//�����array([0, 2, 4, 6, 8])




[1.5] np.random.randint----------�����
//np.random.randint(low, high=None, size=None, dtype=��l��)
#����һ���������[10,90)��3��4�ж�ά����
#size=[3]����һ��һά���飬size=[3,4,5]������ά����
#���ԭ�����ݵ�ǰϵͳ��ʱ����������
#���Թ̶����ӣ�ʹ��seed(����)����
#np.random.seed(1) 
np.random.randint(10,90,size=[3,4])


np.random.randn
//np.random.randn(d0, d1, ��, dn) ��׼��̫�ֲ�
#����һ��10��Ԫ�ص�һά����
np.random.randn(10)


np.random.randn----------��ά����
#�紴��10�У�10�е�����
np.random.randn((10,10))


np.random.random
//np.random.random(size=None)
����[0,1)�������


//np.random.random(size=[2,2])
#����һ��2��2�е���ֵ��[0,1)�Ķ�ά����


np.random.rand
//np.random.rand(d0,d1,��dn )
�Ը�������״����һ�����飬���������м�����[0,1)֮����ȷֲ������������
np.random.rand(10)
//1

np.random.rand(2,2)
//1




[1.6] np.eye----------�Խ��߾���
//np.eye(N, M=None, k=0, dtype=float)

#����һ���Խ���Ϊ1�ľ��󣨶�ά���飩
arr_eys=np.eye(4)
arr_eys
�����
array([[ 1.,  0.,  0.,  0.],
       [ 0.,  1.,  0.,  0.],
       [ 0.,  0.,  1.,  0.],
       [ 0.,  0.,  0.,  1.]])



[1.7] ndarray������
4���ؼǲ�����
//ndim��ά��
//shape����״����ά�ȵĳ��ȣ�
//size���ܳ���
//dtype��Ԫ������




[1.8] arr[1][2]----------����
np.random.seed(10)
arr=np.random.randint(10,50,size=(3,4))
arr
//�����
array([[19, 46, 25, 10],
       [38, 35, 39, 39],
       [18, 19, 10, 46]])
#����
arr[1][2]



[1.9] arr[0:2]----------��Ƭ
//��ȡǰ��������
arr[0:2]
//�����
array([[19, 46, 25, 10],
       [38, 35, 39, 39]])
       
//��ȡǰ���е�ǰ��������
arr[0:2,0:2]
//�����
array([[19, 46],
       [38, 35]])


//��ȡ��ά����ǰ��������
arr[:,0:2]
//�����
array([[19, 46],
       [38, 35],
       [18, 19]])




[1.10] ::----------���ݷ�ת
array([0, 1, 2, 3, 4, 5, 6, 7, 8, 9])
arr[::-1]
//�����
array([9, 8, 7, 6, 5, 4, 3, 2, 1, 0])


array([[ 0.,  1.,  2.],
       [ 3.,  4.,  5.],
       [ 6.,  7.,  8.]])
       
//��������е���
arr[::-1]
�����
array([[ 6.,  7.,  8.],
       [ 3.,  4.,  5.],
       [ 0.,  1.,  2.]])
       
//��������е���
arr[:,::-1]
//�����
array([[ 2.,  1.,  0.],
       [ 5.,  4.,  3.],
       [ 8.,  7.,  6.]])
       
//ȫ����
arr[::-1,::-1]
�����
array([[ 8.,  7.,  6.],
       [ 5.,  4.,  3.],
       [ 2.,  1.,  0.]])



[1.11] arr.reshape()--------����
//ʹ��arr.reshape()������ע�������һ��tuple(Ԫ��)��
arr2=arr.reshape((2,5))
arr2.shape
//�����
(2, 5)

//ʹ��-1�Զ���������(������)
arr2=arr.reshape((-1,5))
arr2.shape
//�����
(2, 5)

//����ά������γ�һά����
arr3=arr2.reshape(10)
arr3.shape
//�����
(10,)




[1.12] np.concatenate()--------����
a1=np.array([1,2,3])
np.concatenate([a1,a1])
//�����
array([1, 2, 3, 1, 2, 3])

np.concatenate([a1,a2],axis=0) 
np.concatenate([a1,a2],axis=1) 


np.hstack��np.vstack
ˮƽ�����봹ֱ����������axis������

np.hstack((a1,a2))
//�����
array([[18, 53, 32, 84, 14, 35, 15, 73],
       [93, 28, 41, 26, 90, 16, 58, 51],
       [30, 20, 47,  6, 69, 41,  4, 60]])

np.vstack((a1,a2))
//�����
array([[18, 53, 32, 84],
       [93, 28, 41, 26],
       [30, 20, 47,  6],
       [14, 35, 15, 73],
       [90, 16, 58, 51],
       [69, 41,  4, 60]])




[1.13] np.split()--------�з�
//np.split(arr,�У��кţ���):����2��һ���б�����
//np.vsplit(arr,�У��к�) ˮƽ��
//np.hsplit(arr,�У��к�) ��ֱ��
//  ����ֵ��һ���б�
arr=np.array([[3,2,4],[9,5,8],[2,7,1]])

np.split(arr,[1,2],axis=1)   
//�����
[array([[3],
        [9],
        [2]]), array([[2],
        [5],
        [7]]), array([[4],
        [8],
        [1]])]




[1.14] a.copy()--------����
//���и�ֵ���㲻��Ϊndarray���κ�Ԫ�ش����������Ը�ֵ��Ķ���Ĳ���Ҳ��ԭ���Ķ�����Ч��
a1=a




[1.15] arr1.ravel--------�����ƽ��
// ��C����ʾ���н��б�ƽ
np.ravel(arr��order=��C��)
// ��F����ʾ���н��б�ƽ
arr.racel(order=��F��)
// ����Ӱ��ԭʼ����
b = a.flatten()



[1.16] np.c_[arr1,arr2,��]--------����ϲ�
arr1=np.array([1,2,3,4])
np.c_[arr1,arr1]
//���Ϊ��
array([[1, 1],
       [2, 2],
       [3, 3],
       [4, 4]])


arr2=np.array([[[1,2,3],[4,5,6],[7,8,9]]])
np.c_[arr2,arr2,arr2]
//���Ϊ��
array([[[1, 2, 3, 1, 2, 3, 1, 2, 3],
        [4, 5, 6, 4, 5, 6, 4, 5, 6],
        [7, 8, 9, 7, 8, 9, 7, 8, 9]]])




[1.17] np.unique-------------��ȡ���鲻�ظ���ֵ
//np.unique(ar,return_counts=False)

arr=np.array([11,1,2,3,4,11,3,5])
np.unique(arr,return_counts=True)





[1.18] np.sum--------���

arr=np.linspace(0,10,10,endpoint=False)
//�����
array([ 0.,  1.,  2.,  3.,  4.,  5.,  6.,  7.,  8.,  9.])
np.sum(arr,axis=0)
//�����
45.0


np.sum(arr2,axis=0)
np.sum(arr2,axis=1)




[1.19] np.max/ np.min--------�����Сֵ
np.min(arr2,axis=0)
np.min(arr2,axis=1)


np.mean()--------ƽ��ֵ
np.mean(arr2,axis=0)
np.mean(arr2,axis=1)




[1.20] �����ۺϲ���
Function Name    NaN-safe Version    Description
np.sum    np.nansum    Compute sum of elements
np.prod    np.nanprod    Compute product of elements
np.mean    np.nanmean    Compute mean of elements
np.std    np.nanstd    Compute standard deviation
np.var    np.nanvar    Compute variance
np.min    np.nanmin    Find minimum value
np.max    np.nanmax    Find maximum value
np.argmin    np.nanargmin    Find index of minimum value
np.argmax    np.nanargmax    Find index of maximum value
np.median    np.nanmedian    Compute median of elements
np.percentile    np.nanpercentile    Compute rank-based statistics of elements
np.any    N/A    Evaluate whether any elements are true
np.all    N/A    Evaluate whether all elements are true
np.power ������




[1.21] np.dot()--------�����
x1+x2--------�����
np.linalg.inv()--------�����




[1.22] np.sort()--------����
np.sort(arr) 
np.sort(arr,axis=0)
np.sort(arr,axis=1)


np.partition(a,k)--------��������




[1.23] 




[1.24] 




[1.25] 




[1.26] 




















