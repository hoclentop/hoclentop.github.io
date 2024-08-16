//DE3312.PY - Tran Huu Nam - hsgtin.vn - 2024
import sys
def main():
    s = sys.stdin.readline().strip()
    dmax = 0
    d = 0
    for i in range(len(s)):
        if s[i] == '0':
            d += 1
            if d > dmax:
                dmax = d
        else:
            d = 0
    print(dmax)
if __name__ == "__main__":
    main()

