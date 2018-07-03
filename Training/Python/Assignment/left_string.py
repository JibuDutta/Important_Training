#!/usr/bin/python

"""


	Script:left_string.py
	Author:Jiban Dutta
	Date:19-Apr-2017
	Purpose:Return the left most n characters of the string.
"""
def left_string(string,n):
	"""
		This is left most return Character string
	"""	
#	print left_string.__doc__ 
	return string[:n]

def right_string(string,n):
	return string[-n:]


def mid_string(string,p,n):
	return string[p:n]	

string = raw_input("Enter the String :")
n = int(raw_input("Enter the No: "))
p = int(raw_input("Enter the No: "))

print left_string(string,n)
print right_string(string,n)
print mid_string(string,p,n)
