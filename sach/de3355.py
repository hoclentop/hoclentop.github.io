//DE3355.PY - Tran Huu Nam - hsgtin.vn - 2024
import math
def tongcs(k):
    s = 0
    while k > 0:
        s = s + k % 10
        k //= 10
    return s
def main():
    n = int(input())
    m = n - n % 10
    dem = 0
    for k in range(m, n + 1):
        if tongcs(k) % 2 == 0:
            dem += 1
    dem = dem + m // 2 - 1
    print(dem)
if __name__ == "__main__":
    main()

