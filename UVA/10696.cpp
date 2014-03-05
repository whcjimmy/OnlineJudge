#include<iostream>
using namespace std;
long long int f91(long long int N)
{
    if(N>=101)
	return N-10;
    else
	return f91(f91(N+11));
}
int main()
{
    long long int a;
    while(cin>>a)
    {
	if(a==0)
	    break;
	else 
	    cout<<"f91("<<a<<") = "<<f91(a)<<endl;
    }
}
