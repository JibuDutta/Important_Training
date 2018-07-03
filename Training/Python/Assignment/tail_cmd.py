#!/usr/bin/python

"""


	Script:tail_cmd.py
	Author:Jiban Dutta
	Date:20-Apr-2017
	Purpose:tail command

"""
import sys
if len(sys.argv) != 2:
	print " executable <file_name>"
	sys.exit(12)

f1 = open(sys.argv[1])
	
total_line = f1.readlines()
count = len(total_line)

if count <= 10:
	for line in total_line:	
		print line,
else:
	for line in range(count-10,count):
		print total_line[line],

f1.close()
