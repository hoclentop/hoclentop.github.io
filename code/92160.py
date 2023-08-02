x, y = [int(x) for x in input().split()]
s = input()
n = len(s)
for i in range(n):
  if s[i] == "U":
    y = y +1
  if s[i] == 'R':
    x = x +1
  if s[i] == 'L':
    x = x - 1
  if s[i] == 'D':
    y = y - 1
print(x, y)