#!/usr/bin/python

"""


	Script:our_func.py
	Author:Jiban Dutta
	Date:18-Apr-2017
	Purpose:Define An invoke the user-defined function.

"""

def simple_interest(P,R,T):
	"""
	Compute and Return Simple Interest. . 
	"""
	SI = (P * R * T)/100.0
	return SI

def summing(*args):
	"""
	Return the sum of the arguments passed
	"""
	s = 0
	for data in args:
		s += data
	return s


def left_string(string,n):
	"""
	Return 	the left string  . . "
	"""
	return string[:n]
