n = int(input())
a = [int(x) for x in input().split()]
v, k = [int(x) for x in input().split()]
for i in range(k):
    print(a[v+i-1], end=" ")
