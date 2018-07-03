#!/usr/bin/python

"""


	Script:reverse_string.py
	Author:Jiban Dutta
	Date:19-Apr-2017
	Purpose:reverse the string
"""

def reverse_string(string):
	"""
	To Reverse a Given String .

	"""	
	reverse = ''
	for ch in string:
		reverse = ch + reverse
	return reverse



def count_vowels(string):
	"""
		To Count The No of Vowels in a given String .
	"""
	vowel ='AEIOUaeiou'
	count = 0
	for char in string:
		if char in vowel:
			count = count + 1
	return count
		
def count_consonants(string):		
	"""
		This Function returns the No of Consonants in given string
	"""
	vowel ='AEIOUaeiou'
	count = 0
	for char in string:
		if char not in vowel and char.isalpha():
			count = count + 1
	return count
def factorial(num):
	""" 
		This Function return the Factorial of a Given No.
		If The No is Negative Then, Factorial of that No is Not possible 
	
	"""
	if num == 0 or num == 1:
		return 1
	else:
		return num * factorial(num-1)
			
