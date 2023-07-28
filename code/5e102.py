n = int(input())
dem = 0
while n > 0:
  c = n % 10
  if c == 0:
    dem = dem +1
  n = n // 10
print(dem)