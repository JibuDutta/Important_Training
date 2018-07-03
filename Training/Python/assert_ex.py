#!/usr/bin/python

"""


	Script:assert_ex.py
	Author:Jiban Dutta
	Date:14-Apr-2017
	Purpose:Understanding assertions in python
"""
def fact(n):
		assert n >= 0,"Cannot be Negative"
		if n == 0 or n == 1:
			return 1
		else:
			return  n * fact(n-1)

num = int(raw_input("Enter a No:"))
print "Factorial of",num,"is",fact(num)
"""
Method ----1
if num >= 0:
	print "Factorial of",num,"is",fact(num)
else:
	print "Ooopss!!!!! Factorial of Negative No is not Possible:"

"""

