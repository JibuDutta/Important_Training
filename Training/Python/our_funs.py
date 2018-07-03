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


#calling the Function. . 
P = float(raw_input("Enter Principle amount : "))
T = float(raw_input("Enter Period(IN Years) : "))
R = float(raw_input("Enter Rate of Interest : "))

result = simple_interest(P,R,T)
print "Simple Interest :", result	

print "Understanding the behaviour of summing function. . "

print "Sum is  = " ,summing(1,2,3)
print "Sum is  = " ,summing(1,2,3,4)
print "Sum is  = " ,summing(1,2,3,4,5)
print "Sum is  = " ,summing(1,2,3,4,5,6)
