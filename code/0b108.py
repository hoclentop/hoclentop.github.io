1, y1 = [int(x) for x in input().split()]
x2, y2 = [int(x) for x in input().split()]
x3, y3 = [int(x) for x in input().split()]
x4, y4 = [int(x) for x in input().split()]
kt = False 
if (x1 + x2 == x3 + x4) and (y1 + y2 == y3 + y4):
  kt = True
if (x1 + x3 == x2 + x4) and (y1 + y2 == y3 + y4):
  kt = True
if (x1 + x4 == x2 + x3) and (y1 + y4 == y2 + y3):
  kt = True
if kt == True:
  print('YES')
else:
  print('NO')