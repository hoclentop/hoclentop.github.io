n=int(input())
for k in range(1,n+1):
    S=0
    for i in range(1,k):
        if k%i==0:
            S=S+i
    if k==S:
        print(k)
