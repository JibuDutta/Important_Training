#!/usr/bin/python

"""


	Script:validated_int.py
	Author:Jiban Dutta
	Date:20-Apr-2017
	Purpose:Example of iterative 
			validating

"""

while True:
	try:
		number = int(raw_input("Table of :"));
		break
	except ValueError:
		print "Oops !!!! It is Not an Integer."

count = 1
while count <=10:
		product = number * count
		print number, 'x',count,'=',product
		count += 1
print "Thats It !!!!"
