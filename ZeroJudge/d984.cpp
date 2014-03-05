#include<iostream.h>
int main(){
    long long int num[3],i,p,q;
    char a;
    while(cin>>num[0]>>num[1]>>num[2]){
                                       char name[3]={'A','B','C'};
                                       for(p=0;p<2;p++){
                                                        for(q=p+1;q<3;q++){
                                                                           if(num[p]>num[q]){
                                                                                             i=num[p];
                                                                                             num[p]=num[q];
                                                                                             num[q]=i;
                                                                                             a=name[p];
                                                                                             name[p]=name[q];
                                                                                             name[q]=a;
                                                                                             }
                                                                           }
                                                        }
                                       if((num[0]+num[1])>num[2]){
                                                                  cout<<name[1]<<"\n";
                                                                  }else{
                                                                        cout<<name[2]<<"\n";
                                                                        } 
                                       }
}
