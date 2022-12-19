# 9. Palindrome Number
In this problem you have to return Boolean (True or False) and you have to figure out if the number given by the user is Palindrome. but let me Explain the examples first

## Example 1
The input was 121 when you read the number from left to right it gives the same value form right to left so it called palindrome number.\

## Example 2 
Then you read a negative number such as -121 from right to left it gives you -121 if you read from left to right it gives you 121- it is not the same value right ?

The function given from the platform it takes one integer parameter int x.

## The Algorithm:
- First you have to check the number greater than 0 (not a negative number) else return False.
- Second catch every digit number and reverse it.
- Third if it equals the actual value given by the user then it is palindrome number.
