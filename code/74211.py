a, b = [int(x) for x in input().split()]
demso = 0
for x in range(a, b + 1):
  demuoc = 0
  for i in range(1, x + 1):
    if x % i == 0:
      demuoc = demuoc + 1 
  if demuoc % 2 != 0:
    demso = demso + 1
print(demso)