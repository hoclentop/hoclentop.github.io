a, n = [int(x) for x in input().split()]
T = 1 
for i in range(1,n + 1):
  T = T*a
print(T%10)