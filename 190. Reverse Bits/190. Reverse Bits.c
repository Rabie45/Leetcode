uint32_t reverseBits(uint32_t n) {
    uint32_t rem=0;
    int res=0;
    int i=31;
    while(n>0){
       rem=n%2;
       res+=rem*pow(2,i);
       n/=2;
       i--;
      
    }
    return res;
}