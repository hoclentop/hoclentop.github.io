//DE3313.PY - Tran Huu Nam - hsgtin.vn - 2024
import math
a, b = [int(x) for x in input().split()]
a = math.ceil(math.sqrt(a))
b = math.floor(math.sqrt(b))
def snt(n):
    s = [True]*(n+1)
    s[0] = s[1] = False
    for i in range(1,int(math.sqrt(n))+1):
        if s[i] == True:
            for j in range(i*i, n+1, i):
                s[j] = False
    return s
s = snt(b)
dem = 0
for i in range(a, b+1):
    if s[i] and i == int(str(i)[::-1]):
        dem += 1
print(dem)

