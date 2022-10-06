from collections import Counter

# Get the first input strig from the user
str1 = input("Enter the first string: ")
# Get the second input string from the user
str2 = input("Enter the second string: ")

# Count each letter in both of the strings
cnt1 = Counter(str1)
cnt2 = Counter(str2)

# Check if both the strings contain equal number of the same character
for key, val in cnt1.items():
    # If the count is not equal then they can't be anagrams
    if cnt2[key] != val:
        # These two strings are not anagrams!
        print(False)
        break
else:
    # The strings are anagrams.
    print(True)
