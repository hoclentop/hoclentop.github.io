//DE3330.PY - Tran Huu Nam - hsgtin.vn - 2024
import itertools
import bisect
n, m = 0, 0
s, k = 0, 0
a = [0] * 201
x = [0] * 201
y = [0] * 201
b = []
stop = False
def thu(i, t):
    if i > m:
        b.append(t)
        return
    for v in range(2):
        x[i] = v
        thu(i + 1, t + v * a[i])
def thu2(i, t):
    if i > m:
        if t == k:
            global stop
            stop = True
            y[:m+1] = x[:m+1]
        return
    if stop:
        return
    for v in range(2):
        x[i] = v
        thu2(i + 1, t + v * a[i])
def thu3(i, t):
    if i > n:
        d = s - t
        if bisect.bisect_left(b, d) != len(b) and b[bisect.bisect_left(b, d)] == d:
            global stop, k
            stop = True
            k = d
            y[m+1:n+1] = x[m+1:n+1]
        return
    if stop:
        return
    for v in range(2):
        x[i] = v
        thu3(i + 1, t + v * a[i])
def main():
    global n, s, m, a, b, stop
    n, s = map(int, input().split())
    a[1:n+1] = map(int, input().split())
    m = n // 2
    thu(1, 0)
    b.sort()
    thu3(m + 1, 0)
    if not stop:
        print(-1)
        return
    stop = False
    thu2(1, 0)
    print(1)
    for i in range(1, n + 1):
        if y[i] == 1:
            print(a[i], end=" ")
    print()
if __name__ == "__main__":
    main()

