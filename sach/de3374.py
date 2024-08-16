//DE3374.PY - Tran Huu Nam - hsgtin.vn - 2024
import sys
input = sys.stdin.read
data = input().split()
n = int(data[0])
m = int(data[1])
a = [0] + [int(data[i]) for i in range(2, n + 2)]
class Node:
    def __init__(self):
        self.lazy = 0
        self.val = 0
        self.dem = 0
st = [Node() for _ in range(400005)]
def down(id):
    t = st[id].lazy
    st[id * 2].lazy += t
    st[id * 2 + 1].lazy += t
    st[id * 2].val += st[id * 2].dem * t
    st[id * 2 + 1].val += st[id * 2 + 1].dem * t
    st[id].lazy = 0
def buildtree(id, l, r):
    if l == r:
        st[id].val = a[l]
        st[id].dem = 1
        return
    mid = (l + r) // 2
    buildtree(id * 2, l, mid)
    buildtree(id * 2 + 1, mid + 1, r)
    st[id].val = st[id * 2 + 1].val + st[id * 2].val
    st[id].dem = st[id * 2].dem + st[id * 2 + 1].dem
def xoa(id, l, r, i):
    if i < l or r < i:
        return
    if l == r:
        st[id].val = 0
        st[id].dem = 0
        return
    mid = (l + r) // 2
    down(id)
    xoa(id * 2, l, mid, i)
    xoa(id * 2 + 1, mid + 1, r, i)
    st[id].val = st[id * 2 + 1].val + st[id * 2].val
    st[id].dem = st[id * 2].dem + st[id * 2 + 1].dem
def update(id, l, r, u, v, val):
    if v < l or r < u:
        return
    if u <= l and r <= v:
        st[id].lazy += val
        st[id].val += val * (st[id].dem)
        return
    mid = (l + r) // 2
    down(id)
    update(id * 2, l, mid, u, v, val)
    update(id * 2 + 1, mid + 1, r, u, v, val)
    st[id].val = st[id * 2 + 1].val + st[id * 2].val
    st[id].dem = st[id * 2 + 1].dem + st[id * 2].dem
def solve(id, l, r, u, v, val):
    if v < l or r < u:
        return -1
    if l == r:
        return l
    mid = (l + r) // 2
    if st[id * 2].dem < val:
        return solve(id * 2 + 1, mid + 1, r, u, v, val - st[id * 2].dem)
    else:
        return solve(id * 2, l, mid, u, v, val)
def get(id, l, r, u, v):
    if v < l or r < u:
        return 0
    if u <= l and r <= v:
        return st[id].val
    mid = (l + r) // 2
    down(id)
    return get(id * 2, l, mid, u, v) + get(id * 2 + 1, mid + 1, r, u, v)
buildtree(1, 1, n)
index = n + 2
for _ in range(m):
    z = int(data[index])
    index += 1
    if z == 1:
        x = int(data[index])
        index += 1
        x = solve(1, 1, n, 1, n, x)
        xoa(1, 1, n, x)
    elif z == 2:
        x = int(data[index])
        y = int(data[index + 1])
        k = int(data[index + 2])
        index += 3
        x = solve(1, 1, n, 1, n, x)
        y = solve(1, 1, n, 1, n, y)
        update(1, 1, n, x, y, k)
    elif z == 3:
        x = int(data[index])
        y = int(data[index + 1])
        index += 2
        x = solve(1, 1, n, 1, n, x)
        y = solve(1, 1, n, 1, n, y)
        print(get(1, 1, n, x, y))
import sys
input = sys.stdin.read
data = input().split()
n = int(data[0])
r, b, g = [], [], []
for i in range(1, n + 1):
    x = data[i * 2 - 1]
    d = int(data[i * 2])
    if x == 'r':
        r.append(d)
    elif x == 'b':
        b.append(d)
    elif x == 'g':
        g.append(d)
r.sort()
b.sort()
g.sort()
c = 0
for i in range(len(r)):
    for j in range(len(b)):
        z1 = len([x for x in g if x <= abs(r[i] - b[j])])
        z2 = len([x for x in g if x <= r[i] + b[j]])
        c += z2 - z1
print(c)

