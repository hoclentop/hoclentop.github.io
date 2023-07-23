n=int(input())
a = [int(x) for x in input().split()]
dem=0
for i in range(n):
    s=0
    for j in range(i,n):
        s+=a[j]
        if s==0: dem+=1
print(dem)