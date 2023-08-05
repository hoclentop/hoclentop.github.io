a, b, k = [int(x) for x in input().split()] 
a = a % b
for i in range(1,k + 1):
  a = a*10
  t = a // b 
  a = a % b 
print(t)