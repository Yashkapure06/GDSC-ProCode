# input string from user
strs = input()

# temporary variable for storing result
res = ""

# main logic
for character in strs:
	if character.isupper():
		print("Yes is small")
		res += character.lower()
	else:
		res += character.upper()
			
# printing the result                      
print(res)
