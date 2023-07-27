a, b, n = [int(x) for x in  input().split()]
c = b
while c <= n :
  if c % a == 0:
    print(c, end = " ")
  c = b + c