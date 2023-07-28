a, b = [int(x) for x in input().split()]
c, d = [int(x) for x in input().split()]
if b*d*(a*d - b*d) > 0:
  print(a, b)
else:
  print(c, d)