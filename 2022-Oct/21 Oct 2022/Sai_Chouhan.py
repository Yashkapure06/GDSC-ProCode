n = int(input())
a, b = [], []
for i in range(n):
	a.append(list(map(int,input().split(' '))))
	
for i in range(n): 
	b.append(list(map(int, input().split(' '))))

res = []
for i in range(n):
	li = []
	for j in range(n):
		ans = 0
		for k in range(n):
			ans += a[i][k] * b[k][j]
		li.append(ans)
	res.append(li)

for i in range(n):
	print(*res[i])