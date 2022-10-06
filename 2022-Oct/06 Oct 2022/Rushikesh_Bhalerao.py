def rev_sentence(sentence):
    words = sentence.split(' ')
    rev_words=""
    for i in words:
        rev_words+=i[::-1]+' '
    return rev_words
    
if __name__ == "__main__":
    str1 = input('')
    print (rev_sentence(str1))
