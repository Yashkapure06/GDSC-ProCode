print("Enter a sentence: ")
def longest_word(line):
    words = line.split()
    longest = ''
    for word in words:
        if len(word) > len(longest):
            longest = word
    return longest

if __name__ == '__main__':
    line = input()
    longWord = longest_word(line)
    print (len(longWord))
