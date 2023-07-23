n = int(input())
a = [int(x) for x in input().split()]
smax=0
for i in range(n):
    dem=0
    for j in range(n):
        if a[j]==a[i]: 
            dem+=1
    if smax<dem:
        v=a[i]
        smax=dem
print(v,smax)