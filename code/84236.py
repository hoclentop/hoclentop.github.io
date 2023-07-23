n = int(input())
a = [int(x) for x in input().split()]
k = int(input())
dem=0
for i in range(n):
    if a[i]==k :
        dem+=1
print(dem)
