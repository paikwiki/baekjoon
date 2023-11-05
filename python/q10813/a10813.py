N, M = map(int, input().split())

baskets = [x for x in range(1, N + 1)]
for _ in range(M):
    I, J = map(int, input().split())
    baskets[I - 1], baskets[J - 1] = baskets[J - 1], baskets[I - 1]

print(" ".join(map(str, baskets)))
