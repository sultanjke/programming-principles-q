# Problem A: Total Number of Seconds

You are given four integers representing a time duration: days, hours,
minutes, and seconds. Compute the total number of seconds corresponding
to this duration.

## Input format

Four integers:
```
- d - number of days
- h - number of hours
- m - number of minutes
- s - number of seconds
```

It is guaranteed that:
```
0 ≤ d ≤ 10^6
0 ≤ h < 24
0 ≤ m < 60
0 ≤ s < 60
```

## Output format

Print one integer --- the total number of seconds.

## Example

### Input

1 1 1 1

### Output

90061

## Explanation

To solve this problem:

-   1 day = 24 × 60 × 60 = 86400 seconds\
-   1 hour = 60 × 60 = 3600 seconds\
-   1 minute = 60 seconds

Formula:

total_seconds = d × 86400 + h × 3600 + m × 60 + s

Use a 64-bit integer type to avoid overflow.
