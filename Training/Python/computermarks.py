#!/usr/bin/python

"""


	Script:computermarks.py
	Author:Jiban Dutta
	Date:21-Apr-2017
	Purpose:To accept Subject marks and 
			validating

"""

while True:
	try:
		marks = int(raw_input("Marks obtained in Computer Science [0-100]:"))
		break
	except ValueError:
		print "Oops !!!! It is Not an Integer."

if marks >= 0 and marks <=100:
	print "Computer Science Marks:", marks
else:
	#Raise an Exception with message 'marks out of range'
	raise ValueError('Marks is out of Range')
