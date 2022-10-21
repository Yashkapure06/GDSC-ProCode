def printRev(x):
    res = []
    s = " "
    for i in x:
        res.append(i[::-1])
    print(s.join(res))

str = input()
splitting = str.split()
printRev(splitting)