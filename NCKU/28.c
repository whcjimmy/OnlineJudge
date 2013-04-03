#include<stdio.h>
#include<stdlib.h>

long long int F(long long int);
int main()
{
	long long int N;
	while(scanf("%lld",&N)!=EOF)
		printf("%lld\n",F(N));
	return 0;
}	

long long int F(long long int N)
{
	if(N==0)
		return 0;
	else if(N==1)
		return 1;
	else if(N==2)
		return 1;
	else 
		return(F(N-1)+F(N-2));
}
