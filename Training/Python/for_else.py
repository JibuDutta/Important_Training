#!/usr/bin/python

"""


	Script:for_else
	Author:Jiban Dutta
	Date:14-Apr-2017
	Purpose:Understand the behaviour of  'else' clause
"""
print "start"
for data in range(1,11):
		print data
		if data == 7:
			break
else:
		print "The loop is normaly terminated"

print "END"
