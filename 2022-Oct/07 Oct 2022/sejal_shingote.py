def checkPalin(word):
 
    n = len(word)
 
    # making the check case
    # case insensitive
    word = word.lower()
 
    # loop to check palindrome
    for i in range( n):
        if (word[i] != word[n - 1]):
            return False
        n -= 1
 
    return True
 
# Function to find longest
# palindrome word
def longestPalin(str):
     
    # to check last word for palindrome
    str = str + " "
 
    # to store each word
    longestword = ""
    word = ""
 
    length1 = 0
    for i in range(len(str)):
        ch = str[i]
 
        # extracting each word
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
 
# Driver code
if __name__ == "__main__":
     
    s = "My name is ava and i love python"
 
    if (longestPalin(s) == ""):
        print("No Palindrome Word")
    else:
        print(longestPalin(s))
 
