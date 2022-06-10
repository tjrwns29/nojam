data = list(map(int, input().split()))

a = list(map(lambda x : x ** 2, data))

print(sum(a) % 10)