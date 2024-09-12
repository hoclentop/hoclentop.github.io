#DE3387.PY - Tran Huu Nam - hsgtin.vn - 2024
import sys

n = 0
p = input() + 'a'
for x in p:
    if x.isdigit():
        n = n * 10 + int(x)
    elif n > 0:
        break
s = ""
for line in sys.stdin:
    s += line.strip()
c=[0]*256
for y in s:
    x=ord(y)
    c[x] += 1
for y in s:
    x=ord(y)
    if c[x] <= n:
        print(y, end='')
        c[x]=n+1

