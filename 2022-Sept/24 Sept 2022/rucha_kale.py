# Date: 24 Sept 2022
# Accept a number from user & print the pattern
# (n = 5)
# 1 1 1 1 1
# 2 2 2 2 2 
# 3 3 3 3 3 
# 4 4 4 4 4
# 5 5 5 5 5

rows = int(input("Enter a number: "))

for i in range(1, rows+1):
    for j in range(1, rows+1):
        print(i, end=" ")
    print()