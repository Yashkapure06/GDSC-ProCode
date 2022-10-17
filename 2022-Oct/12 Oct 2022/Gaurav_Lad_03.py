#Accept two list from the user and find common element from the both list

def common_member(a, b):
    result = [i for i in a if i in b]
    return result
 
a = [1, 2, 3, 4, 5]
b = [5, 6, 7, 8, 9]
 
print("The common elements in the two lists are: ")
print(common_member(a, b))
