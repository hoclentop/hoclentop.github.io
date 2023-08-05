n = int(input())
n2 = n
s = 0
while n > 0:
  c = n % 10
  s = s* 10 + c
  n = n // 10
if s == n2: 
  print("YES")
else:
  print('NO')