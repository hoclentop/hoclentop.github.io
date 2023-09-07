n = int(input())
a = [int(x) for x in input().split()]
for i in range(n):
    if a[i]==0: 
        continue
    k = a[i]
    dem = 0
    for j in range(n):
        if k==a[j]:
            dem+=1
            a[j] = 0
    print(k, dem)
