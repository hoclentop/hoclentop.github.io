m,n = [int(x) for x in input().split()]
a=[]
for i in range(m):
    b=[int(x) for x in input().split()]
    a.append(b)
dem=0
for i in range(m):
    for j in range(n):
        ok=True;
        for x in range(n):
            if a[i][j]>a[i][x]:
                ok=False
                break
        for x in range(m):
            if a[i][j]<a[x][j]:
                ok=False
                break
        if ok:
            print(i+1,j+1)
            dem+=1
if dem==0:
    print("KHONG CO")