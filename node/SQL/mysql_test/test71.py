#!/usr/bin/python3
 
import pymysql
 
# �����ݿ�����
db = pymysql.connect("localhost","root","s0f0s0","test333" )
 
# ʹ��cursor()������ȡ�����α� 
cursor = db.cursor()
 
# SQL �������
sql = "UPDATE EMPLOYEE SET AGE = AGE + 1 WHERE SEX = '%c'" % ('M')
try:
   # ִ��SQL���
   cursor.execute(sql)
   # �ύ�����ݿ�ִ��
   db.commit()
except:
   # ��������ʱ�ع�
   db.rollback()
 
# �ر����ݿ�����
db.close()
