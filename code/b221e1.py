a=int(input())
b=int(input())
s=0
while b>=1:
    if b%2>0: s+=a
    a*=2
    b//=2
print(s)
