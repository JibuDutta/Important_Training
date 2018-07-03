#!/usr/bin/python

"""


	Script:is_armstrong.py
	Author:Jiban Dutta
	Date:15-Apr-2017
	Purpose:A given No is Armstrong or Not
"""

def is_armstrong(num,cnt):
	result = 0
	num1 = num;
	while num1 != 0:
		
		remainder = num1 % 10
		result += remainder ** cnt
		num1 = num1/10

	if result == num:
		return True
	else:
		return False
num = raw_input("Enter the Number: ")
cnt = len(num)

if is_armstrong(int(num),cnt):
	print "The No is ",num,"Armstrong No"
else:	
	print "The No is ",num,"Not a Armstrong No"

