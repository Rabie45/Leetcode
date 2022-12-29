bool isPowerOfFour(int n){
 if(n==0)
    return false;
    if(n==1)
    return true;
    double count= log10(n)/log10(4);

    if(pow(4,(int)count)-pow(4,count) == 0)
    return true;

    return false;
}
