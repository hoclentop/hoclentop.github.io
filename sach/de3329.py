//DE3329.PY - Tran Huu Nam - hsgtin.vn - 2024
import sys
n, s = map(int, input().split())
a = [0] * 201
x = [0] * 201
y = [0] * 201
stop = False
def thu(i, t):
    global stop
    if i > n:
        if s == t:
            stop = True
            y[:n+1] = x[:n+1]
        return
    if stop:
        return
    for v in range(2):
        x[i] = v
        thu(i + 1, t + v * a[i])
for i in range(1, n + 1):
    a[i] = int(input())
thu(1, 0)
if stop:
    print(1)
    for i in range(1, n + 1):
        if y[i] == 1:
            print(a[i], end=" ")
else:
    print(-1)

