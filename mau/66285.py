n = int(input())
a = [int(x) for x in input().split()]
u, v = [int(x) for x in input().split()]
u -= 1
v -= 1
for i in range((v-u-1)//2+1):
    a[u+i],a[v-i] = a[v-i], a[u+i]
for i in range(n):
    print(a[i],end=" ")
