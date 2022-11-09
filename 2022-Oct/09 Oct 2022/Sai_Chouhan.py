strings = {}
ans = ""
li = []
def allStrings(s, i):
	global ans
	if i >= len(s):
		return
	ans += s[i]
	allStrings(s, i + 1)
	if not ans in strings:
		li.append(ans)
		strings[ans] = 1
	
	ans = ans[:-1]
	allStrings(s, i + 1)
	if not ans in strings:
		li.append(ans)
		strings[ans] = 1

s = input()
allStrings(s, 0)
print(*li)
