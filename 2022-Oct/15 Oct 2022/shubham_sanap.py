
def array():
    a=[]
    n=int(input("enter no. of elements in array-"))
    for i in range(n):
          a.append(int(input("enter the elements-")))
    return a

def shift(a,c):
    n=int(input("enter the no. of places to shift the array= "))
    for i in range(0,n):
        temp=a[0]
        for j in range(0,c-1):
            a[j]=a[j+1]
        a[len(a)-1]=temp
    print("shifted array= ",a)

e=array()
print("original array= ",e)  
d=len(e)
shift(e,d)