# Author : Prathamesh Patil

# getting the input string
strs = input()

# print(str)

# using the slicing concept for revering the input string
rev_strs = strs[::-1]

# comparing if the input string is equal to the reverse string 
if strs == rev_strs:
  print("Plaindrome")
else:
  print("Not Palindrome")
