n = int(input())
def tonguoc(n):
  s = 0
  for i in range(1, (n // 2) + 1):
    if n % i == 0:
      s = s + i 
  return(s)
for a in range(1, n +1):
  b = tonguoc(a)
  if  (a < b) and (tonguoc(b) ==a):
    print(a,b)
    