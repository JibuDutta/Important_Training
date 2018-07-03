#!/usr/bin/python

"""


	Script:is_ipaddr.py
	Author:Jiban Dutta
	Date:18-Apr-2017
	Purpose:A Check IP address is valid or Not

"""

def is_ipaddr(string):
	list1 = string.split('.')
	if len(list1) == 4 :
		for data in list1:
			if not data.isdigit() or  int(data) < 0 or int(data) >255:
				return False
		else:
			return True
	else:
		False

string = raw_input("Enter the IP address: ")	
if is_ipaddr(string):
	print "valid IP address"
else:	
	print "Invalid IP address "
