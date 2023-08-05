n = int(input())
def ktnt(n):
  if n < 2 :
    return  False
  for x in range(2, n//2 + 1):
    if n % x == 0:
      return  False
  return True
n = n + 1
while not(ktnt(n)):
  n = n + 1
print(n)