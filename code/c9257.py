n, k = [int(x) for x in input().split()]
x=1
while n>0:
    if x%k != 0: n-=1
    x+=1
print(x-1)