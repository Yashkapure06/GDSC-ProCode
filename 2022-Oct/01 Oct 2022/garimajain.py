#to find palindrome

def isPalindrome(s):
	return s == s[::-1]


# Driver code
s = "malayalam"
ans = isPalindrome(s)

if ans:
	print("PALINDROME")
else:
	print("NOT PALINDROME")
