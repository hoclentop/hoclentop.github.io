n = int(input())
d = n % 10
while n > 0:
  c = n % 10
  if (c != d ):
    print('NO')
    quit()
  n = n //10
print('YES')