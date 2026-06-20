text = input()

count = 0

for character in text:
    if character != " ":
        count = count + 1

print(count)