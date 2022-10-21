a=[2,3,4,5]
b=[3,5,7,9]
def common(a,b): 
    c = [value for value in a if value in b] 
    return c
d=common(a,b)
print(d)
