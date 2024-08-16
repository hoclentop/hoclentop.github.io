//DE3369.PY - Tran Huu Nam - hsgtin.vn - 2024
import sys
def main():
    n, d, m, dem = 0, 0, 0, 0
    input_data = sys.stdin.read().split()
    n = int(input_data[0])
    d = int(input_data[1])
    m = int(input_data[2])
    for i in range(n):
        x = int(input_data[3 + i])
        if x % d == 0 or x % m == 0:
            dem += 1
    print(dem)
if __name__ == "__main__":
    main()

