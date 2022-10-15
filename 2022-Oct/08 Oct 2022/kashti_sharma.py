def findCeil(str1, first, l, h):
   
    ceilIndex = l
 
    for i in range(l + 1, 1 + h):
        if (str1[i] > first and str1[i] < str1[ceilIndex]):
            ceilIndex = i
 
    return ceilIndex

def sortedPermutations(str1):
    size = len(str1)
    str1 = list(str1)

    str1.sort()

    isFinished = False
    x = 1
    while (not isFinished):

        print(x, "".join(str1))
        x += 1

        i = len(str1) - 2
        while i >= 0:
            if (str1[i] < str1[i + 1]):
                break
            i -= 1

        if (i == -1):
            isFinished = True
        else:

            ceilIndex = findCeil(str1, str1[i], i + 1, size - 1)

            temp = str1[i]
            str1[i] = str1[ceilIndex]
            str1[ceilIndex] = temp

            str1 = str1[0: i + 1] + sorted(str1[i + 1:])
 


str1 = "ABCD"
sortedPermutations(str1)
