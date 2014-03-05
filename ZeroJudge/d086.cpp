#include<iostream.h>
int main(){
    char word[201];
    int i,total,a;
    while(gets(word)){
                      a=0;
                      i=0;
                      total=0;
                      if((word[0]==48)&&(word[1]=='\0')){
                                      break;
                                      }else{
                      while(word[i]!='\0'){
                                           if((word[i]>=65)&&(word[i]<=90)){
                                                                            total=total+(word[i]-64);
                                                                            i++;
                                                                            }else if((word[i]>=97)&&(word[i]<=122)){
                                                                                  total=total+(word[i]-96);
                                                                                  i++;
                                                                                  }else{
                                                                                        a=1;
                                                                                        i++;
                                                                                        }
                                           }
                                           }
                      if(a==0){
                               cout<<total<<"\n";
                               }else{
                                     cout<<"Fail\n";
                                     }
                      }
} 
                                           
