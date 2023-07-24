a,b=[int(x) for x in input().split()]
c=1
for i in range(1, b+1):
    c*=a
d=0
while c>0:
    d+=1
    c//=10
print(d)