#!/usr/bin/python

"""


	Script:prime.py
	Author:Jiban Dutta
	Date:14-Apr-2017
	Purpose:Print prime no toa range
"""
count = 0

limit = int(raw_input("Enter The Limit:"))

for data in range(2,limit):
	for k in range(2,data-1):
		if data % k == 0:
			break;
	else:
		print data 
