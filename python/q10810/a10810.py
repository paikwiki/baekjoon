bucket_cnt, input_cnt = map(int, input().split())

result = ["0"] * bucket_cnt

while input_cnt:
    start, end, ball = input().split()
    start, end = int(start) - 1, int(end)
    result = result[:start] + [ball] * (end - (start)) + result[end:]
    input_cnt -= 1

print(" ".join(result))
