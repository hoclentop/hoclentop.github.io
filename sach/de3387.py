//DE3387.PY - Tran Huu Nam - hsgtin.vn - 2024
import sys
from collections import defaultdict
def main():
    c = defaultdict(int)
    s = ""
    p = ""
    n = 0
    p = input() + 'a'
    for char in p:
        if char.isdigit():
            n = n * 10 + int(char)
        elif n > 0:
            break
    for line in sys.stdin:
        s += line
    for char in s:
        c[char] += 1
    for char in s:
        if c[char] <= n:
            print(char, end='')
if __name__ == "__main__":
    main()

