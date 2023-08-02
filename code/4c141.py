for a in range(1,9):
  for b in range(0,9):
    for c in range(0,9):
      if (100*a + 10 *b + c == a**3 + b**3 + c**3):
        print(a, b, c)