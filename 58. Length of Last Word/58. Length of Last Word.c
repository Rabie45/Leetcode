#include ctype.h
int lengthOfLastWord(char  s){
   int len= strlen(s)-1;
   int d=0;
     if(len == 0  len==1)
    return 1;
   for(int i=len;i=0;i--){
       if(isspace(s[i])){    
       len--;
       }
       else{
           break;
       }
   }
   for(int i=len;i=0;i--){
       if(!isspace(s[i]) && s[i]!= '0')
        d++;
       else break;
   }

 return d;
}