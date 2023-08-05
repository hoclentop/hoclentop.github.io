a, b = [int(x) for x in input().split()]
c, d = [int(x) for x in input().split()]
def UCLN(x, y):
  while x != y:
    if x > y :
     x = x - y 
    else:
     y = y - x
  return(x)
T = a*d + b*c
M = b*d
print((T// UCLN(T,M)),M // UCLN(T, M))