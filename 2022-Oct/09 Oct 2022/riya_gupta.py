lst = []

def print_combinations(str1, str2, index):
    if index == len(str1):
        lst.append(str2)
        return
    print_combinations(str1, str2, index+1)
    print_combinations(str1, str2+str1[index], index+1)

def main():
    str1 = input()
    print_combinations(str1, "", 0)

if __name__ == "__main__":
    main()
    for i in range(len(lst)-1, -1, -1):
        print(lst[i]+" ", end="")
