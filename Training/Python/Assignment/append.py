#!/usr/bin/python

"""


	Script:append.py
	Author:Jiban Dutta
	Date:20-Apr-2017
	Purpose:Build an utiltity by name 'append.py' which will enable to the
	user to append the contents of the source file to the target file.
	Syntax:append.py [source] <target>
	If the source is not specified the data should be taken from
	stdin and then appened.


"""
import sys

if len(sys.argv) < 2 or len(sys.argv) > 3:
	print " append.py [source] <target> "
	sys.exit(12)

if len(sys.argv) == 3:
	f1 = open(sys.argv[1],'r')
	lines = f1.read()
	f2 = open(sys.argv[2],'a')
	f1.close()
	f2.write(lines)
	f2.close()

else:
	f1 = open(sys.argv[1],'a')
	while True:
		str1 = raw_input("Want to Continue append the data[Y/N]:")
		if str1 in 'yY':
			string = raw_input("Enter the Data which you want to add:")
			f1.write(string+'\n')
		else:
			break
	f1.close()

