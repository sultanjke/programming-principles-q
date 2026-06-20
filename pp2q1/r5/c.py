def count_divisible(a, b, c):
    count = 0
    for i in range(a, b + 1):
        if i % c == 0:
            count = count + 1
    return count


a, b, c = map(int, input().split())

result = count_divisible(a, b, c)

print(result)
