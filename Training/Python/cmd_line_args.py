#!/usr/bin/python

"""


	Script:cmd_line_args.py
	Author:Jiban Dutta
	Date:19-Apr-2017
	Purpose:Example to illustrate command line.

"""
import sys

print "Given command line arguments are as follows "

for arg in sys.argv[1:]:
	print arg
argc = len(sys.argv) - 1	
print "No of Command Line arguments:", argc
