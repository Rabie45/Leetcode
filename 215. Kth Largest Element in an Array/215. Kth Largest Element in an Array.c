int cmpfunc (const void * a, const void * b) {
   return ( *(int*)a - *(int*)b );
}
int findKthLargest(int* nums, int numsSize, int k){
qsort(nums,numsSize,sizeof(int),cmpfunc);
int val=nums[numsSize-k];
return val;
}