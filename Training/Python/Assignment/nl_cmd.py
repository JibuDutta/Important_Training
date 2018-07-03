#!/usr/bin/python

"""


	Script:nl_cmd.py
	Author:Jiban Dutta
	Date:20-Apr-2017
	Purpose:nl command

"""
import sys
if len(sys.argv) != 2:
	print " executable <file_name>"
	sys.exit(12)

f1 = open(sys.argv[1])
	
total_line = f1.readlines()
count = len(total_line)
num = 1
for line in range(count):
	if total_line[line] != '\n':
		print num, total_line[line],
		num = num + 1
	else:
		print total_line[line],
f1.close()
