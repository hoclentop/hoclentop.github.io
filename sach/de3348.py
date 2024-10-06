#DE3348.PY - Tran Huu Nam - hsgtin.vn - 2024
import bisect
def diem(i, j):
    S = a[j] - a[i-1]
    if S % 2 == 1:
        return 0
    k = bisect.bisect_left(a[i:j], a[i-1] + S // 2) + i
    if k >= j:
        return 0
    if a[k]!=a[i-1]+S//2: return 0
    return 1 + max(diem(i, k), diem(k + 1, j))
def main():
    import sys
    input = sys.stdin.read
    data = input().split()
    T = int(data[0])
    index = 1
    a = [0] * 20001
    for _ in range(T):
        n = int(data[index])
        index += 1
        for i in range(1, n + 1):
            a[i] = int(data[index])
            index += 1
            a[i] += a[i - 1]
        print(diem(1, n))
if __name__ == "__main__":
    main()

