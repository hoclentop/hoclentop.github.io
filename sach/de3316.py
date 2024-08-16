//DE3316.PY - Tran Huu Nam - hsgtin.vn - 2024
import sys
def main():
    n = int(input())
    D = [False] * 41
    dem = 0
    for _ in range(n):
        x = int(input())
        D[x] = True
    for i in range(1, 41):
        if D[i]:
            dem += 1
    print(dem)
    for i in range(1, 41):
        if D[i]:
            print(i, end=" ")
if __name__ == "__main__":
    main()

