#include<cstdio>
using namespace std;

long long int GCD(int ,int );
int main()
{
    int N;
    long long int num[510],G;
    for(int t=1;t<501;t++)
    {
	G=0;
	for(int i=1;i<t;i++)
	    for(int j=i+1;j<=t;j++)
		G+=GCD(i,j);
	num[t]=G;
    }
    while(scanf("%d",&N)!=EOF && N!=0)
    {
	printf("%lld\n",num[N]);		
    }
    return 0;
}

long long int GCD(int x,int y)
{
    int t,a,b;
    a=x;
    b=y;
    while(a!=0)
    {
	t=b%a;
	b=a;
	a=t;
    }
    return b;
}
