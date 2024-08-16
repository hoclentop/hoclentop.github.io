//DE3309.PY - Tran Huu Nam - hsgtin.vn - 2024
n, m = map(int, input().split())
a = list(map(int, input().split()))
l, r = 0, 0
sl = [0]*(m+1)
k = 0
dmin = n
while r < n:
    if sl[a[r]] == 0:
        k += 1
    sl[a[r]] += 1
    while k == m:
        dmin = min(dmin, r-l+1)
        if sl[a[l]] == 1:
            k -= 1
        sl[a[l]] -= 1
        l += 1
    r+=1
print(dmin)

