s =  input()
n = len(s)
for i in range(0, n):
  if (s[i] != '0') and (s[i] != '1'):
    print("NO")
    quit()
print('YES')