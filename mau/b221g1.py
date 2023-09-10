s = input()
n = len(s)
dem = 0
for i in range(0, n):
    if s[i] == 'A':
        dem += 1
print(dem)
