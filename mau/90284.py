def xeptruoc(a, b):
    if a[0]*b[1]<a[1]*b[0]:
        return True
    else:
        return False
n = int(input())
A = []
for i in range(n):
    x, y = [int(x) for x in input().split()]
    A.append((x,y))
for i in range(n-1):
    for j in range(i+1, n):
        if xeptruoc(A[i], A[j])==False:
            A[i], A[j] = A[j], A[i]
for i in range(n):
    print(A[i][0],A[i][1])
