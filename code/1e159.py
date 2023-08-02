x = input()
y = input()
x = x.upper()
y = y.upper()
for i in range(65,91):
  if (chr(i) in x) != (chr(i) in y):
    print("NO")
    quit()
print('YES') 