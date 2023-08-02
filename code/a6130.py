n = int(input())
d = n % 10
c = n // 10
if (c % 2 + d % 2) == 1:
  print('YES')
else:
  print('NO')