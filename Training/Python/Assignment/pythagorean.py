#!/usr/bin/python

"""


	Script:pythagorean.py
	Author:Jiban Dutta
	Date:18-Apr-2017
	Purpose:Function Which will return all the pythagorean Triple(as Tuple(s))
			for the specified limit passed  as an argument.


"""
triple = []
def pythagorean(limit):
	for a in range(1,limit+1):
		for b in range(1,limit+1):
			for c in range(1,limit+1):
				if (a*a) + (b*b) == (c*c):
					triple.append((a,b,c))
					
	return triple

limit = int(raw_input("Enter the Range:"))	
pythagorean(limit)
print triple
