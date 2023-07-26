a, d, n = [int(x) for x in input().split()]
s = [0]*n 
s[0]= a
for i in range(1, n):
  s[i] = s[i-1] + d
print(s[n-1])