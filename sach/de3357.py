//DE3357.PY - Tran Huu Nam - hsgtin.vn - 2024
import sys
n, m, smau, dmin = 0, 0, 0, float('inf')
c = [0] * 1000005
a = [0] * 10000005
s = ""
def main():
    global n, m, smau, dmin, c, a, s
    input = sys.stdin.read
    data = input().split()
    n = int(data[0])
    m = int(data[1])
    if n > 1e6:
        print(0)
        return
    for i in range(1, n + 1):
        a[i] = int(data[i + 1])
    c = [0] * 1000005
    i = 1
    smau = 0
    dmin = float('inf')
    for j in range(1, n + 1):
        c[a[j]] += 1
        if c[a[j]] == 1:
            smau += 1
        while c[a[i]] > 1 and i <= n:
            c[a[i]] -= 1
            i += 1
        if smau == m:
            dmin = min(dmin, j - i + 1)
    if dmin == float('inf'):
        dmin = 0
    print(dmin)
if __name__ == "__main__":
    main()

