s = input()
n = len(s)
j = n - 1
for i in range(0, n):
  if s[i] != s[j]:
    print("NO")
    quit()
  else:
    print('YES')
    quit()