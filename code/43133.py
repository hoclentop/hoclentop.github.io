n = int(input())
while n > 0:
  c = n % 10
  if (c % 2 == 0 ):
    print('NO')
    quit()
  n = n //10
print('YES')