#!/usr/bin/python

"""


	Script:regex_2.py
	Author:Jiban Dutta
	Date:23-Apr-2017
	Purpose:understanding the behaviour of 'findall()' method

"""
import re


def check_findall(string,pattern):

	result = re.findall(pattern,string,re.I|re.M)
	

	if len(result) != 0:
		print "Pattern Found"
		print "The matching words are:"
		for word in result:
			print "'{}'".format(word)
	else:
		print "Pattern Not Found"

#s1 = "A big fat cat rather sat on a mat and ate big rat."
#pattern = raw_input("Enter the Pattern to search ")

s1 = """We are learning Python
Python
Python supporrt Numerical and scientific computing
Python can be used for Testing
we can build GUI apps using Python
There are many framework in Python for Web-Development.
and we can lot more in Python
"""



print "s1 = ",s1	

pattern =raw_input("Enter the pattern to search:")

#understanding the behaviour of findall() method(0
check_findall(s1,pattern)




