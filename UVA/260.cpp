#include<cstdio>
#include<cstring>
#include<string>
using namespace std;
int  matrix[202][202],visited[202][202], result, N;
void dfs(int , int );

int main()
{
    int games = 1;
    char c[205];
    while(scanf("%d", &N)!=EOF && N!=0)
    {
	result = 0;
	memset(matrix, -1, sizeof(matrix));
	memset(visited, 0, sizeof(visited));
	for(int i=1; i<=N; i++)
	{
	    scanf("%s",c);
	    for(int j=0; j<N; j++)
		if(c[j] == 'b')
		    matrix[i][j+1] = 0;
		else if(c[j] == 'w')
		    matrix[i][j+1] = 1;
	}
	for(int i=1; i<=N; i++)
	    if(matrix[1][i] == 0 && visited[1][i] != 1 && result != 1)
		dfs(1, i);
	if(result == 0)
	    printf("%d W\n", games++);
	else if(result == 1)
	    printf("%d B\n", games++);
    }
    return 0;
}

void dfs(int x, int y)
{
    visited[x][y] = 1;
    if(x == N)
	result = 1;
    if(result == 1)
	return ;
    else
    {
	if((matrix[x-1][y-1] == 0) && (visited[x-1][y-1] != 1))
	    dfs(x-1, y-1);
	if((matrix[x-1][y] == 0) && (visited[x-1][y] != 1))
	    dfs(x-1, y);
	if((matrix[x][y-1] == 0) && (visited[x][y-1] != 1))
	    dfs(x, y-1);
	if((matrix[x][y+1] == 0) && (visited[x][y+1] != 1))
	    dfs(x, y+1);
	if((matrix[x+1][y] == 0) && (visited[x+1][y] != 1))
	    dfs(x+1, y);
	if((matrix[x+1][y+1] == 0) && (visited[x+1][y+1] != 1))
	    dfs(x+1, y+1);
    }
}
