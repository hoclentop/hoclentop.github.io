n=int( input())
c=1
for i in range(1, n+1):
    c*=i
d=0
while c>0:
    d+=1
    c//=10
print(d)