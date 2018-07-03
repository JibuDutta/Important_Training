#!/usr/bin/python

"""


	Script:write2csv.py
	Author:Jiban Dutta
	Date:20-Apr-2017
	Purpose:To write employee details to a CSV file by name emp.csv which have
			the following details:
			EmpID, Name ,Age , Gender and Salary

"""
#step 1

f = open('emp.csv','w')

#step 2
#Accept Employee details and write no more records.
while True:
	#Accepring The Employee details,
	EmpID = raw_input("Enter the Employee ID: ")
	EmpName = raw_input("Enter the Employee Name: ")
	Age = int(raw_input("Enter the Employee Age(In years): "))
	Gender = raw_input("Enter the Gender(M/F): ")
	salary = float(raw_input("Enter the Salary"))

	EmpRecord = "{},{},{},{},{}\n".format(
					EmpID,EmpName,Age,Gender,salary)
	#write the employee record
	f.write(EmpRecord)
	#Asking for continue
	again = raw_input("Another Record(Y/N):")
	if again in 'Nn':
		break
#step 3
f.close()

