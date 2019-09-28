﻿#!/usr/bin/python3
 
import pymysql
 
# 打开数据库连接
db = pymysql.connect("localhost","root","s0f0s0","jiebanew" )
 
# 使用 cursor() 方法创建一个游标对象 cursor
cursor = db.cursor()
 
# 使用 execute() 方法执行 SQL，如果表存在则删除
cursor.execute("DROP TABLE IF EXISTS data_utf8_csv")
 
# 使用预处理语句创建表
sql = """CREATE TABLE data_utf8_csv (
         DTXT  VARCHAR(255) NOT NULL,
         DCNT  INT(10) DEFAULT NULL,
         DCXO VARCHAR(255) DEFAULT NULL,
         DCXN VARCHAR(255) DEFAULT NULL)
         ENGINE=InnoDB DEFAULT CHARSET=utf8"""

cursor.execute(sql)
 
# 关闭数据库连接
db.close()
