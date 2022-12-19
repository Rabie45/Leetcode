int searchInsert(int nums, int numsSize, int target){
Binarry search 
int upperVal=numsSize;
int lowerVal=0;
int mid;
if(nums[0] target )
return 0;
else if(nums[numsSize-1]  target)
return numsSize;

while(lowerVal = upperVal){
   
    
    mid=(upperVal+lowerVal)2;

    if(nums[mid] == target){
    printf(%dt,mid);
    return mid;Element found
    }

    else if(nums[mid]  target)
    upperVal=mid-1;

    else if(nums[mid]  target)
    lowerVal =mid+1;

}


printf(%dt%dt,lowerVal,upperVal );
return lowerVal;
}