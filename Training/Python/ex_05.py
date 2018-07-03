#!/usr/bin/python

"""


	Script:ex_05.py
	Author:Jiban Dutta
	Date:14-Apr-2017
	Purpose:Example of iterative
"""
number = int(raw_input("TAble of :"));
count = 1

while count <=10:
		product = number * count
		print number, 'x',count,'=',product
		count += 1
print "Thats It !!!!"
