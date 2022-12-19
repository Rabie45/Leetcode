# 1. Two Sum
The task is to return the indices of the elements that specify the target input. so in example 1 the 
input [2,7,11,15]
the target to get the indices which make the target=9
the answer is 0,1 because 2 (which index is 0) + 7 (which index is 1) make the target 9 

##to do the task the function given have 4 parameters :
- int* nums: the array given by the user 
- int numsSize: size of the array
- int target:  the target value 
- int* returnSize: the array that hold the size of array which accomplish the task 
##Algorithm 
- First create an array to hold the answer (If you don't know how to request a memory space ) 
- Second make 2  for loops to get the consecutive indices then, check if the sum of the two values equal to the target then assign the value in the array and return the - array. if now try the next loop until you find the answer. 
- Finally don't forget to free the mallocated array ^^ .
