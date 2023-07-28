s = input()
s=s+" "
n = len(s)
d =0 
p = ""
for c in range(1, n):
  if s[c] == ' ':
    if c > d:
      p= s[d:c] + ' ' + p 
      d = c + 1 
print(p)
