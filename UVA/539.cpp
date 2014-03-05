#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;

int node[30][30], visited[30][30], n, m, ans, temp;
void DFS(int, int);
int main()
{
    int a, b;
    while(scanf("%d%d", &n, &m) != EOF)
    {
	ans = temp = 0;
	memset(node, 0, sizeof(node));
	memset(visited, 0, sizeof(visited));
	if(n == 0 && m == 0)
	    break;
	for(int i=0; i<m; i++)
	{
	    scanf("%d%d", &a, &b);
	    node[a][b] = node[b][a] = 1;
	}
	for(int i=0; i<n; i++)
	    DFS(i, 0);
	printf("%d\n", ans);
    }
    return 0;
}

void DFS(int x, int length)
{
    if(length > ans)
	ans = length;
    length++;
    for(int i=0; i<n; i++)
	if(node[x][i] && !visited[x][i] && !visited[i][x])
	{
	    visited[x][i] = 1;
	    DFS(i, length);
	    visited[x][i] = 0;
	}
}
