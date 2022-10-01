#  Problem Statement : 22 Sept 2022
#  Accept a number from user & print the pattern
#  Input : 4    3   
#  Output :
#     *   *   *
#     *   *   *
#     *   *   *
#     *   *   *

rows = int(input("Please Enter the Total Number of Rows: "))
columns = int(input("Please Enter the Total Number of Columns: "))

for i in range(rows):
    for j in range(columns):
        print('*', end = '  ')
    print()