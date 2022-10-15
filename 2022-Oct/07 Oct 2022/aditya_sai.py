def is_palin(string):
    if(string == string[::-1]):
        return True
    else:
        return False
 
def largest_palin(s):
    newl = []
    for i in s:
        if(is_palin(i)):
            newl.append(i)

    s = sorted(newl,key=len)
    print(s[len(s)-1])

if __name__ == "__main__":
    str = input("Enter the String:")
    l = list(str.split(" "))
    largest_palin(l)
     
