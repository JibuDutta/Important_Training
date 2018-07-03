#!/usr/bin/python

"""


Script:reverse.py
	Author:Jiban Dutta
	Date:15-Apr-2017
	Purpose:A given string is pallindrome or Not
"""

string = raw_input("Enter the String\n")

rev_string = ''

for char in string :
	rev_string = char + rev_string


if rev_string == string :
	print "Pallindrome"
else :
	print "Not a Pallindrome"

	
