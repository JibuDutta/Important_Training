#!/usr/bin/python

"""


	Script:fibonacci_2.py
	Author:Jiban Dutta
	Date:14-Apr-2017
	Purpose:To Printi Fibonacci No:
	
"""

num1 = 0
num2 = 1

number = int(raw_input("Enter Data:"))
print 0
print 1
while number >=1:
	num3 = num1 + num2
	if num3 >= number:
		break;
	print num3
	num1 = num2;
	num2 = num3;


