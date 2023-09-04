import sys
sys.stdin = open("new.inp","r")
sys.stdout = open("new.out","w")
n, a, b = [int(x) for x in input().split()]
dem = -1
qa = a//n
ra = a%n
qb = b//n
rb = b%n
dem+=(qa+1)*(qb+1)
if ra+rb>=n:
    dem+= (ra+rb-n+1)*(qa+1)*(qb+1)
dem += min(ra, n-rb-1) * (qa+1) * qb
dem += (n-max(ra+1,n-rb)) * qa * (qb+1)
if ra+rb<=n-2:
    dem += ((n-rb-1)-(ra+1)+1)*qa*qb
print(dem)
