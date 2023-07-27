s = input()
n = len(s)
dmax = 0
d= 0
for c in range(n):
  if s[c] != " ":
    d = d + 1 
    if d > dmax:
      dmax = d
      v = c - d + 1
  else:
    d = 0
p = s[v:v+dmax]
print(p)
