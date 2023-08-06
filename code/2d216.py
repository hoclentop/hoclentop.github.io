n = int(input())
a = [int(x) for x in input().split()]
for i in range(0, n-1):
  if (a[i] % 2 + a[i + 1] % 2)!= 1:
    print('NO')
    quit()
print("YES")