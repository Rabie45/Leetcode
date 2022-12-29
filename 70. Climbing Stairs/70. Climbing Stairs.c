
int climbStairs(int n){
int step_one=1;
int step_two=2;
int val=0;
if(n==1||n==2||n==3)
return n;
if(n==0){
    return 1;
}
for(int i=3;i<=n;i++){

val= step_one+step_two;
step_one=step_two;
step_two=val;
}
return val;
}
