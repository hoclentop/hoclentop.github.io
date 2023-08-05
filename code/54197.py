n = int(input())
def sohh(n): 
  s= 0
  for i in range(1, (n//2) +1):
    if n % i == 0:
      s = s + i
  if s == n:
    kt = True
  else:
   kt = False
  return kt 
for i in range(1, n + 1):
  if sohh(i):
    print(i, end = ' ')