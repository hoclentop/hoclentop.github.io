def ucln(a, b):
    while b != 0:
        r = a % b
        a = b
        b = r
    return a
def bcnn(a, b):
    return a // ucln(a, b) * b
a, b, c = [int(x) for x in input().split()]
d = bcnn(a,b)
e = bcnn(c,d)
print(e)
