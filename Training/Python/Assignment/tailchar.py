#!/usr/bin/python

"""


	Script:tailchar.py
	Author:Jiban Dutta
	Date:20-Apr-2017
	Purpose:Build an utility by name 'tailchar' which will display the contents
	of the given file in reverse order of the character(s)
	The syntax is:tailchar.py [n] <filename>
	If 'n' is not specified it is default to 10 characters.
	Care should be take if 'n' is more than the size of the file.

"""
import sys

if len(sys.argv) < 2 or len(sys.argv) > 3:
	print "tailchar.py [n] <filename>"
	sys.exit(12)
if len(sys.argv) == 3:
	f1 = open(sys.argv[2])
	f1.seek(0,2)
	count = f1.tell()
	n = int(sys.argv[1])

else:
	f1 = open(sys.argv[1])
	f1.seek(0,2)
	count = f1.tell()
	n = 10


while count > 1 and n>1:
	f1.seek(-2,1)	
	print f1.read(1),
	count -= 1 
	n -= 1
f1.close()

