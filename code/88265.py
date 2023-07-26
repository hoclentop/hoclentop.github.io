def ktdxung(s):
    n=len(s)
    j=n-1
    for i in range(n//2+1):
        if s[i]!=s[j]: return False
        j-=1
    return True
s=input()
n=len(s)
stop=False
for d in range(n,0,-1):
    if stop: break
    for i in range(n-d+1):
        p=s[i:i+d]
        if ktdxung(p):
            print(p)
            stop=True