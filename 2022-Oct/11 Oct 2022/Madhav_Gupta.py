text = input("Enter String: ")

words = text.split()

count = 0

for word in words:
    if word == word[::-1]:
        count += 1

print("Total pallindrome words: ", count)
