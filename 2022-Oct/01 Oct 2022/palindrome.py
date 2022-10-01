s = str(input())
s1 = s.lower()
s2 = s[::-1]
if s1 == s2:
    print("Palindrome")
else:
    print("NOT Palindrome")
