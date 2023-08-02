x = input()
y = input()
for i in range(97,9221):
  if (chr(i) in x) and(chr(i) in y):
    print(chr(i), end ='')