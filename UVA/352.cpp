#include<cstdio>
#include<cstring>
using namespace std;

int m[26][26], visited[26][26], count;
void dfs(int ,int );
int main()
{
    int N, cases = 1;
    char str[26];
    while(scanf("%d",&N)!=EOF)
    {
	getchar();
	memset(m, 0, sizeof(m));
	memset(visited, 0, sizeof(visited));
	count = 0;
	for(int i=0; i<N; i++)
	{
	    gets(str);
	    for(int j=0; j<N; j++)
		m[i][j] = str[j] - '0';
	}
	for(int i=0; i<N; i++)
	    for(int j=0; j<N; j++)
		if(visited[i][j] == 0 && m[i][j] == 1)
		{
		    dfs(i, j);
		    count++;
		}
	printf("Image number %d contains %d war eagles.\n", cases++, count);
    }
    return 0;
}

void dfs(int x, int y)
{
    if(visited[x][y] == 1)
	return;
    visited[x][y] = 1;
    if((x-1 >= 0) && (y-1 >= 0) && m[x-1][y-1] == 1)
	dfs(x-1, y-1);
    if((x-1 >= 0) && m[x-1][y] == 1)
	dfs(x-1, y);
    if((x-1 >= 0) && (y+1 >= 0) && m[x-1][y+1] == 1)
	dfs(x-1, y+1);
    if((y-1 >= 0) && m[x][y-1] == 1)
	dfs(x, y-1);
    if((y+1 >= 0) && m[x][y+1] == 1)
	dfs(x, y+1);
    if((x+1 >= 0) && (y-1 >= 0) && m[x+1][y-1] == 1)
	dfs(x+1, y-1);
    if((x+1 >= 0) && m[x+1][y] == 1)
	dfs(x+1, y);
    if((x+1 >= 0) && (y+1 >= 0) && m[x+1][y+1] == 1)
	dfs(x+1, y+1);
}
