/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* intersect(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize){
int count1[1001]={0},count2[1001]={0};
int *ptr=(int*)malloc(1001*sizeof(int));
int index=0;
for(int i=0;i<nums1Size;i++){
    count1[nums1[i]]++;
}
for(int i=0;i<nums2Size;i++){
    if(count1[nums2[i]]>count2[nums2[i]]){
        ptr[index]=nums2[i];
        index++;
        count2[nums2[i]]++;
    }
}
* returnSize=index;
return ptr;
free(ptr);
}