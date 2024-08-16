//DE3343.PY - Tran Huu Nam - hsgtin.vn - 2024
import sys
from typing import List, Tuple
D: List[Tuple[int, int]] = [(0, 0)] * 200001
n, a, b, h, hmax = 0, 0, 0, 0, 0
def main():
    global n, a, b, h, hmax
    input = sys.stdin.read
    data = input().split()
    n = int(data[0])
    index = 1
    for i in range(n):
        a = int(data[index])
        b = int(data[index + 1])
        D[2 * i] = (a, 0)
        D[2 * i + 1] = (b, 1)
        index += 2
    D.sort()
    for i in range(2 * n):
        if D[i][1] == 0:
            h += 1
            hmax = max(hmax, h)
        else:
            h -= 1
    print(hmax)
if __name__ == "__main__":
    main()

