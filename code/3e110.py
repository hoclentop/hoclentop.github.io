a, b, c = [int(x) for x in input().split()]
if a == b == c:
  print("DEU")
else:
  if (a == b) or (a == c) or (b == c):
    print('CAN')
  else:
    print('THUONG')