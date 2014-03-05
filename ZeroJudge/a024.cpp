#include<iostream.h>
int main(){
    long long int a,b,r;
    while(cin>>a>>b){
                     while(b!=0){
                                 r=a%b;
                                 a=b;
                                 b=r;
                                 }
                     cout<<a<<"\n";
                     }
}
