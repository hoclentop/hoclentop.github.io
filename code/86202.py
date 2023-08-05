n = int(input())
def ktnt(n):
  if n < 2 :
    return  False
  for x in range(2, n//2 + 1):
    if n % x == 0:
      return  False
  return True
for x in range(2, n // 2 + 1):
  if ktnt(x) and ktnt(n - x):
    print(x, n - x)