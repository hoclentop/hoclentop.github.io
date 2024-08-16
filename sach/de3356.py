//DE3356.PY - Tran Huu Nam - hsgtin.vn - 2024
import sys
n = int(sys.stdin.readline().strip())
s = sys.stdin.readline().strip()
s += "A"
k = 1
dem = 0
for i in range(1, n + 1):
    if s[i] == s[i - 1]:
        k += 1
    else:
        dem += k // 2
        k = 1
print(dem)

