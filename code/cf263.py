s=input()
n=len(s)
for i in range(n):
    for j in range(i,n):
        print(s[i:j+1])