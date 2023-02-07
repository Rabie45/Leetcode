# 338. Counting Bits

 ## Explination:
  - Make an array with size n+1 to store the number of ones in every number in range from 0
to n

 ## Algorithm:
  - Mallocate a space to store in the memory
  - The number of ones in 0 is 0 so store 0 in the array 
  - Make a for loop start from 1 to n+1
    - Make while loop to calculate the number of ones in i
      - Every time get the % of the number if 1 increasre the counter 
    - Store the counter in the array 
  - Dont forget to return the array and the size
