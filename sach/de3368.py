//DE3368.PY - Tran Huu Nam - hsgtin.vn - 2024
import bisect
from collections import defaultdict
N = 10**6 + 1
n, m, h, w = 0, 0, 0, 0
id = []
event = defaultdict(list)
save = defaultdict(list)
a = []
B = []
b = []
def up(x, y, val):
    while x <= n:
        _y = y
        while _y <= m:
            B[x][_y] += val
            _y += (_y & -_y)
        x += (x & -x)
def get(x, y):
    ans = 0
    while x:
        _y = y
        while _y:
            ans += B[x][_y]
            _y -= (_y & -_y)
        x -= (x & -x)
    return ans
def sum(x, y, _x, _y):
    return get(_x, _y) - get(_x, y - 1) - get(x - 1, _y) + get(x - 1, y - 1)
def main():
    global n, m, h, w, a, B, b
    n, m, h, w = map(int, input().split())
    a = [[0] * (m + 1) for _ in range(n + 1)]
    B = [[0] * (m + 1) for _ in range(n + 1)]
    b = [[[0] * 20 for _ in range(m + 1)] for _ in range(n + 1)]
    for i in range(1, n + 1):
        for j in range(1, m + 1):
            a[i][j] = int(input())
            id.append(a[i][j])
    id.sort()
    id = list(dict.fromkeys(id))
    for i in range(1, n + 1):
        for j in range(1, m + 1):
            a[i][j] = bisect.bisect_left(id, a[i][j]) + 1
    for k in range(20):
        for i in range(1, n + 1):
            for j in range(1, m + 1):
                b[i][j][k] = b[i - 1][j][k] + b[i][j - 1][k] - b[i - 1][j - 1][k] + ((a[i][j] >> k) & 1)
    ans = 0
    lim = h * w
    for i in range(1, n + 1):
        for j in range(1, m + 1):
            event[a[i][j]].append((i, j))
            if i < h or j < w:
                continue
            mask = 0
            for k in range(20):
                cnt = b[i][j][k] - b[i - h][j][k] - b[i][j - w][k] + b[i - h][j - w][k]
                if cnt * 2 > lim:
                    mask |= (1 << k)
            save[mask].append((i, j))
    for i in range(1, N):
        if not save[i]:
            continue
        for x in event[i]:
            up(x[0], x[1], 1)
        for v in save[i]:
            x = v[0] - h + 1
            y = v[1] - w + 1
            _x = v[0]
            _y = v[1]
            if sum(x, y, _x, _y) * 2 > lim:
                ans += 1
        for x in event[i]:
            up(x[0], x[1], -1)
    print((n - h + 1) * (m - w + 1) - ans)
if __name__ == "__main__":
    main()

