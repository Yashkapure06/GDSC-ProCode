# Function to check if a word is palindrome
def checkPalin(word):
    if word.lower() == word.lower()[::-1]:
        return True
 
# Function to count palindrome words
def countPalin(str):
    count = 0
     
    # splitting each word as spaces as
    # delimiter and storing it into a list
    listOfWords = str.split(" ")
 
    # Iterating every element from list
    # and checking if it is a palindrome.
    for elements in listOfWords:
        if (checkPalin(elements)):
             
            # if the word is a palindrome
            # increment the count.
            count += 1
    print (count)
 
# Driver code
countPalin("Madam Arora teaches malayalam")
countPalin("Nitin speaks malayalam")
 
