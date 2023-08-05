a,b = [int(x) for x in input().split()]
demso = 0
for n in range(a, b + 1):
  dem=0
  for i in range(1, n):
    if (n % i == 0):
     dem = dem + 1
  if dem == 9:
    demso = demso + 1
print(demso)