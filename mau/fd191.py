n = int(input())
for i in range(1, n//2*2 + 2, 2):
  if n % i == 0:
    print(i, end = ' ')
