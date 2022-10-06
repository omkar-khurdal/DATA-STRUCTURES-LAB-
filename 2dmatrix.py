"""write a python program to read and display the matrix
Done by omkar sukdev khurdal (28)
Date:3rd oct 2022
"""

m = []
r = int(input("enter the number of rows:"))
c = int(input("enter the number of columns:"))
for i in range(r):
	A=[]
	for j in range(c):
		A.append(int(input("enter the elements:")))
	m.append(A)

for i in range(r):
	for j in range(c):
		print(m[i][j],end=" ")
	print()
		





		
		
	
