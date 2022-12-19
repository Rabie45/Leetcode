bool isPalindrome(int x){
    long int res=0,num,rem;
    num=x;
     if(num<0){
        return 0;
    }
while( num!=0){
    rem=num%10;
    res=res*10+rem;
    num/=10;
}
    if(res==x){
        return 1;
    }
    else
        return 0;
}