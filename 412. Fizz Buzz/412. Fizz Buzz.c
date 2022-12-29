/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
 
char ** fizzBuzz(int n, int* returnSize){
    char **ptr=(char**)malloc(n* sizeof(char*));
for(int i=1;i<=n;i++){
    if(i%3==0 && i%5==0){
        ptr[i-1]=(char*)malloc(9*sizeof(char*)); 
    //9 bc fizzbuzz =9
        sprintf(ptr[i-1],"%s","FizzBuzz");

    }
    else if(i%3 ==0){
        ptr[i-1]=(char*)malloc(5*sizeof(char*)); 
         //5 bc fizz =5
         sprintf(ptr[i-1],"%s","Fizz");
    }
    else if(i%5 ==0){
       ptr[i-1]=(char*)malloc(5*sizeof(char*)); 
         //5 bc fizz =5
        sprintf(ptr[i-1],"%s","Buzz");
    }
    else{
        ptr[i-1]=(char*)malloc(5*sizeof(char*)); 
        sprintf(ptr[i-1],"%d",i);
        
    }
}
* returnSize=n;

return ptr;
free(ptr);
}
