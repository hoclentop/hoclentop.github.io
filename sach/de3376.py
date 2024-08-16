//DE3376.PY - Tran Huu Nam - hsgtin.vn - 2024
import sys
F = [[0] * 5001 for _ in range(5001)]
x = [0] * 5001
n = 0
T = [[0] * 5001 for _ in range(5001)]
def main():
    input = sys.stdin.read
    data = input().split()
    global n
    n = int(data[0])
    for i in range(1, n + 1):
        x[i] = int(data[i])
        T[i][i] = T[i][i + 1] = i
    for i in range(n - 2, 0, -1):
        for j in range(i + 2, n + 1):
            res = 1e18
            cost = (x[j] - x[i]) * (x[j] - x[i])
            for k in range(T[i][j - 1], min(j - 1, T[i + 1][j]) + 1):
                if res >= F[i][k] + F[k][j] + cost:
                    res = F[i][k] + F[k][j] + cost
                    T[i][j] = k
            F[i][j] = res
    print(F[1][n])
if __name__ == "__main__":
    main()

