s = input()
x = input()
y = input()
n = len(s)
p =''
for i in range(1, n + 1):
  if s.find(x) >0:
    p = s.replace(x,y)
print(p)