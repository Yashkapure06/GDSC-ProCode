#Accept array from user and rotate it from left by d place

def main():
    n = int(input("Length of the list you want to create: "))
    arr = []
    for i in range(n):
        arr.append(int(input("Enter a number: ")))
    d = int(input("How times you want to rotate the array: "))
    arr = rotate(arr,d)
    display(arr)

def rotate(arr,d):
    return arr[d:]+arr[d-1::-1]

def display(arr):
    arr = [str(int) for int in arr]
    print(" ".join(arr))

if __name__=="__main__":
    main()
