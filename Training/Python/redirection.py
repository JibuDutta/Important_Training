#!/usr/bin/python

"""


	Script:redirection.py
	Author:Jiban Dutta
	Date:20-Apr-2017
	Purpose:understanding Redirection from python perspective . 


"""
import sys 
#Remembering the refernce is sys.stdout

stdout_ref = sys.stdout

#opneing a file for redirectining the output.

f = open('output_red.txt','w')
#mapping to the file for redirection the output.
sys.stdout = f

print " This data is sent to the file and not to the screen."
print " Please open the file and check."
#Ensuring 'stdout,' behaves normally.

sys.stdout = stdout_ref
print "Redirection Complete .. Please check The 'output_red.txt' file ."

f.close()

     
