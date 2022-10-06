def reverseWords(lineIn):
    inputWords = lineIn.split(" ")
    output = ""
    for word in inputWords:
        output+=word[::-1]+" "
    return output

def main():
    lineIn = input()
    rw = reverseWords(lineIn)
    print(rw)

if __name__=="__main__":
    main()