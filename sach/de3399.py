//DE3399.PY - Tran Huu Nam - hsgtin.vn - 2024
import sys
from typing import List, Tuple
def main():
    input = sys.stdin.read
    data = input().split()
    index = 0
    n = int(data[index])
    m = int(data[index + 1])
    index += 2
    a: List[Tuple[int, int]] = []
    c: List[int] = []
    for _ in range(n):
        a.append((int(data[index]), int(data[index + 1])))
        index += 2
    for _ in range(m):
        c.append(int(data[index]))
        index += 1
    c.sort(reverse=True)
    a.sort(key=lambda x: (-x[1], -x[0]))
    j = 0
    for i in range(n):
        if a[i][0] <= c[j]:
            j += 1
        if j == m:
            break
    print(j)
if __name__ == "__main__":
    main()

