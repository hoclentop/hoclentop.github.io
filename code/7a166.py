m, n = [int(x) for x in input().split()]
a = [[0]*n for x in range(m) ]
for i in range(m):
  for j in range(n):
    a[i][j] = n * i + j+1

for i in range(m):
  for j in range(n):
    print(a[i][j], end=" ")
  print()