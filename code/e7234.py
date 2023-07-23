n = int(input())
a = [int(x) for x in input().split()]
dem=0
for i in range(n):
    if a[i]%2==0:
        dem+=1
print(dem)