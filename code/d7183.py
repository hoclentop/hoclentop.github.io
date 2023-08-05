n = int(input())
s = 1
for i in range(1,n + 1):
  s = s*i
dem = 0
while s % 10 == 0:
  dem = dem +1
  s = s // 10
print(dem)