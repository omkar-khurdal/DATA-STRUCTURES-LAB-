"""
STRING OPERATIONS 
CHINMAY KOTKAR
AI-DS SE B 29 
29 SEPT 2022
"""
#from palindrome import pal
str=input("Enter string:")
def char_cnt(str,ch):
	count =0
	if ch in str:
		for i in range(0,len(str)):
			if (str[i]==ch):
				count += 1
		
	print(count)

def isPalindrome(str):
	reversedstr = str[::-1]
	if reversedstr == str:
		print("TRUE")
	else:
		print("FALSE")

def chk_substr(str,str1):
	length = len(str)
	length1 = len(str1)
	for i in range(0,length-length1+1):
		s = str[i:i+length1]
		if (s==str1):
			print("substring at",i)
			return True
	print("not substring")


	

def menu():
	print("1. Count char occurance")
	print("2. substring occurance")
	print("3. Palindrome")
	choice=int(input("enter choice:"))
	if choice==1:
		ch=input("Enter character:")
		char_cnt(str,ch)
		menu()
	if choice==2:
		str1=input("Enter other string:")
		chk_substr(str,str1)
		menu()
	if choice==3:
		isPalindrome(str)
		menu()

	


menu()














    



