/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* countBits(int n, int* returnSize){
int *ptr=(int*)malloc((n+1)*sizeof(int));
ptr[0]=0;
int count=0,val=0;
for(int i=1;i<=n;i++){
    int var=i;
    while(var>0){
        val=var%2;
        if(val==1)
        count++;
        var/=2;
        
    }

    ptr[i]=count;
    count=0;
}
*returnSize=n+1;
return ptr;
free(ptr);
}