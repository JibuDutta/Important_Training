#!/usr/bin/python

"""


	Script:armstrong.py
	Author:Jiban Dutta
	Date:14-Apr-2017
	Purpose:To Check a No is Armstrong or Not

	
"""
sum_digit = 0
digit = 0
number = int(raw_input("Enter the No:"))
temp = number
while number >0:
	digit = number % 10
	sum_digit += digit * digit * digit
	number = number/10

if sum_digit is temp :
	print temp, "is amstrong "
#	print " The No = %d Is ARMSTRONG " % (temp)
else:
	print " The No = %d Is NOT ARMSTRONG " % (temp)


