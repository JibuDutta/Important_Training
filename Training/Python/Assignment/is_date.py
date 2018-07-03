#!/usr/bin/python

"""


	Script:is_date.py
	Author:Jiban Dutta
	Date:18-Apr-2017
	Purpose:Test a date is valid or Not

"""

month = { 'Jan':31,'Feb':28,'Mar':31,'Apr':30,'May':31,'Jun':30,'Jul':31,'Aug':31,'Sep':30,'Oct':31,'Nov':30,'Dec':31}

def is_leap(year):
	if year % 400 == 0:
		return True
	if year % 100 == 0:
		return False
	if year % 4 == 0:
		return True
	else:
		return False

def is_date(date_string):

	list1 = date_string.split('-')
	if len(list1) == 3:
		if list1[2].isdigit() and int(list1[2]) >= 1000 and int(list1[2]) <= 9999:
			if is_leap(int(list1[2])):
				month['Feb'] = 29
			if list1[1] in month.keys() and list1[0].isdigit() and int(list1[0])<=month[list1[1]]:
		 		return True
			else:
			 	return False
		else:
	 		return False
	else:
		return False   

date_string = raw_input("Enter the Date (dd-mm-yyyy):")	

if is_date(date_string):
	print " This is a Valid Date :"
else:	
	print " This is Not a Valid Date : "
