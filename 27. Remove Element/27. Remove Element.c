
int removeElement(int* nums, int numsSize, int val){
    int *ptr;
 ptr = (int*)malloc(numsSize * sizeof(int));
 int index=0;
    for(int i=0;i<numsSize;i++){
        if(nums[i]!= val){
           ptr[index++]=nums[i];
        }
    }
    for(int i=0; i<numsSize;i++){
    nums[i]=ptr[i];

    }
    return index;

}
