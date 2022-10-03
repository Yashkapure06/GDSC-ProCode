ans = "y"
while ans == "y":
    s = input("Enter word =")
    s1 = s[: :-1]
    if s == s1:print("Palindrome")
    else: print("Not Palindrome")
    ans = input("Do you want to try again?(y/n) :")
