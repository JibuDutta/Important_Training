#!/usr/bin/python

"""


	Script:person.py
	Author:Jiban Dutta
	Date:20-Apr-2017
	Purpose:First Program of class
			ADT for 'Person' with attributes like name age gender

"""
class person(object):
	"""
	Has attributes like name,age,gender
	ShowPersonDetails()
	"""
	#similar to constractor in other prog. language

	def __init__(self,name ='No Name',age = 0,gender = 'X'):
		"""
			Instance Variable are : Name ,age, Gender
		"""
		self.name = name
		self.age = age
		self.gender = gender

	#	getters and setters
	def getname(self):
   		"""
		return the person Name.
		"""
		return self.name
	def getage(self):
   		"""
		return the person age.
		"""
		return self.age
	def getgender(self):
   		"""
		return the person gender.
		"""
		return self.gender
		
	def setname(self,name):
   		"""
		set the person name.
		"""
		self.name = name
	def setage(self,age):
   		"""
		set the person age.

		"""
		self.age = age

	def setgender(self,gender):
   		"""
		set the person gender.
		"""
		self.gender = gender

	def showPersonDetails(self):
		"""
			Display Person Details
		"""
		print "Name :",self.name
		print "age :",self.age
		print "Gender :",self.gender

	#destructor __del__
	def __del__(self):
	   	"""
	   	The Person's destructor method.
		"""
		print "Person is NoMore"

	def __str__ ( self):
		"""
		The String Representation of the object"
		"""
		return "Name : {}\nAge:{}\nGender:{}\n".format(
				self.name,self.age,self.gender)
