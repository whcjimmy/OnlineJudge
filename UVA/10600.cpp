#include<cstdio>
#include<cstring>
#include<algorithm>
#define MAXN 105
#define INF 2e9
using namespace std;


int m[MAXN][MAXN], f[MAXN][MAXN], d[MAXN], p[MAXN];
bool visited[MAXN];
int main()
{
    int T, N, M, A, B, C, minima, ans;
    scanf("%d", &T);
    while(T--)
    {
	scanf("%d%d", &N, &M);
	for(int i=0; i<=N; i++)
	    for(int j=0; j<=N; j++)
	    {
		f[i][j] = -INF;
		m[i][j] = INF;
	    }
	for(int i=0; i<M; i++)
	{
	    scanf("%d%d%d", &A, &B, &C);
	    m[A][B] = m[B][A] = C;
	}
	for(int i=0; i<=N; i++)
	{
	    visited[i] = false;
	    d[i] = INF;
	    p[i] = 1;
	}
	d[1] = 0;
	ans = 0;
	for(int i=1; i<=N; i++)
	{
	   A = -1;
	   minima = INF;
	   for(int j=1; j<=N; j++)
	       if(!visited[j] && d[j] < minima)
	       {
		   A = j;
		   minima = d[j];
	       }
	    if(A == -1)
		break;
	    for(int j=1; j<=N; j++)
		if(visited[j])
		    f[A][j] = f[j][A] = max(f[p[A]][j], d[A]);
	    visited[A] = true;
	    m[A][p[A]] = m[p[A]][A] = INF;
	    for(int j=1; j<=N; j++)
		if(!visited[j] && m[A][j] < d[j])
		{
		    d[j] = m[A][j];
		    p[j] = A;
		}
	}
	for(int i=1; i<=N; i++)
	    ans += d[i];
	minima = INF;
	for(int i=1; i<=N; i++)
	    for(int j=1; j<=N; j++)
		if(m[i][j] != INF)
		    minima = min(minima, m[i][j] - f[i][j]);
	printf("%d %d\n", ans, ans+minima);
    }
    return 0;
}
