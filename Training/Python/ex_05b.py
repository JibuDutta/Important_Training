#!/usr/bin/python

"""


	Script:ex_05b.py
	Author:Jiban Dutta
	Date:14-Apr-2017
	Purpose:Example of iterative nested loops
			and infinite loop.
			using 'contunue'
"""


while True:

	number = int(raw_input("TAble of :"));
	count = 1

	while count <=10:
			product = number * count
			print number, 'x',count,'=',product
			count += 1

	again  = raw_input('Another table[Y/N]:')

	#if again == 'Y' or again == 'y':
	if again in 'Yy':
		continue
	else:
		break



print "Thats It !!!!"
