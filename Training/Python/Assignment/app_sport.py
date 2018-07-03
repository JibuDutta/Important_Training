#!/usr/bin/python

"""
		Script:app_sports.py
		Author:Jiban Dutta
		Date: 18-Apr-2017
		Purpose:Build an Application which takes the names of the Team
	   	Members holds them in an appropriate data structure. The app should
		take names of teams like cricket Football




"""

list2 = []
string = "Yy"
number = int(raw_input("Enter The No of Player: "))

for data in range(number):

	 list1 = []
	 list1.append(raw_input("Enter The Name :"))
	 list1.append(raw_input("Plays Cricket (Y/N) :"))
	 list1.append(raw_input("Plays Football (Y/N) :"))
	 list2.append(list1)
print list2

for data in list2:
	if data[1] in string and data[2] in string:
		print  "Plays Both"
	if data[1] in string and data[2] not in string:
		print  "Plays only Cricket"
	if data[1] not in string and data[2] in string:
		print "Plays Only Football"	
	if data[1] not in string and data[2] not in string:
		print "Not Playing Any Games"

