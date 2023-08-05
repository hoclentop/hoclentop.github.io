n = int(input())
s = 1
for i in range(1,n + 1):
  s = s*i
while s % 10 ==0:
  s = s // 10
print(s%10)