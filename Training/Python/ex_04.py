#!/usr/bin/python

"""


	Script:ex_04.py
	Author:Jiban Dutta
	Date:14-Apr-2017
	Purpose:Demo for selection structure if ... else
			how can we say a candidate is elligible for a job or
			not based on age factor?
	"""

age = int(raw_input("Enter your age (in years):"))

if age >= 18 and age <=60:
		print "Elligible for the Job"
else:
		print "Not Elligible"
		if age < 18:
				print "You are Too Young for the Job"
		elif age > 60:
				print "You are already a Senior Citizen"
				print "Stay at home and relax"

