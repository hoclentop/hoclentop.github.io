//DE3347.PY - Tran Huu Nam - hsgtin.vn - 2024
import sys
def nhohon(a, b):
    if len(a) == len(b):
        return a < b
    return len(a) < len(b)
def main():
    s = input().strip()
    nho = 0
    n = len(s) + 1
    s = "s" + s + "s"
    p = ""
    pmax = ""
    pmin = "9" * n
    for i in range(1, n + 1):
        if s[i].isdigit():
            p += s[i]
        else:
            if s[i - 1].isdigit():
                while p[0] == '0' and len(p) > 1:
                    p = p[1:]
                if nhohon(p, pmin):
                    pmin = p
                if nhohon(pmax, p):
                    pmax = p
            p = ""
    while len(pmin) < len(pmax):
        pmin = '0' + pmin
    p = '0' * len(pmax)
    for i in range(len(pmax) - 1, -1, -1):
        a = int(pmax[i]) - int(pmin[i]) - nho
        if a < 0:
            a += 10
            nho = 1
        else:
            nho = 0
        p = p[:i] + str(a % 10) + p[i + 1:]
    while p[0] == '0' and len(p) > 1:
        p = p[1:]
    print(p)
if __name__ == "__main__":
    main()

