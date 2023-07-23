p=input()
p=p+" "
n=len(p)
s=k=0
for i in range(n):
    if p[i].isdigit():
        k=k*10+ord(p[i])-48
    else:
        s+=k
        k=0
print(s)