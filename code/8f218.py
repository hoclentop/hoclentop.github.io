n = int(input())
a = [int(x) for x in input().split()]
dem = 0
for i in range(0, n):
  if a[i] % 40 == 0:
    dem = dem + 1
print(dem)
