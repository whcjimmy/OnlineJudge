#include<iostream.h>
#include<math.h>
#include<iomanip.h>
int main(){
    int num[6],i;
    for(i=0;i<6;i++){
                     cin>>num[i];
                     }
    cout<<pow(num[0],num[1])<<"\n";
    cout<<fixed<<setprecision(3)<<sqrt(num[2])<<"\n";
    cout<<abs(num[3])<<"\n";
    cout<<(rand() % (num[5]-num[4]+1)) +num[4]<<"\n";
}
