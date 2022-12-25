# 58. Length of Last Word

## Explination:
- In this problem the description was very easy to understand but little hard to implement but lets start.
Briefly you want to know the size of the last ward in a string given by user.

## Algorithm :
- First check if the array is empty.
- Get the length of the array,
- Create a for loop starts from the end of the string to get the last word index of the string.
- Start counting down until you got space then the word end,
- Return the size of the last word.

## The parameter given:
- Array of character contains the string given by the user.

We will use ctype(isspace) library to check if the character is space or not. it https://www.programiz.com/c-programming/library-function/ctype.h/isspace.
