from unittest import result


row = int(input("Give the number of rows:"))  
col = int(input("Give the number of columns:"))  
  
matrix = []  
result = [[0]*row]*col
print("Enter one row with space seperated elements:")   
for i in range(row):  
    # taking input for the row from the user  
    single_row = list(map(int, input().split()))  
    # appending the 'single_row' to the 'matrix'  
    matrix.append(single_row)  
  
for i in range(len(matrix)):
   # iterate through columns
   for j in range(len(matrix[0])):
       result[j][i] = matrix[i][j]
print()
print("Output : ")
for i in range(col):
    for j in range(row):
        print(result[i][j], end = " ")
    print()
