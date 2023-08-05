n = int(input())
if n < 2:
  print('NO')
  quit()
for x in range(2, (n // 2) + 1):
  if  n % x == 0:
    print('NO')
    quit()
print('YES')