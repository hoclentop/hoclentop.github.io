a, b = [int(x) for x in input().split()]
for i in range(0, b):
  print("*", end = '')
print()
for i in range(1, a):
  print('*',end = '')
  for j in range(0, b - 2):
      print(' ', end = '')
  print('*')
for i in range(0, b):
  print("*", end = '')