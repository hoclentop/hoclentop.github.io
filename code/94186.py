n = int(input())
a = [int(x) for x in input().split()]
s = 0
for i in range( 0,n):
  s = s + (i + 1)*a[i]
print(s)