#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;

int main()
{
    int cases, N, m[152][152], n[152][152], ans;
    scanf("%d", &cases);
    while(cases--)
    {
	ans = -99999;
	memset(m, 0, sizeof(m));
	memset(n, 0, sizeof(n));
	scanf("%d", &N);
	for(int i=1; i<=N; i++)
	    for(int j=1; j<=N; j++)
	    {
		scanf("%d", &n[i][j]);
		n[i+N][j] = n[i][j+N] = n[i+N][j+N] = n[i][j];
	    }
	for(int i=1; i<2*N; i++)
	    for(int j=1; j<2*N; j++)
		m[i][j] = m[i-1][j] + m[i][j-1] - m[i-1][j-1] + n[i][j];
	for(int i=1; i<=N; i++)
	    for(int j=1; j<=N; j++)
		for(int k=1; k<=N; k++)
		    for(int l=1; l<=N; l++)
			ans = max(ans, (m[i+k-1][j+l-1] - m[i+k-1][j-1] - m[i-1][j+l-1] + m[i-1][j-1]));
	printf("%d\n", ans);
    }
    return 0;
}
