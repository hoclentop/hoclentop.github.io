a, b= [int(x) for x in input().split()]
if (a != 0) and  (b!= 0):
  print("%.3f" % (-b/a))
else:
  if (a == 0) and (b != 0):
    print('VO NGHIEM')
  else:
     print('NGHIEM VOI MOI x')