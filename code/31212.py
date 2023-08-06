a, b = [int(x) for x in input().split()]
demso = 0
for x in range(a, b + 1):
  s = 0
  for i in range(1, x + 1):
    if x % i == 0:
      s = s + i 
  if s % 2 != 0:
    demso = demso + 1
print(demso)