n=int(input())
phut=n//60
giay=n%60
gio=phut//60
phut=phut%60
print(gio,end=":")
if phut<10: print(0,end="")
print(phut,end=":")
print(giay)