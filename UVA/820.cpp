#include<cstdio>
#include<cstring>
#include<cmath>
#include<queue>
#define INF 1000000000
using namespace std;

int cap[105][105], flow[105][105];
int fordFulkerson(int, int [105][105], int, int);
int main()
{
    int cases, n, s, t, c, p, q, r;
    cases = 1;
    while(scanf("%d", &n))
	if(n == 0)
	    break;
	else
	{
	    memset(cap, 0, sizeof(cap));
	    memset(flow, 0, sizeof(flow));
	    scanf("%d%d%d", &s, &t, &c);
	    for(int i=0; i<c; i++)
	    {
		scanf("%d%d%d", &p, &q, &r);
		cap[p][q] += r;
		cap[q][p] = cap[p][q];
	    }
	    printf("Network %d\nThe bandwidth is %d.\n\n", cases++, fordFulkerson(n, cap, s, t));
	}
    return 0;
}

int fordFulkerson(int n, int mat[105][105], int source, int sink)
{
    int i, now, next, maxf, minf, p[105];
    bool visited[105];
    queue<int> BFS;
    maxf = 0;

    while(1)
    {
	memset(visited, 0, sizeof(visited));
	while(!BFS.empty())
	    BFS.pop();
	BFS.push(source);
	visited[source] = true;
	while(!BFS.empty())
	{
	    now = BFS.front();
	    for(next=1; next<=n; next++)
	    {
		if(visited[next])
		    continue;
		if(mat[now][next] - flow[now][next] > 0)
		{
		    p[next] = now;
		    visited[next] = true;
		    BFS.push(next);
		}
		else if(flow[next][now] > 0)
		{
		    p[next] = -now;
		    visited[next] = true;
		    BFS.push(next);
		}
	    }
	    BFS.pop();
	}
	if(!visited[sink])
	    break;
	for(minf = INF, i = sink; i!=source; i = abs(p[i]))
	    if(p[i] >= 0)
		minf = min(minf, mat[p[i]][i] - flow[p[i]][i]);
	    else
		minf = min(minf, flow[i][-p[i]]);
	for(i = sink; i!= source; i= abs(p[i]))
	    if(p[i] >= 0)
		flow[p[i]][i] += minf;
	    else
		flow[i][-p[i]] -= minf;
    }
    for(i=1; i<=n; i++)
	maxf += flow[source][i];
    return maxf;
}
