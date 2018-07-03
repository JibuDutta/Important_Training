#!/usr/bin/python

"""


	Script:left_string.py
	Author:Jiban Dutta
	Date:19-Apr-2017
	Purpose:Return the left most n characters of the string.
"""
def left_string(string,n):
	"""
		This Function(string,n) returns 
		the right most character of a string specified by n .."
	"""	
	return string[:n]

def right_string(string,n):
	"""
		This Function(string,n) returns 
		the left most character of a string specified by n .."
	"""	
	return string[-n:]


def mid_string(string,p,n):
	"""
		This Function(string,p,n) returns 
		the character of a string specified by p,n .."
	"""	
	return string[p:n]	
