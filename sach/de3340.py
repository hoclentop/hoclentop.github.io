//DE3340.PY - Tran Huu Nam - hsgtin.vn - 2024
import sys
N = 300000
n, kq = 0, 0
lw = [0] * (N + 1)
up = [0] * (N + 1)
nu = [0] * (N + 1)
def check(t, k):
    return up[k] - up[t] > 0 and lw[k] - lw[t] > 0 and nu[k] - nu[t] > 0
def main():
    input = sys.stdin.read
    data = input().split()
    n = int(data[0])
    for i in range(1, n + 1):
        x = data[i]
        up[i] = up[i - 1]
        nu[i] = nu[i - 1]
        lw[i] = lw[i - 1]
        if x.islower():
            lw[i] += 1
        elif x.isupper():
            up[i] += 1
        else:
            nu[i] += 1
    i = 0
    for j in range(1, n + 1):
        while i + 6 <= j and check(i, j):
            i += 1
        kq += i
    print(kq)
if __name__ == "__main__":
    main()

