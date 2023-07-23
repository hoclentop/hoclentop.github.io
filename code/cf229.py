n = int(input())
a = [int(x) for x in input().split()]
v=0
for i in range(1,n):
    if a[i]<a[v]:
        v=i
print(a[v],v+1)