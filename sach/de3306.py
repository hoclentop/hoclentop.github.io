//DE3306.PY - Tran Huu Nam - hsgtin.vn - 2024
MOD = int(1e9 + 7)
def main():
    n = int(input())
    s = set()
    for _ in range(n):
        p = input().strip()
        s.add(p)

    x = input().strip()
    m = len(x)
    F = [0] * (m + 1)
    F[0] = 1

    for i in range(1, m + 1):
        for l in range(1, 101):
            j = i - l
            if j >= 0 and x[j:i] in s:
                F[i] = (F[i] + F[j]) % MOD

    print(F[m])
if __name__ == "__main__":
    main()

