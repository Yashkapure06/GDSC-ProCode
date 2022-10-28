def convert_case(input_str: str) -> str:
    """
    Problem:  Accept a String from user & convert uppercase letter into
    lowercase letter and vice versa

    input : "Hello World"
    output: "hELLO wORLD"

    :param input_str:
    :return: str
    """
    new_str = ''
    for i in input_str:
        if i.isupper():
            new_str += i.lower()
        elif i.islower():
            new_str += i.upper()
        else:
            new_str += i
    return new_str


# Driver Code
if __name__ == '__main__':
    input_str = input("Input: ")
    print("Output: ", convert_case(input_str))
