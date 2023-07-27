y = int(input())
t = int(input())
if (t == 1 ) or (t == 3) or(t == 5) or(t == 7) or(t == 8) or(t == 10) or(t == 12):
    print(31)
elif (t == 4) or (t == 6) or(t == 9) or(t == 7) or(t == 11):
    print(30)
elif (y % 400 == 0) or ((y % 4 == 0) and (y % 100 != 0)):
    print(29)
else:
    print(28)
  