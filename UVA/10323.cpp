#include<iostream>
using namespace std;

int main()
{
    long long int n, sum, num[6]={40320,362880,3628800,39916800,479001600, 6227020800};
    while(cin>>n)
    {
	if(n<0)
	{
	    n = 0 - n;
	    if(n%2 == 0)
		cout<<"Underflow!"<<endl;
	    else
		cout<<"Overflow!"<<endl;
	}
	else if(n<8)
	    cout<<"Underflow!"<<endl;
	else if(n>13)
	    cout<<"Overflow!"<<endl;
	else
	    cout<<num[n-8]<<endl;
    }
    return 0;
}
