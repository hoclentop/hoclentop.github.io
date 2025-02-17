n, k = map(int, input().split())
a = [0] + list(map(int, input().split()))
b = [0] + list(map(int, input().split()))
f = [0]*(n + 2)
f[0] = 0
j = 0
for i in range(1, n + 1):
  while (a[j + 1] <= a[i] - k):
    j+=1
  f[i] = max(f[i - 1], f[j] + b [i])
print(f[n])
