int fib(int n){
int val_one=0;
int val_two=1,val=0;
if(n==0)
return 0;
if(n==1)
return 1;

for(int i=2;i<=n;i++){
    val=val_one+val_two;
    val_one=val_two;
    val_two=val;
}
return val;
}