bool isAnagram(char * s, char * t){
int lenS=strlen(s);
int lenT=strlen(t);
int sA[26]={0},sT[26]={0};

if(lenS!=lenT)
return false;

for(int i=0;i<lenS;i++){
sA[s[i]-'a']++;
sT[t[i]-'a']++;
}

for(int i=0;i<26;i++){
    if(sA[i]!=sT[i]){
        return false;
    }
}

return true;
}