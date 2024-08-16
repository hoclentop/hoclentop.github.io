//DE3363.PY - Tran Huu Nam - hsgtin.vn - 2024
import sys
from typing import List
class ST:
    def __init__(self, n: int):
        self.n = n
        self.seg = [0] * (4 * n + 1)
        self.lazy = [0] * (4 * n + 1)
        self.save_seg = [0] * (4 * n + 1)
    def build(self, l: int, r: int, node: int):
        if l == r:
            self.save_seg[node] = 1
            return
        m = (l + r) // 2
        self.build(l, m, node * 2)
        self.build(m + 1, r, node * 2 + 1)
        self.save_seg[node] = self.save_seg[node * 2] + self.save_seg[node * 2 + 1]
    def push(self, node: int):
        self.seg[node * 2] += self.lazy[node] * self.save_seg[node * 2]
        self.lazy[node * 2] += self.lazy[node]
        self.seg[node * 2 + 1] += self.lazy[node] * self.save_seg[node * 2 + 1]
        self.lazy[node * 2 + 1] += self.lazy[node]
        self.lazy[node] = 0
    def up_point(self, u: int, v: int, l: int, r: int, node: int):
        if u > r or l > v:
            return
        if u <= l and r <= v:
            self.seg[node] = self.save_seg[node] = 0
            return
        m = (l + r) // 2
        self.push(node)
        self.up_point(u, v, l, m, node * 2)
        self.up_point(u, v, m + 1, r, node * 2 + 1)
        self.seg[node] = self.seg[node * 2] + self.seg[node * 2 + 1]
        self.save_seg[node] = self.save_seg[node * 2] + self.save_seg[node * 2 + 1]
    def up_range(self, u: int, v: int, l: int, r: int, node: int, val: int):
        if u > r or l > v:
            return
        if u <= l and r <= v:
            self.seg[node] += self.save_seg[node] * val
            self.lazy[node] += val
            return
        m = (l + r) // 2
        self.push(node)
        self.up_range(u, v, l, m, node * 2, val)
        self.up_range(u, v, m + 1, r, node * 2 + 1, val)
        self.seg[node] = self.seg[node * 2] + self.seg[node * 2 + 1]
    def get(self, u: int, v: int, l: int, r: int, node: int) -> int:
        if u > r or l > v:
            return 0
        if u <= l and r <= v:
            return self.seg[node]
        m = (l + r) // 2
        self.push(node)
        return self.get(u, v, l, m, node * 2) + self.get(u, v, m + 1, r, node * 2 + 1)
def main():
    input = sys.stdin.read
    data = input().split()
    n = int(data[0])
    a = list(map(int, data[1:n+1]))
    las = [0] * (2 * 10**5 + 1)
    pre_las = [0] * (2 * 10**5 + 1)
    S = ST(n)
    S.build(1, n, 1)
    ans = 0
    for i in range(1, n + 1):
        ans += S.get(las[a[i]] + 1, i - 1, 1, n, 1)
        if las[a[i]]:
            S.up_point(las[a[i]], las[a[i]], 1, n, 1)
            S.up_range(pre_las[a[i]] + 1, las[a[i]] - 1, 1, n, 1, -1)
        S.up_range(las[a[i]] + 1, i - 1, 1, n, 1, 1)
        pre_las[a[i]], las[a[i]] = las[a[i]], i
    print(ans)
if __name__ == "__main__":
    main()

