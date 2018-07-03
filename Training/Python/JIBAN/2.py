#!/usr/bin/python

while True:
	number = int(raw_input("Table of:"))
	count = 1
	while count <=10:
		product = number * count
		print number ,'x', count, '=', product
		count +=1
	
	data = raw_input("Do you Want another input:(y/Y)")
	if data in "yY":
		continue
	else:
		break;
print "Ok Done !!!!!"	
