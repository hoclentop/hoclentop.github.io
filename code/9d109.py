x1, y1 = [int(x) for x in input().split()]
x2, y2 = [int(x) for x in input().split()]
x3, y3 = [int(x) for x in input().split()]
x4, y4 = [int(x) for x in input().split()]
if ((x1 == x2) and (x3 == x4)) or ((x1 == x3) and (x2 == x4)) or ((x1 == x4) and (x2 == x3)) and ((y1 == y2) and (y3 == y4)) or ((y1 == y3) and (y2 == y4)) or ((y1 == y4) and (y2 == y3)):
  print('YES')
else:
  print('NO')