#include<iostream.h>
int main(){
    int a,i,len;
    char s[1000];
    while(cin>>s){
                  a=0;
                  len=strlen(s);
                  for(i=0;i<(len/2);i++){
                                         if(s[i]!=s[len-i-1]){
                                                              cout<<"no\n";
                                                              a=1;
                                                              break;
                                                              }
                                         }
                  if(a==0){
                           cout<<"yes\n";
                           }
                  }
}    
