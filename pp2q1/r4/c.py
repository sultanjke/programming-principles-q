n = int(input())

numbers = list(map(int, input().split()))

smallest_positive = None

for number in numbers:
    if number > 0:
        if smallest_positive is None:
            smallest_positive = number
        elif number < smallest_positive:
            smallest_positive = number

if smallest_positive is None:
    print(-1)
else:
    print(smallest_positive)
