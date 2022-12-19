# 27. Remove Element

This problem is so close to the previous (Remove Duplicates From Sorted Array)
This problem have 2 solution one wasting memory but pretty easy and the other is small code but much headache lets start.
The problem want to remove a specific element  given by the user in every place in the array and return the size of the new array.
## Parameter:

## The function given by the platform have 3 parameter:
- the given array 
- the size of the array
- the value need to be removed

# First algorithm:
- Create new array and a new variable with initial value 0 to store the new size.
- Check every element in the given array if the element not equal to value given by the user store it in the new array and increment the 
- return  the variable 

# Second algorithm:

this algorithm is to close to the Remove Duplicates From Sorted Array  
# Algorithm:
- Create a for loop to go though the whole array and create a new variable with initial value 0 to store the new size.
- Check if the element not equal to the value store this value in the array with index variable you created in the first step and increment the the variable with 1.
- Return the new size array.
