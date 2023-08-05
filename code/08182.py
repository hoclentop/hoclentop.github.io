n = int(input())
d = 10
while n > 0:
  c = n % 10
  if c > d:
    print('NO')
    quit()
  n = n // 10
  d = c
print('YES')