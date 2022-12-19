int* plusOne(int* digits, int digitsSize, int* returnSize){
digits[digitsSize-1]+=1;
for(int i=digitsSize-1;i>0;i--){
    if(digits[i]==10){
        digits[i]=0;
        digits[i-1]++;
    }
}


if(digits[0]==10){
//digitsSize++;
int *ptr=(int *)malloc((digitsSize+1) * sizeof(int));
ptr[0]=1;
ptr[1]=0;
*returnSize=digitsSize+1;
for(int i=2;i<digitsSize+1;i++){
    ptr[i]=digits[i-1];
}
return ptr;
}
else{
*returnSize=digitsSize;
int *ptr=(int *)malloc(digitsSize * sizeof(int));
for(int i=0;i<digitsSize;i++){
    ptr[i]=digits[i];
}
return ptr;
}

}
