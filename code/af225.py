n = int(input())
a = [int(x) for x in input().split()]
s=0
for i in range(n):
    s+=a[i]
print(s)