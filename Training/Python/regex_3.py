#!/usr/bin/python

"""


	Script:regex_3.py
	Author:Jiban Dutta
	Date:23-Apr-2017
	Purpose:To understand the re.sub
			Program
"""
import re

s1 = "Hello World. We live in this world."
print "s1 = ",s1
find_what = raw_input("Find What ?:")
replace_with =raw_input("replace with:")

s2 = re.sub(find_what,replace_with,s1,flags = re.I)

print "After substitution"
print "s2 = ",s2


