//DE3393.PY - Tran Huu Nam - hsgtin.vn - 2024
import sys
M = 10**9 + 7
def main():
    k = int(sys.stdin.readline().strip())
    res = 0
    ts = 1
    if k <= 11:
        print(1)
    else:
        while ts != 0:
            ts = (ts * 10 + 1) % k
            res = (res * 10 + ts // k) % M
        print(res)
if __name__ == "__main__":
    main()

