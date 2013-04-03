#include<iostream.h>
int main(){
    int a;
    while(cin>>a){
                  switch(a){
                            case 1:
                                 cout<<2<<"\n";
                                 break;
                            case 2:
                                 cout<<4<<"\n";
                                 break;
                            default:
                                    cout<<(a-1)*2+2+(a-1)*(a-2)<<"\n";
                                    break;
                            }
                  }
}
