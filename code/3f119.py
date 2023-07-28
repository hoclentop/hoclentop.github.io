import math
a, b, c = [int(x) for x in input().split()]
d = max(a, max(b,c))
s = a*b*c/(2*d)
print(int(s))
