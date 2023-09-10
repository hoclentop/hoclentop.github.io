import sys
sys.stdin = open('tamgiac.inp')
sys.stdout = open('tamgiac.out', 'w')
a, b = [int(x) for x in input().split()]
print(a + b - abs(a - b) -1)
