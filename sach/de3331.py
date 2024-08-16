//DE3331.PY - Tran Huu Nam - hsgtin.vn - 2024
import sys
n = 0
s = 0
a = [0] * 201
d = [False] * 500001
c = []
def main():
    global n, s, a, d, c
    input = sys.stdin.read
    data = input().split()
    index = 0
    n = int(data[index])
    index += 1
    s = int(data[index])
    index += 1
    for i in range(1, n + 1):
        a[i] = int(data[index])
        index += 1
    d[0] = True
    t = 0
    for i in range(1, n + 1):
        for x in range(t, -1, -1):
            if d[x] and x + a[i] <= s:
                d[x + a[i]] = True
        t += a[i]
    if not d[s]:
        print(-1)
        return
    for i in range(n, 0, -1):
        if s >= a[i] and d[s - a[i]]:
            c.append(a[i])
            s -= a[i]
    print(1)
    for i in range(len(c) - 1, -1, -1):
        print(c[i], end=" ")
if __name__ == "__main__":
    main()

