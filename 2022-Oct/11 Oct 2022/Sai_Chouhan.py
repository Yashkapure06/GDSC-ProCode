s = input()
li = s.split(" ")
count = 0
for i in range(len(li)):
	if li[i] == li[i][::-1]:
		count += 1

print(count)