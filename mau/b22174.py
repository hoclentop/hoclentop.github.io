def cuoi(n):
    return n%10
def dau(n):
    while n>9:
        n//=10
    return n
m, n, p = [int(x) for x in input().split()]
a = [int(x) for x in input().split()]
b = [int(x) for x in input().split()]
c = [int(x) for x in input().split()]
d = [0] * 10
mc = max(c)
s = [0] * 1000001
for x in c:
    d[dau(x)]+=1
    s[x]+=1
dem=0
t=0
for x in a:
    for y in b:
        if x!=y and cuoi(x)==dau(y):
            t = d[cuoi(y)]
            if dau(y)==cuoi(y): t-=s[y]
            if dau(x)==cuoi(y): t-=s[x]
            dem+=t
print(dem)
