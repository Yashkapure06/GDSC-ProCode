#!/usr/bin/python3

import sys
from collections import Counter


def anagram(str1, str2):
	yes=""
	no=""

	if (Counter(str1) == Counter(str2)):
		yes = "True"
		return yes
	else:
		no = "False"
		return no

if __name__ == '__main__':

	print("\n-------------------------------------------------------------------")
	print("| Accept TWO strings from user & Check if they are ANAGRAM or NOT |")
	print("-------------------------------------------------------------------\n")

	active = True
	while active:
		user_in_str1 = input("\tInput: str1= ") 
		user_in_str2 = input("\tInput: str2= ") 
		if user_in_str1 != "quit":
			anagram_out = anagram(user_in_str1, user_in_str2)
			print("\tOutput: {0}\n".format(str(anagram_out))) 
		else:
			active = False

	print("\n------------[exit code 0x04 ;(]------------------------------------")

	sys.exit()
