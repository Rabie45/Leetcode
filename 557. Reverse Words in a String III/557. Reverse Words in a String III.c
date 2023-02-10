void rev(int a,int b,char*s){
    int len=(b+a)/2;
for(int i=a;i<=len;i++){
    char temp=s[i];
    s[i]=s[b+a-i];
    s[b+a-i]=temp;
}
}
char * reverseWords(char * s){
   int len=strlen(s);
   int index=0;
   for(int i=0;i<=len;i++){
       if((s[i]==' ' )|| (s[i]=='\0')){
          /*printf("I= %d\n",i);
          printf("Index=%d\n",index);*/
           rev(index,i-1,s);
           index=i+1;
       }
   }
return s;
}