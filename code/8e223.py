n=int(input())
a=[int(x) for x in input().split()]
u,v=[int(x) for x in input().split()]
u-=1
v-=1
n=n-(v-u+1)
for i in range(u,n):
    a[i]=a[i+v+1-u]
x,y=[int(x) for x in input().split()]
y-=1
for i in range(n-1, y-1,-1):
    a[i+1]=a[i]
a[y]=x**2
n+=1
a[n]=x*x
n+=1
for i in range(n):
    print(a[i],end=" ")