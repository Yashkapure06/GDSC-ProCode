
def isPalindrome(s: str) -> bool:
    """
    Problem:
    Accept a String from user & check if Palindrome or NOT

    input: "madam"
    output: True
    :param s:
    :return:
    """
    return s == s[::-1]


if __name__ == '__main__':
    s = input("Enter a string: ")
    print(isPalindrome(s))

