from math import sqrt
xK, yK, r = [int(x) for x in  input().split()]
xM, yM = [int(x) for x in  input().split()]
d = sqrt((xM -xK)**2 + (yM - yK)**2)
if d == r:
  print('NAM TREN')
else:
  if d < r:
    print('NAM TRONG')
  else:
      print('NAM NGOAI')