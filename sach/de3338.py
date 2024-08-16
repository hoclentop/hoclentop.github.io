//DE3338.PY - Tran Huu Nam - hsgtin.vn - 2024
n = int(input())
MOD = 20240131
tich = 1
tong = 1
for i in range(2, n+1):
    tich = (tich * i) % MOD
    tong = (tong + tich) % MOD
    if tich == 0: break
print(tong)

