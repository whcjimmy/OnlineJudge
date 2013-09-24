#include<cstdio>
#include<iostream>
#include<cstring>
#include<string>
#include<algorithm>
using namespace std;

int m[102][102], d[102][102];
int dfs(int ,int );
int main()
{
    int N, R, C, ans;
    string S;
    cin>>N;
    while(N--)
    {
	ans = 0;
	memset(m, 0, sizeof(m));
	memset(d, 0, sizeof(d));
	cin>>S>>R>>C;
	for(int i=1; i<=R; i++)
	    for(int j=1; j<=C; j++)
		cin>>m[i][j];
	for(int i=1; i<=R; i++)
	    for(int j=1; j<=C; j++)
		d[i][j] = dfs(i, j);
	for(int i=1; i<=R; i++)
	    for(int j=1; j<=C; j++)
		ans = max(ans, d[i][j]);
	cout<<S<<": "<<ans<<endl;	
    }
    return 0;
}

int  dfs(int x, int y)
{
    int left, right, up, down;
    if(m[x-1][y] > m[x][y])
	if(d[x-1][y] != 0)
	    left = 1 + d[x-1][y];
	else
	    left = 1 + dfs(x-1, y);
    if(m[x+1][y] > m[x][y])
	if(d[x+1][y] != 0)
	    right = 1 + d[x+1][y];
	else
	    right = 1 + dfs(x+1, y);
    if(m[x][y-1] > m[x][y])
	if(d[x][y-1] != 0)
	    down = 1 + d[x][y-1];
	else
	    down = 1 + dfs(x, y-1);
    if(m[x][y+1] > m[x][y])
	if(d[x][y+1] != 0)
	    up = 1 + d[x][y+1];
	else
	    up = 1 + dfs(x, y+1);
    //cout<<max(max(left, right), max(up, down))<<endl;
    return max(max(left, right), max(up, down));
}
