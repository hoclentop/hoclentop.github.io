from math import sqrt
n=int(input())
k=int(sqrt(2*n))
if k*k+k==2*n:
    print(k)
else:
    print(0)