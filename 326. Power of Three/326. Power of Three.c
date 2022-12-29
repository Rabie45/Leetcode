bool isPowerOfThree(int n){
 if(n==0)
    return false;
    if(n==1)
    return true;
    double count= log10(n)/log10(3);

    if(pow(3,(int)count)-pow(3,count) == 0)
    return true;

    return false;
}