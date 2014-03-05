#include<iostream.h>
int main(){
    int year,a,i,j;
    while(cin>>a){
                  j=1;
                  for(i=0;i<a;i++){
                                   cin>>year;
                                   if((year%400)==0){
                                                     cout<<"Case "<<j<<": a leap year\n";
                                                     j++;
                                                     }else if ((year%400)!=0&&(year%100)==0){
                                                           cout<<"Case "<<j<<": a normal year\n";
                                                           j++;
                                                           }
                                   if((year%4)==0&&(year%100)!=0){
                                                                  cout<<"Case "<<j<<": a leap year\n";
                                                                  j++;
                                                                  }else if((year%4)!=0){
                                                                        cout<<"Case "<<j<<": a normal year\n";
                                                                        j++;
                                                                        }
                                   }
                  }
}
