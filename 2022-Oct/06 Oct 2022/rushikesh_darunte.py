#!/usr/bin/python3


import sys

def rev(str_in):
	return ' '.join(word[::-1] for word in str_in.split(" "))


if __name__ == '__main__':

	active = True
	while active:
		str_in = input("\n\tInput: ")
		if str_in != "quit":
			desrever = rev(str_in)
			print("\tOutput [Reversed]: {0}\n".format(str(desrever)))
		else:
			active = False


	print("\n\t-- [!] exit code 0x06 :( [!] -- \n")

	sys.exit()

	
	



	

