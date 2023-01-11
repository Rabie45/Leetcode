# 278. First Bad Version
 ## Explination:
  - Find the bad version without tring all of them (You should minimize the number of calls to the API.)

 ## Algorithm:
  - Use binary search (https://www.geeksforgeeks.org/binary-search/)
  - Until find the upper value < lower value 
  - Then return lower because its the bad version


