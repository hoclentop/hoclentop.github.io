n=int(input())
a = [int(x) for x in input().split()]
b = [0] * n
b[0] = a[0]
for i in range(1,n):
    b[i]=max(b[i-1],a[i])
for i in range(n):
    print(b[i], end=" ")