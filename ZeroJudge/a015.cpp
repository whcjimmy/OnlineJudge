#include<iostream.h>
int main(){
    int a,b,i,j;
    while(cin>>a>>b){
                     int mat[a][b];
                     for(i=0;i<a;i++){
                                      for(j=0;j<b;j++){
                                                       cin>>mat[i][j];
                                                       }
                                      }
                     for(i=0;i<b;i++){
                                      for(j=0;j<a;j++){
                                                       cout<<mat[j][i];
                                                       cout<<" ";
                                                       }
                                      cout<<"\n";
                                      }
                     }
}
