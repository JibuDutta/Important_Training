#!/usr/bin/python

"""


	Script:CRDU_Operation.py
	Author:Jiban Dutta
	Date:18-Apr-2017
	Purpose:CRDU operation
""" 
import os
RTO = {}
while True:
	os.system('clear')
	print """ 
			CRDU OPERATIONS
			===================
			1:Create

		   	2:Read

		   	3:Update

		   	4:Delete
			
			5:Quit

	"""		
	
	choice = int(raw_input("Enter Your Choice [1-5]:"))
	
	if choice == 1:
		state_code = raw_input("ENTER State Code :")
		if state_code not in RTO:
			state_Name = raw_input("Enter the State Name :")
			RTO[state_code] = state_Name # for Mapping
		else:
			print "State_Code:",state_code," ALREADY Exists . . . ."


	elif choice == 2 :
		#read Selected
		state_code = raw_input("Enter State Code :")
		if state_code in RTO:
			print "State_Name:", RTO[state_code]
		else:
			print "StateCode",state_code,"Not Found in the List . . ."



	elif choice == 3 :
		state_code = raw_input("Enter the StateCode ")
		if state_code in RTO:
			print "StateCode",RTO[state_code]
			new_state_name = raw_input("Enter the New State Name:")
			confirm = raw_input("Sure to update [Y/N] :")
			if confirm in "Yy":
				RTO[state_code] = new_state_name
				print "Update Completed . . . "
		else:
			print "StateCode" ,state_code,"Not Found. . . "

				



	elif choice == 4 :	
		state_code = raw_input("Enter The State_Code:")
		if state_code in RTO:
			confirm = raw_input("Sure to Deleted [Y/N] :")
			if confirm in "Yy":
				RTO.pop(state_code)
				print "StateCode is Deleted . . ."
		else:
			print "StateCode" ,state_code,"Not Found. . . "

	elif choice == 5 :
		break
	else:
		print "Invalid Choice...."	

	dummy = raw_input(" Press Enter to Continue . . .")	
