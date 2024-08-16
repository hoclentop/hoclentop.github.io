//DE3337.PY - Tran Huu Nam - hsgtin.vn - 2024
import heapq
def solve():
    n = int(input())
    a = [(0, 0)] * (n + 1)
    for i in range(n):
        a[i] = tuple(map(int, input().split()))
    L, D = map(int, input().split())
    ans = 0
    pq = []
    for i in range(n + 1):
        a[i] = (L - a[i][0], a[i][1])
        while pq and D < a[i][0]:
            D += -heapq.heappop(pq)
            ans += 1
        if D >= a[i][0]:
            heapq.heappush(pq, -a[i][1])
        else:
            print("-1")
            return
    print(ans)
def main():
    import sys
    input = sys.stdin.read
    data = input().split()
    idx = 0
    t = int(data[idx])
    idx += 1
    while t > 0:
        solve()
        t -= 1
if __name__ == "__main__":
    main()

