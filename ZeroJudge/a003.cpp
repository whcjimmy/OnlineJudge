#include<iostream.h>
int main(){
    int m,d,s;
    while(cin>>m>>d){
                     s=(m*2+d)%3;
                     switch(s){
                               case 0:
                                    cout<<"´¶³q\n";
                                    break;
                               case 1:
                                    cout<<"¦N\n";
                                    break;
                               case 2:
                                    cout<<"¤j¦N\n";
                                    break;
                                    }
                     }
}
