int calculateSqrt(int n){
    int sum=0;
    while(n){
        sum+=pow(n%10,2);
        n/=10;

    }
    return sum; 
}
bool isHappy(int n){

while(1){
    int val=calculateSqrt(n);
    if(val==1)
    return true;
    if(val==4)
    return false;
    n=val;
}
}