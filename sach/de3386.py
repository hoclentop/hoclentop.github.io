//DE3386.PY - Tran Huu Nam - hsgtin.vn - 2024
import sys
f = [0] * 81
s = [0] * 81
def main():
    input = sys.stdin.read
    data = input().split()
    m = int(data[0])
    f[0] = 0
    f[1] = 1
    s[0] = 0
    s[1] = 1
    for i in range(2, 81):
        f[i] = f[i - 1] + f[i - 2]
        s[i] = s[i - 1] + f[i]
    for i in range(1, m + 1):
        n = int(data[i])
        print(s[n], end=" ")
if __name__ == "__main__":
    main()

