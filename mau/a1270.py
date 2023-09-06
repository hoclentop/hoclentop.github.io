n=int(input())
a = [int(x) for x in input().split()]
print(a[0], end=" ")
for i in range(1,n):
    if a[i]<=a[i-1]: print()
    print(a[i], end=" ")
