#include<cstdio>
#include<cstring>
using namespace std;

long long int m[105][105];
int main()
{
    long long int N, M, C;
    memset(m, 0, sizeof(m));
    for(int i=0; i<=100; i++)
	m[i][0] = 1;
    for(int i=1; i<=100; i++)
	for(int j=1; j<=100; j++)
	    m[i][j] = m[i-1][j-1] + m[i-1][j];
    while(scanf("%lld%lld", &N, &M) != EOF)
    {
	if(N == 0 && M == 0)
	    break;
	printf("%lld things taken %lld at a time is %lld exactly.\n", N, M, m[N][M]);
    }
    return 0;
}
