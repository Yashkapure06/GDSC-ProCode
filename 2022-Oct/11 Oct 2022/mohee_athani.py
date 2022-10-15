def isPalindrome(str):
    if str == str[ ::-1]:
        return True
str = input("Enter the string :")
count = 0

for word in str.split():
    if isPalindrome(word):
        count += 1

print("Palindrome Strings in the word : ",count)