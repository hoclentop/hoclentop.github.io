s = input()
n = len(s)
def ktdx(s):
  n=len(s)
  j=n-1
  for i in range(0, n):
    if s[i] != s[j]:
      return False
    j-=1
  return True
for d in range(n, 0, -1):
  for i in range(0, n - d +1):
    p = s[i: i + d]
    if ktdx(p):
      print(p)
      quit()