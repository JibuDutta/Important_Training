#!/usr/bin/python

"""


	Script:isleap.py
	Author:Jiban Dutta
	Date:18-Apr-2017
	Purpose:To test a year is Leap year or Not . . .
"""


def isleap(year):
	if year%400 == 0:
		return True
	if year%100 == 0:
   		return False
	if year%4 == 0:
		return True
	else:
		return False


year = int (raw_input("Enter The Year : "))

if isleap(year):
	print "The Year",year,"is a Leap Year"
else:
	print "The Year",year, "is Not a Leap year"
