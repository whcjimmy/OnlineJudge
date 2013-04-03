#include<iostream.h>
int main(){
    int l[26],i,a,b;
    char s[11];
    for(i=0;i<=7;i++){
                      l[i]=1+i*9;
                      }
    l[8]=39;
    for(i=9;i<=10;i++){
                       l[i]=1+(i-1)*9;
                       }
    for(i=11;i<=13;i++){
                        l[i]=2+(i-11)*9;
                        }
    l[14]=48;
    for(i=15;i<=21;i++){
                        l[i]=2+(i-12)*9;
                        }
    l[22]=21;
    l[23]=3;
    l[24]=12;
    l[25]=30;
    while(cin>>s){
                  a=0;
                  b=s[0]-65;
                  a=a+l[b];
                  for(i=1;i<=8;i++){
                                    a=a+(s[i]-48)*(9-i);
                                    }
                  a=a+(s[9]-48);
                  if(a%10==0){
                              cout<<"real\n";
                              }else{
                                    cout<<"fake\n";
                                    }
                  }
}
    
