

In [5]: from sklearn import preprocessing  
   ...: le =preprocessing.LabelEncoder()  
   ...: le.fit(["paris", "paris", "tokyo", "amsterdam"])  
   ...: print('��ǩ����:%s'% le.classes_)  
   ...: print('��ǩֵ��׼��:%s' % le.transform(["tokyo", "tokyo", "paris"]))  
   ...: print('��׼����ǩֵ��ת:%s' % le.inverse_transform([2, 2, 1]))  
   ...:  
��ǩ����:['amsterdam' 'paris' 'tokyo']  
��ǩֵ��׼��:[2 2 1]  
��׼����ǩֵ��ת:['tokyo' 'tokyo' 'paris']  


