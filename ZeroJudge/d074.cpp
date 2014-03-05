#include<iostream.h>
int main(){
    int a,i,b,p,q;
    cin>>a;
    int num[a];
    for(i=0;i<a;i++){
                     cin>>num[i];
                     }
    for(p=0;p<(a-1);p++){
                         for(q=p+1;q<a;q++){
                                            if(num[p]>num[q]){
                                                              b=num[p];
                                                              num[p]=num[q];
                                                              num[q]=b;
                                                              }
                                            }
                         }
    cout<<num[a-1];
}
