def checkPalin(word):
 
    n = len(word)
    word = word.lower()
    for i in range( n):
        if (word[i] != word[n - 1]):
            return False
        n -= 1
 
    return True
def longestPalin(str):
    str = str + " "
    longestword = ""
    word = ""
 
    length1 = 0
    for i in range(len(str)):
        ch = str[i]
        if (ch != ' '):
            word = word + ch
        else :
            length = len(word)
            if (checkPalin(word) and
                length > length1):
                length1 = length
                longestword = word
            word = ""
    return longestword
if __name__ == "__main__":
     
    s = input("enter any str :")
    if (longestPalin(s) == ""):
        print("No Palindrome Word")
    else:
        print(longestPalin(s))
        
        
        
        
        
