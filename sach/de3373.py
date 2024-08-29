n,q=[int(x) for x in input().split()]
a=[int(x) for x in input().split()]
a.insert(0,0)
for i in range(q):
  b=[int(x) for x in input().split()]
  if b[0]==1: 
      del a[b[1]]
  elif b[0]==2:
      for j in range(b[1],b[2]+1):
          a[j]+=b[3]
  else:
      print(sum(a[b[1]:b[2]+1]))
