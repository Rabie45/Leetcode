bool isPowerOfTwo(int n){
    if(n==0)
    return false;
    if(n==1)
    return true;
    int count= log(n)/log(2);

    if(pow(2,count) == n)
    return true;
    return false;
}