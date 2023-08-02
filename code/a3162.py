c, n = input().split()
n = int(n)
v = ord(c) - 65
y = (v + n) % 26
print(chr(y + 65))