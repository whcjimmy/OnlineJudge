#include<iostream>
using namespace std;
long long int Factorial(long long int n)
{
	if(n==0)
		return 1;
	else 
		return n*Factorial(n-1);
} 
int main()
{
	long long int n,sum,num[5]={40320,362880,3628800,39916800,479001600};
	while(cin>>n)
	{
		if(n<8){
			cout<<"Underflow!"<<endl;
		}else if(n>=13){
			cout<<"Overflow!"<<endl;
		}else{
			cout<<num[n-8]<<endl;
		}	
	}
}
