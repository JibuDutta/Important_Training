#!/usr/bin/python

"""


	Script:finally_block.py
	Author:Jiban Dutta
	Date:20-Apr-2017
	Purpose:Understanting Indirect Exception ...(Finally Block)
					

"""
from CustFunction import *
import sys

for n in range(9):

	try:
		print divide(10.0,n)
		print "Charcter Index position",n,"is:",charAt('Global',n)

	except: #wild card exception
		print "Some error occurred. . ."
		print "Type",sys.exc_info()[0]
		print "Name",sys.exc_info()[1]
		print "Value",sys.exc_info()[2]
	finally:
		print "Get's executed in all cases..."
