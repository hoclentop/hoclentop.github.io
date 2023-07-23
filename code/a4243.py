m,n = [int(x) for x in input().split()]
a=[]
for i in range(m):
    b = [int(x) for x in input().split()]
    a.append(b);
for j in range(n):
    for i in range(m):
        print(a[i][j],end=" ")
    print()