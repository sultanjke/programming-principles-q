n = int(input())

numbers = list(map(int, input().split()))

first_element = numbers[0]

count = 0

for number in numbers:
    if number == first_element:
        count = count + 1

print(count)
