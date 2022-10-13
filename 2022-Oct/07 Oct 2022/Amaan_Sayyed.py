#largest palindrome


def palin_check(string):
    if (string == string[::-1]):
        return True
    else:
        return False


def large(s):
    newl = []
    for i in s:
        if (palin_check(i)):
            newl.append(i)

    s = sorted(newl, key=len)
    print(s[len(s)-1])


if __name__ == "__main__":
    str = input("Enter the String:")
    sent = list(str.split(" "))
    
    large(sent)
