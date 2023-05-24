# 33. Search in Rotated Sorted Array

 ## Explination:
  - the array given is sorted with assending order 
  - but it is rotated left as example [0,1,2,4,5,6,7] might be rotated at pivot index 3 and become [4,5,6,7,0,1,2].
  - retrun the index of the given value

 ## Algorithm :
  - Use binary search beacuse it is a sorted array but with some modification
    - get the mid if == to the target return the index
    - if the value of lower index  less than the nums of the mid then we have two condition
      - the target greater than the lower because it rotated and mid less than value if the 
 

