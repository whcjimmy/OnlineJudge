#include<iostream.h>
int main(){
    int a,i,j,num[2];
    cin>>a;
    for(i=0;i<a;i++){
                     for(j=0;j<2;j++){
                                     cin>>num[j];
                                     }
                     if(num[0]>=num[1]){
                                        switch(num[0]%2){
                                                         case 0:
                                                              if(num[1]%2==0){
                                                                              cout<<(num[0]+num[1])/2<<" "<<(num[0]-num[1])/2<<"\n";
                                                                              }else{
                                                                                    cout<<"impossible\n";
                                                                                    }
                                                                              break;
                                                         case 1:
                                                              if(num[1]%2==0){
                                                                              cout<<"impossible\n";
                                                                              }else{
                                                                                    cout<<(num[0]+num[1])/2<<" "<<(num[0]-num[1])/2<<"\n";
                                                                                    }
                                                                              break;
                                                              }
                                        }else{
                                              cout<<"impossible\n";
                                              }
                     }
}
