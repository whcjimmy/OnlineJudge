#include<iostream.h>
int main(){
    int year,a,b,i=0;
    cin>>a>>b;
    for(year=a;year<=b;year++){
                               if((year%400)==0){
                                                 i++;
                                                 }
                               if((year%4)==0&&(year%100)!=0){
                                                              i++;
                                                              }
                               }
    cout<<i;
    }
