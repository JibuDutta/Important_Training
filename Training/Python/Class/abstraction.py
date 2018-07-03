#!/usr/bin/python

"""


	Script:abstraction.py
	Author:Jiban Dutta
	Date:22-Apr-2017
	Purpose: Understanding Abstraction in python

"""
class MyTest(object):
	def __init__(self,p1,p2,p3):
		self.public = p1
		self._protected = p2
		self.__private = p3

	def __str__(self):
		return "Public={}\nProtected={}\nPrivate = {}\n".format(
				self.public,self._protected,self.__private)
if __name__	== '__main__':
	obj = MyTest(10,20,30)
	print obj
	print "changing the data in the object directly"
	obj.public +=15
	obj._protected +=20
	print obj
	print "changing the data in the private  directly"
	obj.__private +=20
	print obj


