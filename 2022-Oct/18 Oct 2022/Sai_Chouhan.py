n = int(input())
li = []
for i in range(n):
	temp = input().split(' ')
	li.append(temp)

for i in range(n):
	for j in range(i):
		li[i][j], li[j][i] = li[j][i], li[i][j]

for i in range(n):
	print(*li[i])