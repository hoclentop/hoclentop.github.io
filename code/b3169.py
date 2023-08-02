s = input()
n = len(s)
p =''
for i in range(n-1, -1, -1):
  p = p + s[i]
print(p)