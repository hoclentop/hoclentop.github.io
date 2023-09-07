def ucln(a, b):
    while b != 0:
        r = a % b;
        a = b
        b = r
    return a
x, a = [int(x) for x in input().split()]
y, b = [int(x) for x in input().split()]
z, c = [int(x) for x in input().split()]
m = x*b*c + y*a*c - z*a*b
n = a*b*c
d = ucln(m, n)
print(m//d, n // d)
