n,k = [int(x) for x in input().split()]
a = [int(x) for x in input().split()]
dem=0
for i in range(n-2):
    for j in range(i+1,n-1):
        for t in range(j+1, n):
            if a[i]+a[j]+a[t]==k: 
                dem+=1
print(dem)