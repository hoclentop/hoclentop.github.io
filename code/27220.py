a, b = [int(x) for x in input().split()]
dem = 0
def uocchung(x, y):
  while x != y:
    if x > y:
      x = x - y 
    else:
      y = y - x 
  return x
if uocchung(a,b) == 1:
  print('YES')
  quit()
print("NO")