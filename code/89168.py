n=int(input())
a = [[0]*n for x in range(n)]
for i in range(n):
  for j in range(n):
        a[i][j] = n * j + i +1
for i in range(n):
  for j in range(n):
    print(a[i][j], end=" ")
  print()