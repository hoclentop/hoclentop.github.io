from math import sqrt
a,b,c,d=[int(x) for x in input().split()]
s=sqrt((a-c)**2+(b-d)**2)
print("%.3f" % s)