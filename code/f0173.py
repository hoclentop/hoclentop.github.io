n = int(input())
C = [0]*(n + 1)
C[0] = 1
for i in  range(n):
  C[i + 1] = C[i]*2 *(2 *i + 1) //(i + 2)
print(C[n - 1])