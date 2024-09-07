#DE3381.PY - Tran Huu Nam - hsgtin.vn - 2024
def chiphi(k):
  sa=sr=0
  for x in h:
    if x>=k: sr+=(x-k)
    else: sa+=(k-x)
  sm=min(sa, sr)
  return sm*m+(sa-sm)*a+(sr-sm)*r
def tk3p(d, c):
  while d+3<=c:
    z=(c-d)//3
    g=d+z   
    k=c-z 
    if chiphi(g) >= chiphi(k):
      d=g 
    else:
      c=k 
  while chiphi(d)>chiphi(d+1): d+=1
  return d
n, a,r, m=[int(x) for x in input().split()]
m=min(m, a+r)
h=[int(x) for x in input().split()]

k=tk3p(min(h), max(h))
s=chiphi(k)
print(s)


