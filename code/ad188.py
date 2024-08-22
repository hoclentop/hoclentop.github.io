a, b = [int(x) for x in input().split()]
def UCLN(x, y):
  while x != y:
    if x > y :
     x = x - y 
    else:
     y = y - x
  return(x)
print(a*b // UCLN(a,b))
