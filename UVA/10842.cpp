#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;

int w[102][102], d[102], p[102];
bool isvisited[102];
int main()
{
    int N, n, m, u, v, c, ans, a;
    scanf("%d", &N);
    for(int t=1; t<=N; t++)
    {
	scanf("%d%d", &n, &m);
	memset(w, -1, sizeof(w));
	for(int i=0; i<m; i++)
	{
	    scanf("%d%d%d", &u, &v, &c);
	    if(u != v)
		w[u][v] = w[v][u] = max(c, w[u][v]);
	}
	for(int i=0; i<n; i++)
	{
	    p[i] = d[i] = -1;
	    isvisited[i] = false;
	}
	d[0] = 0;
	for(int i=0; i<n; i++)
	{
	    a = -1;
	    ans = -1;
	    for(int j=0; j<n; j++)
		if(!isvisited[j] && d[j] > ans)
		{
		    a = j;
		    ans = d[j];
		}
	    if(a == -1)
		break;
	    isvisited[a] = true;
	    for(int j=0; j<n; j++)
		if(!isvisited[j] && d[j] < w[a][j])
		{
		    d[j] = w[a][j];
		    p[j] = a;
		}
	}
	ans = 1e9;
	for(int i=1; i<n; i++)
	    ans = min(ans, w[i][p[i]]);
	printf("Case #%d: %d\n", t, ans); 
    }
    return 0;
}
