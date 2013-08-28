#include<cstdio>
using namespace std;

long long int f(long long int);

int main()
{
    long long int n,i;
    while(scanf("%lld",&n)!=EOF)
	if(n!=0)
	    printf("%lld\n",f(n));
	else break;

    return 0;
}

long long int f(long long int n)
{
    long long int count=0;
    if(n>=10)
    {
	while(n!=0)
	{
	    count+=n%10;
	    n=(n-n%10)/10;
	}
	return f(count);
    }
    else
	return n;
}
