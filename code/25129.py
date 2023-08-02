s= input()
xd = True
n = len(s)
for i in range(0, n):
  if (s[i] >= '0') and (s[i] <= '9'):
    print(s[i], end = ' ')
    xd = False
  else:
    if xd == False:
      print()
    xd = True