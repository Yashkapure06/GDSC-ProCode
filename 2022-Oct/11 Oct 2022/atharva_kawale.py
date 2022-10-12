def isPalindrome(ele):
    if ele == ele[ ::-1]:
        return True
str = input("Enter string :")
count = 0

for word in str.split():
    if isPalindrome(word):
        count += 1

print(count)
