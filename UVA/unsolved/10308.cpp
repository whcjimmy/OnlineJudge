#include<cstdio>
#include<cstring>
#include<string>
using namespace std;
int v[10001][10001], visited[10001], dis, number, end, temp;

void dfs(int );
int main()
{
    int a, b, d;
    char c[100];
    memset(v, -1, sizeof(v));
    memset(visited, 0, sizeof(visited));
    dis = number = temp = end = 0;

    while(gets(c))
    {
	if(c[0] != '\0')
	{
	    sscanf(c,"%d %d %d",&a,&b,&d);
	    v[a][b] = v[b][a] = d;
	    if(a>number) number = a;
	    if(b>number) number = b;
	}
	else
	{
	    dfs(1);
	    printf("%d\n",dis);
	    memset(v, -1, sizeof(v));
	    memset(visited, 0, sizeof(visited));
	    dis = number = temp = 0;
	}
    }
    return 0;
}

void dfs(int x)
{
   if(visited[x] == 1)
       return ;
   visited[x] = 1; 
   for(int i=1; i<=number; i++)
   {
       if(v[x][i] != -1)
       {
	   temp += v[x][i];
	   if(temp > dis)
	       dis = temp;
	   dfs(i);
       }
   }
}
