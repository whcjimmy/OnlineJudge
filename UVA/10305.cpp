#include<cstdio>
#include<cstring>
using namespace std;

int mat[105][105], visit[105], order[105], time, n, m;
void dfs(int );
void topological_sort();
int main()
{
    int a, b;
    while(scanf("%d%d", &n, &m))
    {
	if(n == 0 && m == 0)
	    break;
	time = n-1;
	memset(mat, 0, sizeof(mat));
	memset(visit, 0, sizeof(visit));
	memset(order, 0, sizeof(order));
	for(int i=0; i<m; i++)
	{
	    scanf("%d%d", &a, &b);
	    mat[a][b] = 1;
	}
	topological_sort();	
	for(int i=0; i<n; i++)
	    if(!i)
		printf("%d", order[i]);
	    else
		printf(" %d", order[i]);
	printf("\n");
    }
    return 0;
}

void dfs(int a)
{
   visit[a] = 1;
   for(int i=1; i<=n; i++)
       if(mat[a][i] && !visit[i])
	   dfs(i);
   order[time--] = a;
}

void topological_sort()
{
    for(int i=1; i<=n; i++)
	if(!visit[i])
	    dfs(i);
}
