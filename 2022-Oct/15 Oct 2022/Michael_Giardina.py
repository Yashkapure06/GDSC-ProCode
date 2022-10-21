#Solution written by Michael Giardina
#github: giardim

def rotate(k, list):
    #Create a new list
    list2 = []
    #while the two lists are not the same in length
    while(len(list2) != len(list)):
        #Add the element at k of list to the new list
        list2.append(list[k])
        #Add one to K

        k += 1
        #If k is the length of list, we set k to 0 to avoid out of bounds eoor
        if (k == len(list)):
            k = 0
    #Return the new list            
    return list2

def main():
    #Create an empty list
    list = []
    #Query the user to enter the size of the array, making it zero if they
    #   enter a negative number
    n = int(input("Number of elements in the array: "))
    n = max(0, n)
    #Ask the user to add elements to the array
    print("Enter the elements to add to the array")
    for i in range(n):
        #append those elements to the list
        list.append(input(""))
    #Ask the user to enter the number of elements the array should be rotated
    k = int(input("Rotate the array by: "))
    #Assign the value returned from rotate to list and print the results
    list = rotate(k, list)
    print(list)
    
main()