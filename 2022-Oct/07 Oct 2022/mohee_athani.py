def checker(x):
  length = len(x)
  i = 0
  j = length-1
  flag = 0
  while i < j:
    if(x[i] != x[j]):
      flag = 1
    i = i+1
    j = j-1
  if(flag == 1):
    return False
  else:
    return True
  
inp = input().split()
max = 0
result = 0
for i in range(len(inp)):
  if(checker(inp[i])):
    if(len(inp[i]) > max):
      result = i
      max = len(inp[i])
print(inp[result])