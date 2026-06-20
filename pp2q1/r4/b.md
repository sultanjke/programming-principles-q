# Problem E: Count Positive Divisors

You are given one positive integer. Determine how many positive divisors
it has.

For example, number 6 has divisors: 1, 2, 3, 6\
So the answer is 4.

## Input format

One integer n.

It is guaranteed that:\
1 ≤ n ≤ 10\^6

## Output format

Print one integer --- the number of positive divisors of n.

## Example

### Input

6

### Output

4

## Explanation

A number k is a divisor of n if:

n % k == 0

To solve the problem:

1.  Iterate from 1 to n.\
2.  Check if each number divides n without remainder.\
3.  Count such numbers.