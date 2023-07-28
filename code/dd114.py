xA, yA = [int(x) for x in  input().split()]
if (xA > 0) and (yA > 0):
  print('GOC PHAN TU THU I')
else:
  if (xA < 0) and (yA > 0):
    print('GOC PHAN TU THU II')
  else:
      if (xA < 0) and (yA < 0):
        print('GOC PHAN TU THU III')
      else:
        print('GOC PHAN TU THU IV')