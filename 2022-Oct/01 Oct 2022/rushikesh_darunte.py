#!/usr/bin/python3

import sys

def palindrome(in_str):
	rev_str = in_str[::-1]
		
	if in_str == rev_str:
		return "\tOutput: String is Palindrome ;)\n"
	else:
		return "\tOutput: String is Not Palindrome :(\n"

if __name__ == '__main__':
	active = True
	print("\n--------------------------------------------------------------------")
	print("-- [!] Accept a String from user & check if Palindrome or NOT [!] --")
	print("--------------------------------------------------------------------")
	while active:
		in_data = input("\tInput: ")
		if in_data != "quit":
			x = palindrome(in_data) 
			print(x)
		else:
			active = False

	print("\n--------------------------------------------------------------------")
	print("\texit code 0x0 -_-")
	print("--------------------------------------------------------------------\n")
	sys.exit()