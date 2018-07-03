#!/usr/bin/python

"""


	Script:path_exapl.py
	Author:Jiban Dutta
	Date:17-Apr-2017
	Purpose:To displayed the list of the directories which will be searched 
			foe executable

"""
import os

dir_str = os.environ['PATH']
dir_list = dir_str.split(':')

print " The List of Directories"
	
for d in dir_list :
	print d

print "Shell Name:",os.environ['SHELL']
print "Home Directory:",os.environ['HOME']
