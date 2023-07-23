n = int(input())
a = [int(x) for x in input().split()]
k = int(input())
v=-1
for i in range(n):
    if a[i]==k :
        v=i
        break
print(v+1)
