String=str(input("Enter the string :"))
def palindrome(string):
    reverse=string[::-1]
    if string==reverse:
        print("palindrome")
    else :
        print("not palindrome")
    
palindrome(String)
