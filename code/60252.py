x1,y1=[int(x) for x in input().split()]
x2,y2=[int(x) for x in input().split()]
a=y2-y1
b=x1-x2
c=-x1*(y2-y1)-y1*(x1-x2)
print(a,b,c)