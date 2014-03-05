#include<iostream.h>
int main(){
    int i,p,q;
    long long int num[3];
    for(i=0;i<3;i++){
                     cin>>num[i];
                     }
    for(p=0;p<2;p++){
                     for(q=p+1;q<3;q++){
                                        if(num[p]>num[q]){
                                                          i=num[p];
                                                          num[p]=num[q];
                                                          num[q]=i;
                                                          }
                                        }
                     }
    if((num[0]*num[0]+num[1]*num[1])==num[2]*num[2]){
                                                     cout<<"right triangle\n";
                                                    }else if((num[0]*num[0]+num[1]*num[1])>num[2]*num[2]){
                                                         cout<<"acute triangle\n";
                                                         }else{
                                                               cout<<"obtuse triangle\n";
                                                               }
}
