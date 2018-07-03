#!/usr/bin/python

"""


	Script:prime.py
	Author:Jiban Dutta
	Date:14-Apr-2017
	Purpose:Test a No is Prime or Not
"""
count = 0
number = int(raw_input("Enter A No:"))
for data in range(1,number+1):
		if number % data == 0:
			count = count + 1
if count == 2:
	print "The No = %i Is Prime" % (number)
else:
	print "The No = %i is NOT PRIME" % (number)	

