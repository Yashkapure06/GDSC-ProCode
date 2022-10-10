print("Enter a string in capital letter: ")
count = 0

strs = input()

for character in strs:
	if character.isupper():
		count += 1

print(count)
