student = list(range(1, 31))

for i in range(1, 29):
  submit = list(map(int, input().split()))
  for j in student:
    if j in submit:
      student.remove(j)

print(min(student))
print(max(student))