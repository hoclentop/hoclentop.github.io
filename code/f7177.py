s = input()
n = len(s)
dem = 0
for i in range(0, n):
  if (s[i] >= '0') and (s[i] <= '9'):
    dem = dem + 1
print(dem)