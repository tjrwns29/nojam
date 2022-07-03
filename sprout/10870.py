a = int(input())
fibo = [0, 1]
for i in range(2, a+1):
  num = fibo[i-1] + fibo[i-2]
  fibo.append(num)
print(fibo[a])