#!/usr/bin/python

"""


	Script:.py
	Author:Jiban Dutta
	Date:20-Apr-2017
	Purpose:To read the numeric data from a file by name 'numeric.txt'
	and find the reciprocal
"""
import sys

try:
	f = open('numbers.txt')
#	f = open('num.txt')
	number = int(f.readline())
	print "Reciprocal of",number,"is:", 1/number

except IOError as e:
	print "File Openning Error..."
	print e
	sys.exit(12)
except ValueError as e:
	print "Unable to convert to an integer "
	print e
	sys.exit(14)
except: 	#A wild Card Exception
	print "Some error occured "
	print "Exception Type: ",sys.exc_info()[0]
	print "Exception Name: ",sys.exc_info()[1]
	print "Exception value: ",sys.exc_info()[2]
	sys.exit(16)
