for a in range(1, 9):
  for b in range(0, a):
    if (a - b == 0) or (a - b == 1) or (a - b == 4) or (a - b == 9):
      print(a,b)