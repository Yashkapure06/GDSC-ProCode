#!/usr/bin/python3

import sys

def ispali(word):
	if word == word[::-1]:
		return True
	return False


def big_wrd(s):
	s = sorted(s, key = len)
	try:
		result = s[-1]
		return ("\tOutput: {0}\n".format(str(result)))
	except IndexError: 
		return 0

if __name__ == '__main__':

	active = True
	while active:
		user_in = input("\n\tInput: ")
		if user_in != "quit":	

			words = user_in.split(" ")
			data = []

			for word in words:
				if ispali(word) == True:
					data.append(word)
				

			l = big_wrd(data)
			if l == 0:
				print("\tOutput: Palindrome not found :( ")
			else:
				print(l)
		else:
			active = False

	
	print("\n\t-- [!] exit code 0x07 :( [!] -- \n")

	sys.exit()


