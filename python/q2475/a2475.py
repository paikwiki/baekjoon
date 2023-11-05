id_nums = list(map(int, input().split()))
result = sum(map(lambda x: x * x, id_nums)) % 10

print(result)
