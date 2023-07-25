def ktdoixung(s):
    n=len(s)-1
    i=0
    while i<n and s[i]==s[n]:
        i+=1
        n-=1
    return i>=n
s=input()
n=len(s)
for i in range(n):
    for j in range(i,n):
        p=s[i:j+1]
        if ktdoixung(p): 
            print(p)
