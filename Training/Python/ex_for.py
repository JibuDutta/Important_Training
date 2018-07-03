#!/usr/bin/python

"""


	Script:ex_for.py
	Author:Jiban Dutta
	Date:14-Apr-2017
	Purpose:Example of iterative 'for'
	generate multiplication table
"""
number = int(raw_input("TAble of :"));
for count in range(1,11):

		product = number * count
		print number, 'x',count,'=',product

print "Thats It !!!!"
