#include<iostream.h>
int main(){
    int a,i,j,k,number[4];
    cin>>a;
    for(i=0;i<a;i++){
                     for(j=0;j<4;j++){
                                      cin>>number[j];
                                      }
                     if((number[1]-number[0])==(number[2]-number[1])){
                                                                      cout<<number[0]<<" "<<number[1]<<" "<<number[2]<<" "<<number[3]<<" ";
                                                                      cout<<number[3]+(number[3]-number[2]);
                                                                      cout<<"\n";
                                                                      }else if((number[1]/number[0])==(number[2]/number[1])){
                                                                            cout<<number[0]<<" "<<number[1]<<" "<<number[2]<<" "<<number[3]<<" ";
                                                                            cout<<number[3]*(number[3]/number[2]);
                                                                            cout<<"\n";
                                                                            }
                                      }
} 
