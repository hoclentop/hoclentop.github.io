//DE3354.PY - Tran Huu Nam - hsgtin.vn - 2024
import sys
n, m, a, b, c = map(int, sys.stdin.readline().split())
cd = 0
if n > a:
    cd = n - a
md = 0
if m > b:
    md = m - b
v = cd + md
g = 0
if v > c:
    g = v - c
print(g)

