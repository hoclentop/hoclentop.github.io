n = int(input())
def ktnt(n):
    if n < 2 :
        return  False
    for x in range(2, n//2 + 1):
        if n % x == 0:
            return  False
    return True
for a in range((n // 2), 1 ,-1 ):
    if ktnt(a) and ktnt(n - a):
        print(a, n - a)
        break
