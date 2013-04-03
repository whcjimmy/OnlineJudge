#include<iostream.h>
#include<string.h>
int main(){
    char num[11],a,i;
    while(cin>>num){
                    a=0;
                    i=0;
                    for(i=(strlen(num)-1);i>=0;i--){
                                                    if(a==0){
                                                             if(num[i]==48){
                                                                            continue;
                                                                            }else{
                                                                                  cout<<num[i];
                                                                                  a=1;
                                                                                  }
                                                             }else{
                                                                   cout<<num[i];
                                                                   }                           
                                                    }
                    cout<<"\n";
                    }
}
