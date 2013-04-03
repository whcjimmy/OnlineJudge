/*Duke Internet Programming Contest 1990,uva 100*/
#include<iostream>
using namespace std;
int Collatz(long long int n)
{
	int i=1;
	while(n!=1)
	{
		(n%2==1)?n=n*3+1:n=n/2;
		i++;
	}
	return i;
}
int main()
{
	int i,j,m;
	while (cin>>i>>j)
    {
		cout<<i<<" "<<j;
		if(i>j)
		{	
			m=i;
			i=j;
			j=m;
		}
		int biggest=Collatz(i);
		for(m=i;m<=j;m++)
			(biggest<Collatz(m))?biggest=Collatz(m):biggest=biggest;
		cout<<" "<<biggest<<endl;
	}
}
