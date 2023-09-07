n = int(input())
a = [int(x) for x in input().split()]
for i in range(n):
    dem = 0
    for j in range(i+1):
        if a[i]==a[j]:
            dem+=1
    if dem==1:
        print(a[i], end=" ")
