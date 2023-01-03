# 171. Excel Sheet Column Number

 ## Explination:
  - Calculate the column number in excel using the alphabetic
 
 ## Algorithm:
  - First calculate the length if 1 return the letter - '@' which is the number of the alphabet
  - Every letter in the string mean that we add 26 which is number in the alphabetic
  - So calculate how many times we add by using pow(26,len)
  - Then make for loop to calculate the number
  - Every time divide the step 3 by 26 
  - Return the value
