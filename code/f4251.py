import sys
from math import sqrt
a,b,c=[int(x) for x in input().split()]
for s in sys.stdin:
    p,q=[int(x) for x in s.split()]
    kq=abs(a*p+b*q+c)/sqrt(a*a+b*b)
    print("%.1f" % kq)