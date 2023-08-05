n =int(input()) 
a = [[0]*n for x in range(n)]
for i in range(n):
  for j in range(n):
    if (i % 2 == 0):
      a[i][j] = n * i + j +1
    else:
      a[i][j] = n * i - j  +n
for i in range(n):
  for j in range(n):
    print(a[i][j], end=" ")
  print()