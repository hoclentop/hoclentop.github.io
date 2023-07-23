n=int(input())
a = [int(x) for x in input().split()]
#a.sort(reverse=True)
for i in range(n-1):
    for j in range(i+1,n):
        if a[i]<a[j]:
            a[i],a[j]=a[j],a[i]
for x in a: print(x, end=" ")
