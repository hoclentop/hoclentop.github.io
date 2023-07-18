from math import sqrt
n = int(input())
k = int(sqrt(n))
for x in range(k+1):
    print(x**2, end=" ")