//DE3302.PY - Tran Huu Nam - hsgtin.vn - 2024
n=int(input())
A=[[0]*101 for _ in range(n)]
for i in range(n):
    a=list(map(int,input().split()))
    for j in range(n):
        A[i][j]=a[j]
dp=[['']*101 for _ in range(n)]
for i in range(n):
    for j in range(n):
        dp[i][j]=max(dp[i-1][j],dp[i][j-1])+str(A[i][j]);
val=int(dp[n-1][n-1],2)
val=hex(val)
val=val[2:len(val)]
print(val.upper())

