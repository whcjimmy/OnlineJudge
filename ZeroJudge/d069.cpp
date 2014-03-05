#include<iostream.h>
int main(){
    int year,a,i;
    while(cin>>a){
                  for(i=0;i<a;i++){
                                   cin>>year;
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
