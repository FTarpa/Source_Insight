#!/usr/bin/python3
 
import pymysql
 
# �����ݿ�����
db = pymysql.connect("localhost","root","s0f0s0","test333" )
 
# ʹ��cursor()������ȡ�����α� 
cursor = db.cursor()
 
# SQL ��ѯ���
sql = "SELECT * FROM EMPLOYEE \
       WHERE INCOME > %s" % (1000)
try:
   # ִ��SQL���
   cursor.execute(sql)
   # ��ȡ���м�¼�б�
   results = cursor.fetchall()
   for row in results:
      fname = row[0]
      lname = row[1]
      age = row[2]
      sex = row[3]
      income = row[4]
       # ��ӡ���
      print ("fname=%s,lname=%s,age=%s,sex=%s,income=%s" % \
             (fname, lname, age, sex, income ))
except:
   print ("Error: unable to fetch data")
 
# �ر����ݿ�����
db.close()
