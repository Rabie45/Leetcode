int isOpen(char s){
    if(s=='(')return 1;
    if(s=='[')return 1;
    if(s=='{')return 1;
    return 0;
}
char isOpp(char s){
    if(s=='(')return ')';
    if(s=='{')return '}';
    if(s=='[')return ']';
    if(s==')')return '(';
    if(s=='}')return '{';
    if(s==']')return '[';
    return '0';
}

bool isValid(char * s){
int len=strlen(s);
int index=0;
char *ptr=(char * )malloc(len*sizeof(char));
for(int i=0;i<len;i++){
  if(isOpen(s[i])){
      ptr[index]=s[i];
      index++;
  }
  else{
      if(index==0) return false;
      if(ptr[index-1]==isOpp(s[i])){
          index--;
      }
      else 
        return false;
  }

}
if(index!=0)
return false;

return true;
}