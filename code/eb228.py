n = int(input())
a = [int(x) for x in input().split()]
sln=a[0]
for i in range(n):
    if a[i]>sln:
        sln=a[i]
print(sln)