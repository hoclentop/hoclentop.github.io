from math import sqrt
a,b,c,d=[int(x) for x in input().split()]
s=sqrt((a-c)*(a-c)+(b-d)*(b-d))
print("%.3f" % s)