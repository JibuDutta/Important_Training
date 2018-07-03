#!/usr/bin/python

"""


	Script:mirror_copy.py
	Author:Jiban Dutta
	Date:14-Apr-2017
	Purpose:mirror_copy

"""

f1 = open ('myfile.txt','r')
f2 = open ('mirror.txt','w')

all_line = f1.readlines()

for line in all_line:
	reverse = ''
	for char in line:
		reverse = char + reverse
	f2.writelines(reverse[1:])
	f2.writelines('\n')

f1.close()
f2.close()	
