#include<iostream.h>
int main(){
    int year;
    while(cin>>year){
                     if((year%400)==0){
                                       cout<<"閏年\n";
                                       }else if ((year%400)!=0&&(year%100)==0){
                                             cout<<"平年\n";
                                             }
                     if((year%4)==0&&(year%100)!=0){
                                                    cout<<"閏年\n";
                                                    }else if((year%4)!=0){
                                                          cout<<"平年\n"; 
                                                          }
                     }
}
