//DE3378.PY - Tran Huu Nam - hsgtin.vn - 2024
import sys
from collections import defaultdict
def main():
    n = int(sys.stdin.readline().strip())
    h = defaultdict(int)
    for _ in range(n):
        s = sys.stdin.readline().strip()
        if h[s] == 0:
            print(s)
        else:
            print(f"{s}{h[s]}")
        h[s] += 1
if __name__ == "__main__":
    main()

