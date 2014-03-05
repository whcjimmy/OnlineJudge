#include<iostream.h>
#include<string.h>
using namespace std;
int main(){
    string s;
    int i,p=0;
    long long int temp,num[1000];
    while(getline(cin,s)){
                          temp=0;
                          i=0;
                          p=0;
                          while(s[i]!='\0'&&s[i]!=10){  
                                            if(s[i]!=' '){
                                                       switch(s[i]){
                                                         case 37:
                                                              num[p-2]=num[p-2]%num[p-1];
                                                              p--;
                                                              break;
                                                         case 42:
                                                              num[p-2]=num[p-2]*num[p-1];
                                                              p--;
                                                              break;
                                                         case 43:
                                                              num[p-2]=num[p-2]+num[p-1];
                                                              p--;
                                                              break;   
                                                         case 45:
                                                              num[p-2]=num[p-2]-num[p-1];
                                                              p--;
                                                              break;   
                                                         case 47:
                                                              num[p-2]=num[p-2]/num[p-1];
                                                              p--;
                                                              break;
                                                         default:
                                                                 temp=temp*10+(s[i]-48);
                                                                 break;
                                                                 }
                                                         i++;
                                                         }else{
                                                               if((s[i-1]>=48)&&(s[i-1]<=57)){
                                                               num[p]=temp;
                                                               temp=0;
                                                               p++;
                                                               i++;
                                                               }else{
                                                                     i++;
                                                               }
                                                               }
                                            }
                          cout<<num[0]<<endl;
                          }
}
