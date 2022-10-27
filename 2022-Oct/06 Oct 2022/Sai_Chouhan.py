s = input()
li = s.split(" ")
for i in range(len(li)):
	li[i] = li[i][::-1]

print(*li)