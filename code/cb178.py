n = int(input())
k = 0
while n > 0:
  k = 10 *k + n % 10
  n = n // 10
if k % 13 == 0:
  print("YES")
else:
  print('NO')