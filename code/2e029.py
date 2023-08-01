from math import sqrt
a,b,c=[float(x) for x in input().split()]
p=a+b+c
print("%.2f" % p)
p=p/2
s=sqrt(p*(p-a)*(p-b)*(p-c))
print("%.2f" % s)