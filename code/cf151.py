n = int(input())
F = [0]*(n + 1)
F[1] = 1 
F[2] = 1 
for i in range(3, n +1):
  F[i] = F[i - 1] + F[i - 2]
print(F[n])