import sys
sys.stdin = open("trungthuong.inp","r")
sys.stdout = open("trungthuong.out","w")
n = int(input())
c = [int(x) for x in input().split()]
dem = 0
for i in range (n - 1):
    x = y = c[i]
    for j in range (i + 1,  n):
        if x > c[j]: x = c[j]
        if y < c[j]: y = c[j]
        if (x== min(c[i], c[j])) and (y == max(c[i], c[j])):
            dem += 1
print(dem)
