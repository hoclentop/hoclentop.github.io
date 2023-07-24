s=input()
cs=["IV","IX","XL","XC","CD","CM", "I","V","X","L","C","D","M"]
gt=[4,9,40,90,400,900, 1,5,10,50,100,500,1000]
T=0
for i in range(13):
    T+=gt[i] * s.count(cs[i])
    s=s.replace(cs[i],"")
print(T)