#!/usr/bin/python

"""


	Script:is_prime.py
	Author:Jiban Dutta
	Date:15-Apr-2017
	Purpose:A given No is Prime or Not


"""
count = 0
def isprime(num):
	for	data in range(1,num+1):
		if num % data == 0:
			global count
			count +=1
	if count == 2:
		return True
	else:
		return False

num = int(raw_input("Enter The Number :"))

if isprime(num):
	print "The No ",num,"is a Prime No"
else:
	print "The No ",num,"is Not a Prime No"
