//DE3342.PY - Tran Huu Nam - hsgtin.vn - 2024
import math
def U(n):
    dem = 0
    cn = int(math.sqrt(n))
    if cn * cn == n:
        dem += 1
        cn -= 1
    for i in range(1, cn + 1):
        if n % i == 0:
            dem += 2
    return dem
def main():
    n = int(input())
    res = 0
    for _ in range(n):
        x = int(input())
        res += x * U(x)
    print(res)
if __name__ == "__main__":
    main()

