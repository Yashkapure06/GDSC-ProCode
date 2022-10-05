#!/usr/bin/python3

import sys


def capital(user_in):


	small=0
	cap=0

	for char in user_in:
		if (char.islower()):
			small+=1
		else:
			cap+=1

	return cap

if __name__ == '__main__':
	
	print("\n-------------------------------------------------------------------------")
	print("| [!] Accept a String from user & Calculate Capital Letters from it [!] |")
	print("-------------------------------------------------------------------------\n")

	active = True
	while active:
		user_in = input("\tInput: ")
		if user_in != "quit":
			Tcap_no = capital(user_in)
			print("\tCapital chars: {0}\n".format(str(Tcap_no)))
		else:
			active = False

	print("\n-------------------------------------------------------------------------")
	print("|\texit code 0x01 -_-                                              |")
	print("-------------------------------------------------------------------------\n")

	sys.exit()