# initiializing the count of uppercase letters to 0
count = 0

# taking the input from user
strs = input()

# main logic
for character in strs:
	if character.isupper():
		count += 1

# displaying the count 
print(count)
