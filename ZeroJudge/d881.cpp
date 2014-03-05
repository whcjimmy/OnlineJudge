#include<iostream.h>
int main(){
    long long int a,i,total;
    while(cin>>a){
                  total=0;
                  for(i=1;i<=49;i++){
                                     total=total+(50-i)*(1+(i-1)*a);
                                     }
                  total=total+50;
                  cout<<total<<"\n";
                  }
}
