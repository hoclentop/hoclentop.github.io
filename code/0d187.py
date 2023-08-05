a, b = [int(x) for x in input().split()]
while a != b:
  if a> b :
    a = a - b 
  else:
    b = b -a
print(a)