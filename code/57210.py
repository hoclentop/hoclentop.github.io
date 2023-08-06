n = int(input())
a = [int(x) for x in input().split()]
for i in range(0, n - 1):
  if a[i] < a[i + 1]:
    print('NO') 
    quit()
print('YES')