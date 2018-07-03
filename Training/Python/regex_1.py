#!/usr/bin/python

"""


	Script:test.py
	Author:Jiban Dutta
	Date:23-Apr-2017
	Purpose:understanding the difference between 'match()' and 'search()'
			methods

"""
import re


def check_match(string,pattern):
	result = re.match(pattern,string,re.I)
	if result != None:
		print "Pattern Found"
	else:
		print "Pattern Not Found"

def check_search(string,pattern):
	result = re.search(pattern,string,re.I)
	if result != None:
		print "Pattern Found"
	else:
		print "Pattern Not Found"



s1 = "we are learning Python . Python is simple , powerful and ..."
s2 = "Python can be used for Numerical Scitific computing."
#pattern = raw_input("Enter the Pattern to search ")

print "s1 = ",s1	
print "s2 = ",s2	

pattern =raw_input("Enter the pattern to search")

print "Understand match() method"
check_match(s1,pattern)
check_match(s2,pattern)


print "Understand search() method"
check_search(s1,pattern)
check_search(s2,pattern)


