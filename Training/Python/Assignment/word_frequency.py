#!/usr/bin/python

"""


	Script:word_frequency.py
	Author:Jiban Dutta
	Date:20-Apr-2017
	Purpose:Build an utility by name 'wf' abbrevated as "word frequencey"
			which should find the frequency of words for the given text file.
			Care should be taken between uppercase, title-case and lowercase
			words.


"""
import sys
dic = {}
if len(sys.argv) != 2:
	print "./executable_Name <fileName>"
	sys.exit(12)

f1 = open(sys.argv[1])

all_lines = f1.read().split()	

for line in all_lines:
	count += 1 
else:
	
f1.close()	
