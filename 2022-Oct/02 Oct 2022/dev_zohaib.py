def count_capital_letters(s: str) -> int:
    """
    Problem Statement: Accept a String from user & Calculate Capital Letters from it
    input: "Hello World"
    output: 2
    >>> count_capital_letters('Hello World')
    :param s:
    :return: int
    """
    count = 0
    for i in s:
        if i.isupper():
            count += 1
    return count


# one liner solution
def count_capital_letters_oneLiner(s: str) -> int:
    return sum(1 for c in s if c.isupper())


# driver code
if __name__ == '__main__':
    s = input('Enter a string: ')
    print(f'Number of capital letters in {s} is {count_capital_letters(s)}')
    # print(f'Number of capital letters in {s} is {count_capital_letters_oneLiner(s)}')
