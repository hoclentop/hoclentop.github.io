a, b = [int(x) for x in input().split()]
if (a % b == 0) or (b % a == 0):
  print('YES')
else:
  print('NO')