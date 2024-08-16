//DE3361.PY - Tran Huu Nam - hsgtin.vn - 2024
import bisect
n, q = map(int, input().split())
x = [0] * 100005
for i in range(1, n + 1):
    x[i] = int(input())
x = sorted(x[1:n+1])
for _ in range(q):
    a, b = map(int, input().split())
    i = bisect.bisect_left(x, a)
    j = bisect.bisect_right(x, b)
    print(j - i)

