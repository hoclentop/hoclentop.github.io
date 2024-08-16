//DE3390.PY - Tran Huu Nam - hsgtin.vn - 2024
import sys
a = [0] * 30001
n = 0
sum_val = 0
kq = 0
def main():
    global n, sum_val, kq
    input = sys.stdin.read
    data = input().split()
    n = int(data[0])
    for i in range(1, n + 1):
        a[i] = int(data[i])
        sum_val += a[i]
    for i in range(n, 0, -1):
        sum_val -= a[i]
        kq += a[i] * sum_val
    print(kq)
if __name__ == "__main__":
    main()

