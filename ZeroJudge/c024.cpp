#include<iostream.h>
int main(){
    long long int a,b;
    while(cin>>a){
                  if(a<0){
                          break;
                          }else{
                                b=2+(a-1)*0.5*(2*2+(a-2));
                                cout<<b<<"\n";
                                }
                  }
}
