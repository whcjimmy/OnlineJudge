#include<iostream.h>
int main(){
    long long int a,b=1;
    while(cin>>a){
                  b=1;
                  if(a==0){
                           cout<<1<<"\n";
                           }else{
                                 while(a>=1){
                                            b=b*a;
                                            a--;
                                            }
                                 cout<<b<<"\n";
                                 }
                  
                  }
}
                                            
