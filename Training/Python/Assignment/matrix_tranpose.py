#!/usr/bin/python

"""


	Script:matrix_transpose.py
	Author:Jiban Dutta
	Date:17-Apr-2017
	Purpose:Transpose Of a given matrix

"""
matrix_A = []
matrix_B = []

row = int(raw_input("Enter the row of the Matrix_A : "))
col = int(raw_input("Enter the col of the Matrix_A : "))

for i in range(row):
	one_D = [] 
	for j in range(col):
		one_D.append(int(raw_input("Enter the of the Matrix : ")))
	matrix_A.append(one_D)
print matrix_A	 

for i in range(row) :
	one_D = []
	for j in range(col):
		one_D.append(matrix_A[j][i])
	matrix_B.append(one_D)

print matrix_B
