#include<cstdio>
using namespace std;

int main()
{
    long long int N;
    while(scanf("%lld", &N) != EOF)
    {
	printf("%lld\n", ((((1+N)*((N-1)/2+1))/2)*2-1)*3-6);
    }
    return 0;
}
