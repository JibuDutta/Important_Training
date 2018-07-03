#!/usr/bin/python

"""


			Script:Bank_details.py
			Author:Jiban Krishna Dutta
			Date:21-Apr-2017
			Purpose:Banking Details

"""
from validation import *
from account_details import Account

import os

Accounts_dic = {}

while True:
	os.system("clear")
	
	print """
	
	Banking Operations
	=========================
	1. Open an A/c

	2. Get A/c Details

	3. Performs Transactions
	[Deposit or Withdraw]

	4.Close	an A/c
	
	5.Quit

	"""
	num = get_integer("Enter a number [1-5] :") #getting Input

	if num == 1:#opening an account
		print "Opening an Account"
		account_no = get_integer("Enter the account No:")
		name = get_string("Enter the Name of the Account holder:")
		while True:
			account_type = get_string("Enter the account type:")
			if account_type  == "savings" or account_type  == "current":
				break
			else:
				print "Enter valid account type:"
		account_object = Account(account_no,name,account_type) #create an object of Account
		Accounts_dic[account_no] = account_object #give the value to the dictonary

		print "Account Created Successfully"

	elif num == 2:
		print "Get A/C Details..."
		account_no = get_integer("Enter the account No:")
		if account_no in Accounts_dic:
			print Accounts_dic[account_no]	
		else:
			print "Invalid Acconut No:\nTry again . . "

	elif num == 3:
		while True:
			print \
			"""
			Perform Transaction
			=======================	
			1 : Deposit
			2 : Withdraw
			3 : CheckBalance
			4 : Quit
			"""
			number = get_integer("Enter Your choice :")
			if number == 1:
	   			account_no = get_integer("Enter Your Account No:")
				if account_no in Accounts_dic:
					amount = get_float("Enter The Amount You want to deposit:")
					if amount > 0:
						Accounts_dic[account_no].deposit(amount) 
						print "Total Amount is Credited into your account"
					else:
						print "Enter Valid Amount"
				else:
					print "Invalid Account No:"
					
			elif number == 2:

				account_no = get_integer("Enter Your Account No:")
				if account_no in Accounts_dic:
					amount = get_float("Enter the Amount you want to withdraw:")
					if amount <= Accounts_dic[account_no].getbalance() and amount > 0:
						Accounts_dic[account_no].withdraw(amount)
						print "Amount is withdrawn from your account:"
					else:
						print "Insufficient Balance\nTry again. . . "
				else:
					print "Invalid Account No:"

			elif number == 3:
				account_no = get_integer("Enter Your Account No:")
				if account_no in Accounts_dic:
					 print "Balance Available:",Accounts_dic[account_no].getbalance()
				else:
					print "Invalid Account No:"
				
			elif number == 4:
				break
			else:
				print "Invalid Choice\nTry again . . "	
			

	elif num == 4:
		print "Close an A/C"
		account_no = get_integer("Enter Your Account No:")
		if account_no in Accounts_dic:
			if Accounts_dic[account_no].getbalance() > 0:
				print "Please, Withdraw your Balance Before closing the account  :"
			else:
				Accounts_dic.pop(account_no)
				print "Your account is successfully deleted:"
		else:
			print "Invalid Account No"

	elif num == 5:
		break
	else:
		print "Invalid Choice[Enter Between[1-5]]"
	
	
	dummy = raw_input("Press Enter to Continue... ")
