def main():
    A = []
    B = []

    # Get the size of the arrays
    n = int(input("Size of array: "))

    # Get the 2 arrays
    print("Enter array A: ")
    getArray(n, A)
    print("Enter array B: ")
    getArray(n, B)

    # Print the sum
    C = matrixAdd(n, A, B)
    print("Addition: ")
    matrixPrint(C)
    
def getArray(n : int, A: list) -> list: 
    for i in range(n):
        A.append([int(i) for i in input().split(" ")])

def matrixAdd(n: int, A: list, B: list) -> list:
    C = [[A[i][j]+B[i][j] for j in range(n)] 
            for i in range(n)]
    return C

def matrixPrint(A: list)->None:
    for i in range(len(A)):
        for j in range(len(A)):
            print(A[i][j], end=" ")
        print()

if __name__ == "__main__":
    main()