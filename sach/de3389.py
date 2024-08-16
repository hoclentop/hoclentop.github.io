//DE3389.PY - Tran Huu Nam - hsgtin.vn - 2024
import sys
def main():
    s = input().strip()
    kq = 0
    nho = 0
    for i in range(len(s)):
        if s[i] != '?':
            k = int(s[i])
            kq = (kq + k * (i + 1)) % 7
        else:
            nho = i
    if nho == 0 and kq == 0:
        print(7)
        return
    for i in range(10):
        if i * (nho + 1) % 7 == (7 - kq) % 7:
            print(i)
            return
    print(-1)
if __name__ == "__main__":
    main()

