#include<iostream.h>
int f91(int m){
    if(m>=101){
               return m-10;
               }else{
                     return f91(f91(m+11));
                     }
}
int main(){
    long long int a;
    while(cin>>a){
                  if(a==0){
                           break;
                           }else{
                                 cout<<"f91("<<a<<") = "<<f91(a)<<"\n";
                                 }
                  }
}
                  
