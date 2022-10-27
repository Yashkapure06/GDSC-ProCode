li = list(map(int, input().split()))
ans = li[1:] + li[:1]
print(*ans)