def checkPalin(word):
    if word.lower() == word.lower()[::-1]:
        return True
        
def countPalin(str):
    count = 0
    listOfWords = str.split(" ")

    for elements in listOfWords:
        if (checkPalin(elements)):
            count += 1
    print (count)

countPalin(input())
