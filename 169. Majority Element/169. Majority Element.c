int cmp(int *a,int*b){
    int cmp=*a - *b;
    return cmp;
}

int majorityElement(int* nums, int numsSize){
    qsort(nums,numsSize,sizeof(int),cmp);
    return nums[numsSize/2];
}