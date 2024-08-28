def nen(n):
    for i in range(2, 61):
        if n % i != 0:
            return i

def donen(n):
    d = 0
    while n > 2:
        n = nen(n)
        d += 1
    return d

a, b = map(int, input().split())
s = 0
for n in range(a, b + 1):
    s += donen(n)
print(s)
