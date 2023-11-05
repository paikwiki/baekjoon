import math

input_cnt = int(input())

results = []
for _ in range(input_cnt):
    floors, rooms, n = map(int, input().split())
    floor = n % floors if n % floors != 0 else floors
    room = math.ceil(n / floors)
    results.append(str(floor * 100 + room))

print("\n".join(results))
