int removeDuplicates(int* nums, int numsSize){
    int num=1;
for(int i=0;i<numsSize-1;i++){
if(nums[i]!=nums[i+1]){
   nums[num++]= nums[i+1];
}
}
  
return num;
}
