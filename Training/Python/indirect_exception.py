#!/usr/bin/python

"""


	Script:indiect_exception.py
	Author:Jiban Dutta
	Date:20-Apr-2017
	Purpose:Understanting Indirect Exception

"""
from CustFunction import *
import sys

try:
	print divide(10.0,3)
	print divide(12,0)

	print "Charcter Index position '2' is :",charAt('Global',2)
	print "Charcter Index position '9' is :",charAt('Global',9)

except: #wild card exception
	print "Some error occurred. . ."
	print "Type",sys.exc_info()[0]
	print "Name",sys.exc_info()[1]
	print "Value",sys.exc_info()[2]
