#!/usr/bin/python

"""


	Script:reverse.py
	Author:Jiban Dutta
	Date:17-Apr-2017
	Purpose:Stack Implementation
""" 
import os
stack = []
while True:
	os.system('clear')
	print """ STACK OPERATIONS
			===================
			1:Push

		   	2:Pop

		   	3:Display

		   	4:Quit"
	"""		
	
	choice = int(raw_input("Enter Your Choice [1-4]:"))
	if choice == 1:
		input_data=int(raw_input("ENTER DATA to Push :"))
		stack.append(input_data)

	elif choice == 2:
		if stack == []:
			print "NOTHING TO POP()"

		else:
			item =stack.pop()
			print "Poped data is", item
	elif choice == 3 :	
		if len(stack) == 0:
			print "Empty Stack"
		else:	
			print stack
	elif choice == 4:
		break
	else:
		print "Invalid Choice...."	

	dummy = raw_input(" Press Enter to Continue . . .")	
