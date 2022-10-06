#!/usr/bin/python3

import sys

def swapc(string0):
	final = user_in.swapcase()
	return final


if __name__ == '__main__':

	print("\n-----------------------------------------------------------------")
	print("| Convert uppercase letter into lowercase letter and vice versa |")
	print("-----------------------------------------------------------------\n")

	active = True
	while active:
		user_in = input("\tInput: ") 
		if user_in != "quit":
			swapC = swapc(user_in)
			print("\tOutput: {0}\n".format(str(swapC))) 
		else:
			active = False

	print("\n-----------------------------------------------------------------")
	print("|\texit code 0x03                                                |")
	print("-----------------------------------------------------------------\n")

	sys.exit()