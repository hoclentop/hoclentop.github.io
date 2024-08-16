//DE3315.PY - Tran Huu Nam - hsgtin.vn - 2024
import sys
def main():
    x, n, k, d = 0, 0, 0, 0
    s = 0
    input_data = sys.stdin.read().split()
    k = int(input_data[0])
    n = int(input_data[1])
    for i in range(n):
        x = int(input_data[i + 2])
        if x > k:
            s += x
            d += 1
    if d > 0:
        print(s)
        print(d)
        print("TRUE")
    else:
        print("FALSE")
if __name__ == "__main__":
    main()
import sys
def main():
    n, x, dem = 0, 0, 0
    D = [False] * 41
    input_data = sys.stdin.read().split()
    n = int(input_data[0])
    for i in range(n):
        x = int(input_data[i + 1])
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

