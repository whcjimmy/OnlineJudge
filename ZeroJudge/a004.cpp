#include<iostream.h>
int main(){
    int year;
    while(cin>>year){
                     if((year%400)==0){
                                       cout<<"�|�~\n";
                                       }else if ((year%400)!=0&&(year%100)==0){
                                             cout<<"���~\n";
                                             }
                     if((year%4)==0&&(year%100)!=0){
                                                    cout<<"�|�~\n";
                                                    }else if((year%4)!=0){
                                                          cout<<"���~\n"; 
                                                          }
                     }
}
