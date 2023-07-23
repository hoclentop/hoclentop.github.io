n = int(input())
a = [int(x) for x in input().split()]
dmin=-1
for i in range(n):
    if a[i]>0:
        dmin=a[i]
        break
if dmin>0:
    for i in range(n):
        if a[i]>0 and a[i]<dmin:
            dmin=a[i]
if dmin>0:
    print(dmin)
else:
    print("KHONG CO")