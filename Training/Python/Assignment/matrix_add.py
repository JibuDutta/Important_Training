#!/usr/bin/python

"""


	Script:matrix1.py
	Author:Jiban Dutta
	Date:17-Apr-2017
	Purpose:MATRIX ADDITION
	"""

matrix_A = []
matrix_B = []
matrix_C = []

row1 = int(raw_input("Enter the No. of row of Matrix_A :"))	
coloum1 = int(raw_input("Enter the No. of Coloum of Matrix_A :"))

row2 = int(raw_input("Enter the No. of row of Matrix_B :"))	
coloum2 = int(raw_input("Enter the No. of Coloum of Matrix_B :"))

#if row1 == row2  and coloum1 == coloum2 :
for i in range(row1):
	one_D = []
	for j in range(coloum1):
		one_D.append(int(raw_input("Enter the Data for Matrix_A: ")))
	matrix_A.append(one_D)	
print matrix_A	

for i in range(row2):
	one_D = []
	for j in range(coloum2):
		one_D.append(int(raw_input("Enter the Data for Matrix_B:")))
	matrix_B.append(one_D)	
print matrix_B	

for i in range(row1):
	one_D =[]
	for j in range(coloum1):
		one_D.append( matrix_A[i][j] + matrix_B[i][j])
	matrix_C.append(one_D)	   
print matrix_C



