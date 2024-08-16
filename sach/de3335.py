//DE3335.PY - Tran Huu Nam - hsgtin.vn - 2024
import bisect
n, m = 0, 0
a = []
def main():
    global n, m, a
    n = int(input())
    a = [int(input()) for _ in range(n)]
    a.sort()
    m = int(input())
    for _ in range(m):
        s, f = map(int, input().split())
        x = bisect.bisect_left(a, s)
        y = bisect.bisect_right(a, f) - 1
        if 0 <= x < n and 0 <= y < n:
            print(y - x + 1)
        else:
            print(0)
if __name__ == "__main__":
    main()

