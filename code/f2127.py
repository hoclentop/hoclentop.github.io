a, b, c, d = [int(x) for x in input().split()]
if a > b:
  a,b = b,a
if b > c:
  b,c = c,b
if c> d:
  c,d = d,c
if a> b:
  a,b = b,a
if b > c:
  b,c = c,b
if a> b:
  a,b = b,a
if ((a == c) and (c != d)) or ((a != b) and (b == d)):
  print("YES")
  quit
else:
  print("NO")