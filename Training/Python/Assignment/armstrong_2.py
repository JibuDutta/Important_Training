#!/usr/bin/python

"""


	Script:armstrong_2.py
	Author:Jiban Dutta
	Date:14-Apr-2017
	Purpose:To Print Armstrong 1 to 500
	
"""

digit = 0

for data in range(1,501):
	sum_digit = 0
	temp = data
	while data > 0:
		digit = data % 10
		sum_digit += digit * digit * digit
		data = data/10

	if sum_digit is temp :
		print temp


