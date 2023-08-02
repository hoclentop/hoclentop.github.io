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
if ((a == b) and (b !=c) and (c != d)) or ((a != b) and (b == c) and (c != d)) or ((a != b) and (b != c) and (c == d)):
  print("YES")
  quit
else:
  print('NO')