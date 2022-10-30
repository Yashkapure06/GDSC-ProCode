from typing import List


def get_input():
    """
    get two matrix A,B from user and return 2 matrix as a list of lists.
    >>> get_input()
    Enter the number of rows and columns of matrix A 3 3
    Enter the elements of matrix A in a single line and separated by a space 1 1 1 2 2 2 3 3 3
    Enter the number of rows and columns of matrix B 3 3
    Enter the elements of matrix B in a single line and separated by a space 1 1 1 2 2 2 3 3 3
    """
    print("Enter the number of rows and columns of matrix A", end=" ")
    rows_A, columns_A = map(int, input().split())
    print("Enter the elements of matrix A in a single line and separated by a space", end=" ")
    elements_A = list(map(int, input().split()))
    matrix_A = [elements_A[i:i + columns_A] for i in range(0, len(elements_A), columns_A)]

    print("Enter the number of rows and columns of matrix B", end=" ")
    rows_B, columns_B = map(int, input().split())
    print("Enter the elements of matrix B in a single line and separated by a space", end=" ")
    elements_B = list(map(int, input().split()))
    matrix_B = [elements_B[i:i + columns_B] for i in range(0, len(elements_B), columns_B)]

    return matrix_A, matrix_B


def multiply_matrix(matrix_A: List[List[int]], matrix_B: List[List[int]])-> List[List[int]]:
    """
    multiply two matrix A and B also cheek valid matrix
    """
    if len(matrix_A[0]) == len(matrix_B):
        result = [[0 for i in range(len(matrix_B[0]))] for j in range(len(matrix_A))]
        for i in range(len(matrix_A)):
            for j in range(len(matrix_B[0])):
                for k in range(len(matrix_B)):
                    result[i][j] += matrix_A[i][k] * matrix_B[k][j]
        return result
    else:
        print("Invalid matrix")


# driver code
if __name__ == '__main__':
    matrix_A, matrix_B = get_input()
    result = multiply_matrix(matrix_A, matrix_B)
    for row in result:
        for row_entry in row:
            print(row_entry, end=' ')
        print()
