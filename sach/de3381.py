//DE3381.PY - Tran Huu Nam - hsgtin.vn - 2024
import sys
def main():
    input = sys.stdin.read
    data = input().split()
    n = int(data[0])
    a = int(data[1])
    r = int(data[2])
    m = int(data[3])
    if m > a + r:
        m = a + r
    h = [0] + [int(data[i]) for i in range(4, n + 4)]
    h.sort()
    x = 1
    y = n
    while x < y and h[x + 1] == h[x]:
        x += 1
    while y > x and h[y - 1] == h[y]:
        y -= 1
    c = 0
    while h[y] - h[x] >= 2:
        c += m
        h[x] += 1
        x -= 1
        while x < y and h[x + 1] == h[1]:
            x += 1
        h[y] -= 1
        y += 1
        while y > x and h[y - 1] == h[n]:
            y -= 1
    if x < y:
        c += min(x * a, (n - x) * r)
    print(c)
if __name__ == "__main__":
    main()



C?i ti?n thu?t toán:
Sau khi di?u ch?nh d? cao các b?c tu?ng d? d? cao ch? còn t?i da 2 m?c là k và k+1. Ta bi?t giá tr? k ngay t? d?u:
k = sum(h[1..n]) // n;
V?y ta ki?m tra v?i 2 d? cao k và k+1 ngay luôn. V?i m?i d? cao, ta tính s? viên thêm vào và s? viên g? ra, t? dó tính ra chi phí.
Thu?t toán:
1. Nh?p d? li?u;
2. k = sum(h[1..n]) // n;
3. t1=t2=b1=b2=0;
4. V?i m?i i ch?y t? 1 d?n n:
    4.1. N?u h[i] = k thì:
          4.1.1. t1=t1 + k-h[i];
          4.1.2. t2=t2 + k+1 – h[i];
    4.2. ngu?c l?i thì:
          4.2.1. b1 = b1 + h[i]-k;
          4.2.2. b2 = b2 + h[i]-k-1;
5. c1=t1*m + (b1-t1)*r;
6. c2=b2*m + (t2-b2)*a;
7. Vi?t min(c1, c2);
CODE DE33A3.*

