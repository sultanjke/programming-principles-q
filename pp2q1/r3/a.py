d, h, m, s = map(int, input().split())

seconds_from_days = d * 86400
seconds_from_hours = h * 3600
seconds_from_minutes = m * 60

total_seconds = seconds_from_days + seconds_from_hours + seconds_from_minutes + s

print(total_seconds)
