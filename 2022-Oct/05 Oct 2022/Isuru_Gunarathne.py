# take input line
# split the line into words
# for each word
# count the number of letters
# return the length of the word with the highest number of letters

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