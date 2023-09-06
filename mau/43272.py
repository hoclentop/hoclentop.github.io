x = input()
y = input()
while x in y:
    y = y.replace(x, "")
print(y)
