str1 =input("enter first string :")
str2 =input("enter second string :")
 

x = [str1[i] for i in range(0,len(str1))]
x.sort()
y = [str2[i] for i in range(0,len(str2))]
y.sort()
 
if (x == y):
    print("the string is anagram")
else: 
    print("The string is not anagrams.")
