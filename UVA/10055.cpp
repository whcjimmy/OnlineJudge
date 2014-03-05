#include<iostream>
using namespace std;
int main()
{
    long long int a,b,c;
    while(cin>>a>>b){
	if(a<b){
	    c=a;
	    a=b;
	    b=c;
	}
	cout<<a-b<<endl;
    }
}
