#include<stdio.h>

long long int mod(long long int ,long long int ,long long int );
int main()
{
    long long int B,P,M,answer;
    while(scanf("%lld%lld%lld",&B,&P,&M)!=EOF)
    {
	answer=mod(B,P,M);
	printf("%lld\n",answer);
    }
    return 0;
}

long long int mod(long long int B,long long int P,long long int M)
{
    if(P==0)
	return 1;
    else if(P==1)
	return B%M;
    else
	if(P%2==1)
	    return mod(B,P/2,M)*mod(B,P/2,M)*B%M;
	else
	    return mod(B,P/2,M)*mod(B,P/2,M)%M;
}
