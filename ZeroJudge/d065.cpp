#include<iostream.h>
int main(){
    int num[3],i,p,q;
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
    cout<<num[2];
}
    
