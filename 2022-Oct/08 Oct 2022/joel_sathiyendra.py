from itertools import permutations

# Get the input string from the user
s = input()

# Make it a list of characters
chars = list(s)

# Get the permutation using the standard library
perm = permutations(chars)

# Print the output
for p in list(perm):
    print("".join(list(p)))
