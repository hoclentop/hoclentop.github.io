k, n = [int(x) for x in input().split()]
kq = n // k
if n % k > 0 :
  kq = kq + 1  
print(kq*k)