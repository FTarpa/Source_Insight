#!/usr/bin/python3
#coding=utf-8

import time;  # ����timeģ��
import calendar
import datetime

ticks = time.time()
print ("��ǰʱ���Ϊ:", ticks)


cal = calendar.month(2016, 1)
print ("�������2016��1�·ݵ�����:")
print (cal)

i = datetime.datetime.now()
print ("��ǰ�����ں�ʱ���� %s" % i)


#    ��ǰʱ���Ϊ: 1556783534.2755892
#    �������2016��1�·ݵ�����:
#    	January 2016
#    Mo Tu We Th Fr Sa Su
#    			 1	2  3
#     4	5  6  7  8	9 10
#    11 12 13 14 15 16 17
#    18 19 20 21 22 23 24
#    25 26 27 28 29 30 31
#
#    ��ǰ�����ں�ʱ���� 20190502 15:52:14.275589



