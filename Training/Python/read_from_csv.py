#!/usr/bin/python

"""


	Script:read_from_csv.py
	Author:Jiban Dutta
	Date:20-Apr-2017
	Purpose:To read employee details  from CSV file by name emp.csv which have
			the following details:
			EmpID, Name ,Age , Gender and Salary

"""
#step 1

f = open('emp.csv')

#step 2
#Read Employee record and processed

for EmpRecord in f:
	#Accepring The Employee details,
	#print EmpRecord,
	
	emp_Rec_List = EmpRecord.strip().split(',')
	print "Emp_ID:",emp_Rec_List[0]
	print "Emp_Name:",emp_Rec_List[1]
	print "Age:",emp_Rec_List[2] ,"Years"
	if emp_Rec_List[3] in 'mM':
		gender = 'Male '
	elif emp_Rec_List[3] in 'fF':
		gender = 'Female'
	else:
		gender = 'Other'
	print "Gender:",gender
	print "Salary:",emp_Rec_List[4] ,'in INR'
	


#step 3
f.close()

