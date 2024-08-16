//DE3372.PY - Tran Huu Nam - hsgtin.vn - 2024
def hamz(s):
    n = len(s)
    z = [0] * n
    l, r = 0, 0
    for i in range(1, n):
        if i <= r:
            z[i] = min(r - i + 1, z[i - l])
        while i + z[i] < n and s[z[i]] == s[i + z[i]]:
            z[i] += 1
        if i + z[i] - 1 > r:
            l = i
            r = i + z[i] - 1
    return z
def main():
    import sys
    input = sys.stdin.read
    data = input().split()
    t = int(data[0])
    index = 1
    for _ in range(t):
        s = data[index]
        p = data[index + 1]
        index += 2
        k = len(p)
        d = 0
        a = hamz(p + 'Z' + s)
        for x in a:
            if x == k:
                d += 1
        if d == 0:
            print(-1)
        else:
            print(d)
            for i in range(len(a)):
                if a[i] == k:
                    print(i - k, end=" ")
            print()
if __name__ == "__main__":
    main()

