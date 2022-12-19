

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    
   int *arrAnswer= (int *)malloc(2* sizeof(int));
    for(int i=0;i<numsSize;i++){
        for(int j=i+1;j<numsSize;j++){
            int sum=nums[i]+nums[j];
            if(sum==target){
                arrAnswer[0]=i;
                arrAnswer[1]=j;
                *returnSize =2;
                return arrAnswer;
            }
            
        }
        
    }
 free(arrAnswer);
 return 0;
}