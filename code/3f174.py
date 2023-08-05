n , k = [int(x) for x in input().split()]
def gt(x):
  T =  1 
  for i in range(1,x+1):
    T = T*i
  return T
D = gt(n)//(gt(k)*gt(n- k))
print(D)