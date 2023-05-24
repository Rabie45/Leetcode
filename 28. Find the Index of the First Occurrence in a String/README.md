# 28. Find the Index of the First Occurrence in a String

 ## Explination:
  - there is two string the second string is sub-string from the first 
  - Find the index of the first occurrence for the sub-string in the first one

 ## Algorithm : 
  - This problem is pretty easy when u use string.h librarycheck this link( https://www.geeksforgeeks.org/strstr-in-ccpp/ )
  - It returns the address of the first occurrence so subtract this address with the address of the first string 
  - Then it by the size of the character becuase it may be the char takes more than byte
  - Bingo u got the index 

