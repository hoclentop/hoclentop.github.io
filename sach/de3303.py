//DE3303.PY - Tran Huu Nam - hsgtin.vn - 2024
def convert_char(s):
    cs = "0123456789ABCDEF"
    x = 0
    for i in range(4):
        if s[i] == '1':
            x += 2**(3-i)
    return cs[x]
def bin2hex(s):
    while len(s) % 4 != 0:
        s = '0' + s
    p = ''
    for i in range(0,len(s),4):
        p += convert_char(s[i:i+4])
    while p[0] == '0':
        p = p[1:]
    return p
n = int(input())
a=[]
for x in range(n):
    s = input().split()
    a.append(s)
dp = [ ['']*(n+1) for j in range(n+1) ]
for i in range(1,n+1):
    dp[i][1] = dp[i-1][1] + a[i-1][0]
    dp[1][i] = dp[1][i-1] + a[0][i-1]
for i in range(2,n+1):
    for j in range(2,n+1):
        dp[i][j] = max(dp[i-1][j], dp[i][j-1]) + a[i-1][j-1]
print(bin2hex(dp[n][n]))

