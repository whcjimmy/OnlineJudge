#include<iostream.h>
int main(){
    long long int a,b,m,n,i,cl,j,k,temp;
    while(cin>>a>>b){
                     m=a;
                     n=b;
                     if(a>b){
                             temp=a;
                             a=b;
                             b=temp;
                             }
                     cl=0;
                     for(i=a;i<=b;i++){
                                       j=i;
                                       k=0;
                                       while(j!=1){
                                                   if(j%2==1){
                                                              j=3*j+1;
                                                              k++;
                                                              }else if(j%2==0){
                                                                    j=j/2;
                                                                    k++;
                                                                    }
                                                   }
                                       if(k>cl){
                                                cl=k;
                                                }
                                       }
                     cl++;
                     cout<<m<<" "<<n<<" "<<cl<<"\n";
                     }
}
