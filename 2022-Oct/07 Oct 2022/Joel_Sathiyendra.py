def isPalindrome(word):
    if word == word[::-1]:
        return True
    return False

# Get the input from the user
s = input()
# Split each words into a list
words = s.split(" ")
ans = ""
mx = 0

# Check for each word is a palindrome and check if that has the max length
for word in words:
    if isPalindrome(word) and len(word) > mx:
        mx = len(word)
        ans = word
if (mx == 0):
    print("There are no palindromes in the sentence")
else:
    print(ans)
