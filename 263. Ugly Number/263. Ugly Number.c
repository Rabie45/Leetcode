int div_ugly(int a,int b){
    while(a!=1){
       if(a%b==0)
       a/=2;
       else if(a%3==0)
       a/=3;
       else if(a%5==0)
       a/=5;
       else{
           return 0;
       }
     }

     return a;
}

bool isUgly(int n){
int val_2=0,val_3=0,val_5=0;
if(n<=6 && n>=1)
return true;
if(n<=0)
return false;
val_2=div_ugly(n);
val_3=div_ugly(n);
val_5=div_ugly(n);
if(val_2 == 1 || val_3 ==1 || val_5==1 )
return true;

return false;
}