from typing import List


def get_input():
    """Get input from user and return as a list of lists.

    >>> get_input()
    Please enter the number of rows: 2
    Please enter the number of columns: 3
    Please enter the elements of the matrix in a single line and separated by a space: 1 2 3 4 5 6
    [[1, 2, 3], [4, 5, 6]]
    """
    rows = int(input('Please enter the number of rows: '))
    columns = int(input('Please enter the number of columns: '))
    print('Please enter the elements of the matrix in a single line and separated by a space: ', end='')
    elements = list(map(int, input().split()))
    return [elements[i:i + columns] for i in range(0, len(elements), columns)]


def transpose(matrix: List[List[int]]) -> List[List[int]]:
    """Transpose a matrix.

    >>> transpose([[1, 2, 3], [4, 5, 6]])
    [[1, 4], [2, 5], [3, 6]]
    """
    trans_pose = [[matrix[i][j] for i in range(len(matrix))] for j in range(len(matrix[0]))]
    return trans_pose


if __name__ == '__main__':
    matrix = get_input()
    matrix_transpose = transpose(matrix)

    for row in matrix_transpose:
        for row_entry in row:
            print(row_entry, end=' ')
        print()


