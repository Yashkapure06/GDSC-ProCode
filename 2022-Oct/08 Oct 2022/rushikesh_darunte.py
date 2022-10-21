#!/usr/bin/python3

import sys
from itertools import permutations as perm

def permut(str0):
	chars = list(str0)
	words = perm(chars)
	data = ""

	for word in list(words):
		data += "".join(list(word)) + "\n"

	return data

if __name__ == '__main__':
	user_in = input("Input: ")
	x = permut(user_in )
	print(x)
	print("\n-- exit code 0x08 :( -- \n")

	sys.exit()