# 268. Missing Number

 ## Explaination:
 - Find the missing number in the array
 
 ## Algorithm:
 - Calculate the sum of the numbers in the given array (step 1)
 - Calculate the expected sum of the number by this eqaution(step 2)
 ![sum-of-arithmetic-sequence-formula-1623748168](https://user-images.githubusercontent.com/76526170/210007885-f58a3d8f-9f7d-440e-af57-65d8ed7d1c27.png)
 - Where n is the size
 - a1 is the first element (0)
 - a2 last element (size+1)
 
 - Then the missing value is step 2 - step 1
