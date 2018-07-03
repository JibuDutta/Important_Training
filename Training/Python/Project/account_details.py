#!/usr/bin/python

"""


	Script:account_details.py
	Author:Jiban Dutta
	Date:21-Apr-2017
	Purpose:Building a simple Banking App which uses the 'Account'
			class. You have to identify the attributes and the Methods.
			the class should have two methods by name 'deposit' and 'withdraw'
			which will help the computer operartor to perform basic banking
			transaction.
		
			Banking Operations
		=========================
		1. Open an A/c
		
		2. Get A/c Details
		
		3. Performs Transactions
		   [Deposit or Withdraw]

		4.Close	an A/c

		5.Quit
	
"""

class Account (object):
	"""
	Has attributes like Account_No,Name,acc_type,Balance
	
	"""
	def __init__(self,account_no,name,account_type,balance = 0):
		"""
		Instance Variable are : Account No, Name, Type,Balance
		"""
		self.account_no = account_no
		self.name = name
		self.account_type = account_type
		self.balance = balance

	def get_account_no(self):
		"""
			return the account No.
		"""
		return self.account_no 

	def get_name(self):
		"""
			return the name of the account holder
	  	"""
		return self.name

	def get_account_type(self):
	 	"""
	   	return the account type
  		"""
		return self.account_type

	def getbalance(self):
 		"""
		return the balance available
		
		"""
		return self.balance

	def	deposit(self,amount):
		"""
			To deposit the balance
		"""
		self.balance = self.balance + amount
		return self.balance
	def	withdraw(self,amount):
		"""
			To deposit the balance
		"""
		self.balance -= amount
		return self.balance

	def get_details(self):
		"""
			To Print the Details of the Account
		"""
		print "account_Number:",self.account_no
		print "Name:",self.name
		print "account_type:",self.account_type
		print "Balance:",self.balance

	def __str__ ( self ):
		"""
			The String Representation Of the Object
		"""
		return "Account_No :{}\nName :{}\nAccount_type :{}\nBalance :{}\n".format(
				self.account_no,self.name,self.account_type,self.balance)
