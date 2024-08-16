//DE3379.PY - Tran Huu Nam - hsgtin.vn - 2024
import math
def is_prime(k):
    if k < 2:
        return False
    ck = int(math.sqrt(k))
    for x in range(2, ck + 1):
        if k % x == 0:
            return False
    return True
def main():
    n = int(input())
    dem = 0
    cn = int(math.sqrt(n))
    for p in range(2, cn + 1):
        if not is_prime(p):
            continue
        y = p
        s = 1
        while y <= n:
            s += y
            if is_prime(s):
                dem += 1
            y *= p
    print(dem)
if __name__ == "__main__":
    main()

