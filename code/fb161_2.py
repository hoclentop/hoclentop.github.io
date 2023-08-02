s = input()
n = len(s)
so = False
hoa = False
thuong = False
for i in range(0,n):
    if s[i].isdigit(): so  = True
    if s[i].isupper(): hoa = True
    if s[i].islower(): thuong = True
if n < 8:
    print('YEU')
elif so and hoa and thuong:
    print('MANH')
else:
    print('THUONG')
