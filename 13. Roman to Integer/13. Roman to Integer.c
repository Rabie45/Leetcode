
int numVal(char num);
int romanToInt(char * s){
    int sum=0;
    for(int i=0; s[i]!='\0';i++){
     if(numVal(s[i]) < numVal(s[i+1]))
         sum-=numVal(s[i]);
    else
        sum+=numVal(s[i]);
    }
    return sum;
}
int numVal(char num){
        if(num == 'I')
             return 1;
        else if(num== 'V')
            return 5;
        else if(num== 'X')
             return 10;
        else if(num== 'L')
            return 50;
        else if(num== 'C')
            return 100;
        else if(num== 'D')
             return 500;
        else if(num== 'M')
            return 1000;
        else
        return 0;
}
