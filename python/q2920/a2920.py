inputs = list(map(int, input().split()))

result = "mixed"
if inputs == sorted(inputs):
    result = "ascending"
elif inputs == sorted(inputs, reverse=True):
    result = "descending"

print(result)
