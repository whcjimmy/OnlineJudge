#include<iostream.h>
int main(){
    long long int a,b,i,j,total;
    cin>>a;
    for(i=0;i<a;i++){
                     total=0;
                     cin>>b;
                     long long int num[b][3];
                     for(j=0;j<b;j++){
                                      cin>>num[j][0]>>num[j][1]>>num[j][2];
                                      total=total+num[j][0]*num[j][2];
                                      }
                     cout<<total<<"\n";
                     }
}
