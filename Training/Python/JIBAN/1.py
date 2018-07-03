#!/usr/bin/python

age = int(raw_input("Enter the age"))
if age >=18 and age <= 60:
	print "Elligible for the Job!!!!!"
else:
	print "Not Elligile"
	if age <18:
		print "you are too young"
	else :
		print "Senior Citizen "
