def main():
    A= []
    B= []
    result=[]
    n = int(input("Size of 2d array: "))
    print("Enter numbers for 1st array")
    A = get_2darray(n)
    print("Enter numbers for 2nd array")
    B = get_2darray(n)
    result = add_2darray(A,B,n)
    display(result,n)

def get_2darray(n):
    array = []
    for i in range(n):
        row = []
        for j in range(n):
            row.append(int(input()))
        array.append(row)
    return array

def add_2darray(A,B,n):
    result = []
    for i in range(n):
        row = []
        for j in range(n):
            row.append(A[i][j] + B[i][j])
        result.append(row)
    return result

def display(result,n):
    for i in range(n):
        for j in range(n):
            print(result[i][j],end=" ")
        print()


if __name__ == "__main__":
    main()
