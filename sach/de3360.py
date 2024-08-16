//DE3360.PY - Tran Huu Nam - hsgtin.vn - 2024
import sys
def main():
    n = int(input())
    d = 0
    dmax = 0
    k = 0
    for _ in range(n):
        s = input() + "A"
        d = 0
        for char in s:
            if char in ['W', 'A', 'R']:
                if d > dmax:
                    dmax = d
                    k = 1
                elif d == dmax:
                    k += 1
                d = 0
            else:
                d += 1
    if dmax > 0:
        print(dmax, k)
    else:
        print("NO")
if __name__ == "__main__":
    main()

