def checkpalindrome(s):  # function for checking iff string is palindrome or not
    if(s==s[::-1]):
        return True
    else:
        return False

def longestpalindrome(sentence):
    lst = list(sentence.split(" "))    # for storing all words of sentence in string
    long = []
    for i in lst:
        if(checkpalindrome(i)):
            long.append(i)
    
    sortlst = sorted(long,key=len)   # sorted function for longest word

    longestpal = sortlst[-1]

    return longestpal         

str = input("Enter a sentence : ")
print("Longest palindrome word : ",longestpalindrome(str))
