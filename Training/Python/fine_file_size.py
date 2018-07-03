#!/usr/bin/python

"""


	Script:test.py
	Author:Jiban Dutta
	Date:20-Apr-2017
	Purpose:First Program

"""
import sys 
if len(sys.argv) != 2:
	print "usage find_file_size.py "
	sys.exit(12)

f = open(sys.argv[1])

f.seek(0,2)

cnt = f.tell()

print "File Size:(in Bytes):", cnt	

f.close()
