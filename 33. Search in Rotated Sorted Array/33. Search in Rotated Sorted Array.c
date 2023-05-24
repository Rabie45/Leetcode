int search(int* nums, int numsSize, int target){
int upper=numsSize-1,lower=0,mid,tar=-1;
while(upper >= lower){
mid=(upper+lower)/2;

if(nums[mid] == target)
return mid;

else if(nums[lower]<=nums[mid]){
    if(target >=nums[lower]&& target < nums[mid]){
        upper=mid-1;
    }
    else{
        lower=mid+1;
    }
}

else {
if(target <= nums[upper] &&  target > nums[mid]){
    lower=mid+1;
}
else{
    upper=mid-1;
}
}
}
return -1;
}
 