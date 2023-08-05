n = int(input())
G = [0]*(n + 1)
G[1] = 'A' 
G[2] ='B'
for i in  range(3, n + 1):
  G[i] = G[i -2] + G[i - 1]
print(G[n], end ='')