n = int(input())
a = [0]*100
a = [int(x) for x in input().split()]
for i in range(1,n):
  if a[i]* a[i- 1] >= 0:
    print('NO')
    quit()
print('YES')