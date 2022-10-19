ef isPalindrome(string):
    if string == string[ ::-1]:
        return True
str = input("Please Enter a string:\n")
count = 0

for word in str.split():
    if isPalindrome(word):
        count += 1

print("There are",count,"Palindrome Strings in the word")
