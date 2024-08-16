//DE3301.PY - Tran Huu Nam - hsgtin.vn - 2024
n=int(input())
A=list(map(int,input().split()))
A.sort()
l,cnt=0,0
while l<n-1:
    A[l]-=1
    if A[l]==0:
        l+=1
    n-=1
    cnt+=1
print(cnt)

