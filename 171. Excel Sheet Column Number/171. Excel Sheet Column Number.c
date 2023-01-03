int titleToNumber(char * columnTitle){
    int len=strlen(columnTitle);
    if(len==1)
    return columnTitle[0]-'@';

    int index=0;
    int val=pow(26,len-1);
    for(int i=0;i<len;i++){
        index+=(columnTitle[i]-'@')*val;
        val/=26;
    }
    return index;
}