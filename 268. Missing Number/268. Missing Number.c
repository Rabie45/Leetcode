int missingNumber(int* nums, int numsSize){
int expected_val=0,val=0;
for(int i=0;i<numsSize;i++){
    val+=nums[i];
}
expected_val= numsSize * (numsSize+1) /2;
return expected_val-val;
}