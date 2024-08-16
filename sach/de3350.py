//DE3350.PY - Tran Huu Nam - hsgtin.vn - 2024
import math
def main():
    n, a, b, c, d, x, y, z, t, p, s = int(input()), 0, 0, 0, 0, 0, 0, 0, 0, 0, -1
    for d in range(1, int(math.sqrt(n)) + 1):
        for c in range(1, d + 1):
            for b in range(1, c + 1):
                p = n - d * d - c * c - b * b
                if p <= 0 or p > b * b:
                    continue
                a = int(math.sqrt(p))
                if a * a == p and s < a + b + c + d:
                    x, y, z, t = a, b, c, d
                    s = x + y + z + t
    if s < 0:
        print(-1)
    else:
        print(x, y, z, t)
if __name__ == "__main__":
    main()

