# Problem 1: Convert Time to Seconds

You are given four integers representing days, hours, minutes, and
seconds.\
Convert the entire time duration into seconds.

## Input format

```
Four integers:
d - days
h - hours
m - minutes
s - seconds
```

## Output format

Print one integer - the total number of seconds.

## Example

### Input

1 1 1 1

### Output

90061

## Explanation

```
1 day = 86400 seconds
1 hour = 3600 seconds
1 minute = 60 seconds

Formula:

total_seconds = d * 86400 + h * 3600 + m * 60 + s
```


## Solution

[View solution](https://github.com/sultanjke/programming-principles-1Q/blob/main/pp2q1/r2/a.py)
