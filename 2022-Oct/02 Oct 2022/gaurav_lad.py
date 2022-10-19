#String Opereation 
str=input("Enter a String : ")
i = 0

for capital_char in str:
	if capital_char.isupper():
		i+= 1

print("Number of capital letter : ",i)
