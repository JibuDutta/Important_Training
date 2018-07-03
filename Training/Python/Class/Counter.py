#!/usr/bin/python

"""


	Script:Counter.py
	Author:Jiban Dutta
	Date:22-Apr-2017
	Purpose:Implementing Class variable(s)

"""
class Counter(object):
	count = 0
	def __init__(self):
		self.__class__.count +=1

	def __del__(self):
		self.__class__.count -=1
	
	#The '@classmethod' tell the following method is a
	#class method;which means it does not require an object
	#for its invocation	and it requires a class name

	@classmethod
	def objectcount(self):
		#print "No of objects:",self.__class__.count
		print "No of objects:",self.count


