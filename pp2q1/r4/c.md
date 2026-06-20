# Problem F: Find the Smallest Positive Number in an Array

You are given an array of integers. Find the smallest positive number in
the array.

If there are no positive numbers, print -1.

## Input format

The first line contains one integer n --- the number of elements.\
The second line contains n integers.

It is guaranteed that:\
1 ≤ n ≤ 10\^5

## Output format

Print one integer:\
- the smallest positive number, or\
- -1 if there are no positive numbers.

## Example

### Input

5\
-2 3 7 -1 4

### Output

3

### Input

3\
-5 -2 -8

### Output

-1

## Explanation

To solve this problem:

1.  Go through all elements of the array.\
2.  Consider only numbers greater than 0.\
3.  Keep track of the smallest positive number.\
4.  If none are found, output -1.
