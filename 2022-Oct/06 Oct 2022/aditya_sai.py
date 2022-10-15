def rev(sen):
    words = sen.split(' ')
    rev_words=""
    for i in words:
        rev_words+=i[::-1]+' '
    return rev_words
    
if __name__ == "__main__":
    str1 = input("Enter your string: ")
    print (rev(str1))
