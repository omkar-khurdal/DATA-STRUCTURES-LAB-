A = [];
l = int(input("how many students ? "))
for i in range( l):
        print("\t\t1 : accept FDS MARKS ")
        print("\t\t2 : average FDS MARKS ")
        print("\t\t3 : higest and lowest score of class")
        print("\t\t4 : Count of student who were abset for the test ")
        print("\t\t5 : display of marks with highest frequency FDS MARKS ")
        print("\t\t6 : quit ")

        ch =  int(input("enter your choice: "))
        if (ch == 6):
            print("end of program")
            quit()
        elif (ch ==1):
            accept_Marks(FDS_marks)
            display(FDS_marks)
        elif (ch == 2):
            findAverageScore(FDS_marks)
        elif (ch == 3):
            find_Highest_lowest(FDS_marks)
        elif (ch == 4):
            countofabsent(FDS_marks)
        elif (ch == 5):
            markwithhigestfreq(FDS_marks)
        else:
            print("wrong")


def accept_Marks():
	n = int(input("how many students ? "))
	for i in range (l):
		c = input("enter the marks: ")
		if (c == 'AB'):
			c = -1
	A.append(c)

def display():
	for i in range(l):
		print("The marks of students is %d",A[i])
accept_Marks()
display()


	
