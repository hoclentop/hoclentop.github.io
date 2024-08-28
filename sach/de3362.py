n = int(input())
a=[int(x) for x in input().split()]
c = [0] * 200001
dem = 0
for i in range(n):
    m = 0
    c = [0] * 200001
    for j in range(i, n):
        c[a[j]] += 1
        if c[a[j]] == 1:
            m += 1
        if c[a[j]] == 2:
            m -= 1
        if c[a[i]] > 1:
            break
        if c[a[j]] > 1:
            continue
        if m > 2:
            dem += m - 2
print(dem)
