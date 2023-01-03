# 283. Move Zeroes
 ## Explination:
  - Swap the zeros in the array to the most right with keeping the order without change

 ## Algorithm:
  - Make a function to swap between element 
  - Calculate the number of zeros in the array (count)
  - Make a while loop to know then you finshid swap all zeros
    - Make a for loop to go through the array 
    - If the number == 0 swap between the index and index +1 
    - Etc untill you move the zero to the most right place
    - count-- to get out of the loop
 
