#!/usr/bin/python

"""


	Script:validation.py
	Author:Jiban Krishna Dutta
	Date:21-Apr-2017
	Purpose: To accept different type of Input with valid Data


"""
import sys

def get_integer(prompt =''):
	"""
	This will allow the user To accept only Integer

	"""
	while True:
		try:
			number = int(raw_input(prompt))
			break
		except ValueError:
			print "Ooopsss !!! It is Not an Integer. .\nTry again . . "
	return number

def get_string(prompt = ''):
	"""
	This will allow the user to accept string only
	
	"""	
	while True:
		string = raw_input(prompt)
		if string.isalpha():
			break
		else:
			print "Ooopssss !!! It Is not a String."
			print "Try again..."
	return string
					
def get_float(prompt =''):
	"""
	This will allow the user to accept only string

	"""
	while True:
		try:
			number = float(raw_input(prompt))
			break
		except ValueError:
			print "Ooopsss !!! It is not a float\nTry again . . "
	return number

def get_char(prompt = ''):
	"""
	This will allow the to accept only character
	
	"""
	while True:
		char = raw_input(prompt)
		if char.isalpha() and len(char) == 1:
			break;
		else:
			print "Ooopsss !!! It is not a Character\nTry again."
	return char

def get_yes_no(prompt = ''):
	"""
	It will allow the user to get only a 'Y/y' for yes 
	and 'N/y for no
	
	"""
	while True:
		string = raw_input(prompt)
		if string in 'yY'  and len(string) == 1 :
			return True
		elif string in 'nN'  and len(string) == 1 :
			return False
		else:
			print "Enter [y/Y] for Yes and [n/N] for No...\n try again"

def get_multi_string(prompt =''):
	"""
		Allow the user to get multi_line string 
	"""
	try: 
		string2 = ''
		while True:
			string1 = raw_input(prompt)
			string2 = string2 + '\n' + string1
			print "Press (CTRL+D) to exit.."
	except EOFError:
	 	print string2 


#get_yes_no()
#get_multi_string()
"""get_integer()
get_string()
get_float()
get_char()
"""
