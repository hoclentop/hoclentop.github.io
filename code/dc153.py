a, n = [int(x) for x in input().split()]
T = 1
for i in range(1, n +1):
  T = T*a
if T % 1000 < 100:
  print('0',T % 1000)
else:
  print(T % 1000)