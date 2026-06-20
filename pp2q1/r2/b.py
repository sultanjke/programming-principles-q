dollars, rate, price = map(int, input().split())

money_in_tenge = dollars * rate
difference = money_in_tenge - price

if difference >= 0:
    print("Yes", difference)
else:
    print("No", difference)
