# 287. Find the Duplicate Number
 ## Explination:
   Find the duplicated number in the array 

 ## Algorithm:
   There is two ways to solve this problem first is dummy the second using hashmap 

  ## First:
   - u can sort the array 
   - Start serching for the for the two values which stands one after the other 
   - return its value
  
  ## Second using hash map 
   - It searched for another solution because the dummy one takes to much time so i found this 
 (https://www.geeksforgeeks.org/find-duplicates-in-on-time-and-constant-extra-space/)
   - Steps: 
     - Traverse the given array from start to end.
     - For every element in the array increment the arr[i]%n‘th element by n.
     - Now traverse the array again and print all those indexes i for which arr[i]/n is greater than 1. Which guarantees that the number n has been added to that index
     - This approach works because all elements are in the range from 0 to n-1 and arr[i] would be greater than n only if a value “i” has appeared more than once.

 
 

