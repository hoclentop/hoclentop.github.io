n = int(input())
a = [int(x) for x in input().split()]
dem=0
for i in range(n):
    d=0
    for j in range(n):
        if a[j]==a[i]: 
            d+=1
    if d==1:
        dem+=1
print(dem)