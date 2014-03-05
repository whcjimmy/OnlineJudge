#include<cstdio>

int main()
{
    int N;
    while(scanf("%d",&N)!=EOF&&N!=0)
    {
	long long int total;
	total=N*(N+1)*(2*N+1)/6;
	printf("%lld\n",total);
    }
    return 0;

}
