s = input()
n = len(s)
so = False
hoa = False
thuong = False
for i in range(0,n):
  if (s[i] >= "0") and (s[i] <= "9"):
    so  = True
  if (s[i] >= "A") and (s[i] <= "Z"):
    hoa = True
  if (s[i] >= "a") and (s[i] <= "z"):
    thuong = True
if n < 8:
  print('YEU')
else:
  if so and hoa and thuong:
    print('MANH')
  else:
    print('THUONG')