num = input()

sum = 0

for i in range(len(num)):
  temp = int(num[i])
  sum += temp ** 5
print(sum)