#!/usr/bin/python

"""


	Script:inheritance.py
	Author:Jiban Dutta
	Date:22-Apr-2017
	Purpose: Understanding INHERITANCE in python

"""
from person import person

class Employee(person):#inheritance the features of the 'Person' class
	def __init__ (self,ID,name,age,gender,salary):
		self.ID = ID
#	person.__init__(self,name,age,gender)
		self.name = name
		self.age = age
		self.gender = gender
		self.salary = salary
	def __str__(self):
#		n = self.getname()
#	   	a = self.getage()
#		g = self.getgender()	 
		return "ID={}\nName={}\nAge={}\nGender ={}\nSalary={}".format(self.ID,
				self.name,self.age,self.gender,self.salary)
