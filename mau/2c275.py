def scs(k):
    s = 0
    while k > 0:
        s += 1
        k //= 10
    return s
n=int(input())
t = 0
for x in range(1, n+1):
    t += scs(x)
print(t)
