a = list(input())

for i in range(len(a)):
  if a[i].islower() == True:
    a[i] = a[i].upper()
  else:
    a[i] = a[i].lower()
print(''.join(a))