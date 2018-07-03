#!/usr/bin/python

"""


	Script:my_tac.py
	Author:Jiban Dutta
	Date:19-Apr-2017
	Purpose:Tac Comment . .
"""
import sys

f = open(sys.argv[1])

all_lines = f.readlines()
all_lines.reverse()

for line in all_lines:
	print line	

f.close()
