#include<iostream.h>
#include<math.h>
int main(){
    int a,b,c,i;
    while(cin>>a>>b>>c){
                        if(b*b-4*a*c<0){
                                        cout<<"No real root"<<"\n";
                                        }else if((b*b-4*a*c)==0){
                                              cout<<"Two same roots x="<<(-b+sqrt(b*b-4*a*c))/(2*a)<<"\n";
                                              }else{
                                                    cout<<"Two different roots x1="<<(-b+sqrt(b*b-4*a*c))/(2*a)<<" , x2="<<(-b-sqrt(b*b-4*a*c))/(2*a);
                                                    }
                        }
}
