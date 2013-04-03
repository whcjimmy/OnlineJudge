#include<iostream.h>
int main(){
    int year;
    while(cin>>year){
                     if(year=='EOF'){
                                 break;
                                 }else{
                                       if((year%400)==0){
                                                         cout<<"a leap year\n";
                                                         }else if ((year%400)!=0&&(year%100)==0){
                                                               cout<<"a normal year\n";
                                                               }
                                                               if((year%4)==0&&(year%100)!=0){
                                                                                              cout<<"a leap year\n";
                                                                                              }else if((year%4)!=0){
                                                                                                    cout<<"a normal year\n";
                                                                                                    }
                                       }
                     }
}
