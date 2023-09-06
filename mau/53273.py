def ucln(a, b):
    while b != 0:
        r = a % b
        a = b
        b = r
    return a
    
a, b, c = [int(x) for x in input().split()]
d = ucln(a,b)
e = ucln(c,d)
print(e)
