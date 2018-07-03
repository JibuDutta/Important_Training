#!/usr/bin/python

"""


	Script:vowel_const.py
	Author:Jiban Dutta
	Date:15-Apr-2017
	Purpose:count vowel or const in a string
"""
vowel = 0
const = 0
total = 0

string = raw_input("Enter The String:\n")
string_vowel = "AEIOUaeiou"
if string.isalpha():
	for char in string :

#	if (char >='A' and char <='Z') or (char >='a' and char <='z'):

		if char in string_vowel :
			vowel = vowel + 1
		else :
			const = const + 1

total = vowel + const


print vowel
print const

print float(vowel)/total * 100
print float(const)/total * 100
