def largestWord(s):
    s = sorted(s, key = len)
    print(len(s[-1]))
 
 
if __name__ == "__main__":
    s = input("")
    l = list(s.split(" "))
    largestWord(l)
