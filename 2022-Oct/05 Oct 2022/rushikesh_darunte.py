#!/usr/bin/python3


import sys

def yolo(str_in):

	lis = list(str_in.split(" "))

	for word in lis:
		max_len = len(max(lis, key=len))
	result = str(max_len)
	return result


if __name__ == '__main__':

	active = True
	while active:
		str_in = input("\n\tInput: ")
		if str_in != "quit":
			max_len = yolo(str_in)
			print("\tOutput [Max]: {0}\n".format(str(max_len)))
		else:
			active = False


	print("\n\t-- [!] exit code 0x05 :( [!] -- \n")

	sys.exit()

	
	



	

