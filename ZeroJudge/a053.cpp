#include<iostream.h>
int main(){
    int a;
    while(cin>>a){
                  if(a<=10){
                            cout<<6*a<<"\n";
                            }else if((a>=11)&&(a<=20)){
                                  cout<<60+2*(a-10)<<"\n";
                                  }else if((a>=21)&&(a<40)){
                                        cout<<80+(a-20)<<"\n";
                                        }else{
                                              cout<<100<<"\n";
                                              }
                  }
}
