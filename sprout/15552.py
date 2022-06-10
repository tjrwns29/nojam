import sys

t = int(input())

for i in range(t):
  a, b = list(map(int, sys.stdin.readline().split()))
  print(a + b)