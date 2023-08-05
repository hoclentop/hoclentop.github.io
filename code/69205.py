a, b = [int(x) for x in input().split()]
def ktnt(n):
  if n < 2 :
    return  False
  for x in range(2, n//2 + 1):
    if n % x == 0:
      return  False
  return True
dem = 0
for x in range(a, b):
  if ktnt(x):
    dem = dem + 1 
print(dem)