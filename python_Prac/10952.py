while True:
  A, B = list(map(int, input().split()))
  if (not(A == 0 and B == 0)):
    print(A + B)
  elif (A == 0 and B == 0):
    break