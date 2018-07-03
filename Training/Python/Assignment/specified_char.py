#!/usr/bin/python

"""


	Script:specified_char.py
	Author:Jiban Dutta
	Date:19-Apr-2017
	Purpose:Function which will print the specified character
   			The specified no of time
		  	The default char is '*' and no is 40

"""

def character(char = '*',num = 40 ):
	for data in range(num):
		print char,

string = raw_input("You want user defined or default(Enter[u/U] or[d/D] ")

if string in 'uU':
	s1 = raw_input("Do You Want to Give Char(Y/N)...")
	if s1 in 'yY':
		char = raw_input("Enter the Char:")
		s2 = raw_input("Do You Want to Give Number (Y/N)...")
		if s2 in 'Yy':
			num = int(raw_input("Enter the Number:"))
 			character(char,num)
		else:
			character(char)	
	else:
		s3 = raw_input("Do You Want to Give Number (Y/N)...")
		if s3 in 'Yy':
			num = int(raw_input("Enter the Number:"))
 			character(num=num)
		else:
			character()
else:
	character()

