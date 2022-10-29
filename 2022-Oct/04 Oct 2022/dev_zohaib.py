def isAnagram(str1: str, str2: str):
    """
    problem: Accept TWO strings from user & Check if they are ANAGRAM or NOT

    input: "abcde", "cebad"
    output: True

    input: "test", "ttee"
    output: False
    :param str1:
    :param str2:
    :return bool:
    """
    if sorted(str1) == sorted(str2):
        return True
    else:
        return False


# driver code
if __name__ == '__main__':
    str1 = input("Enter first string: ")
    str2 = input("Enter second string: ")
    print(isAnagram(str1, str2))
