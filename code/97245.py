s=input()
n=len(s)
smax=0
for i in range(n):
    dem=0
    for j in range(n):
        if s[i]==s[j]: dem+=1
    if dem>smax:
        smax=dem
        v=i
print(s[v],smax)