, b, c, d = [int(x) for x in input().split()]
if a > b:
  a,b = b,a
if b > c:
  b,c = c,b
if c> d:
  c,d = d,c
if a> b:
  a,b = b,a
if b > c:
  b,c = c, b
if c> d:
  c,d = d, c
if (a != b) and (b !=c) and (c != d) and(d!=a) and (a!=c) and (b!=d):
  print("YES")
  quit
else:
  print('NO')