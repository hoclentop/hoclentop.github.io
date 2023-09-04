from math import sqrt 
import sys
sys.stdin = open("cau1b.inp","r")
sys.stdout = open("cau1b.out","w")
l, r = [int(x) for x in input().split()]
g = int(sqrt(r))
p = [1] * (g+1)
p[0] = p[1] = 0
for x in range(2, int(sqrt(g))+1):
    for y in range(x, g//x):
        p[x*y] = 0
 
for i in range(1, g+1):
    p[i] += p[i-1]
dem = 0
T = [2, 4, 6, 10, 12, 16, 18, 22, 28, 30, 36]
for y in T:
    b = int(pow(r, 1/y))
    a = int(pow(l-1, 1/y))
    dem +=   p[b] – p[a]
print(dem)
