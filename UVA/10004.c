#include<stdio.h>
int node[200][200],visited[200],color=1,n,l,print=0;

void dfs(int ,int );
int main()
{
    int i,j,a,b;
    while(scanf("%d",&n)!=EOF&&n!=0)
    {
	print=0;
	scanf("%d",&l);
	for(i=0;i<200;i++)
	    for(j=0;j<200;j++)
		node[i][j]=0;
	for(i=0;i<200;i++)
	    visited[i]=0;
	for(i=0;i<l;i++)
	{
	    scanf("%d%d",&a,&b);
	    node[a][b]=1;
	    node[b][a]=1;
	}
	dfs(0,color);
	if(print==1)
	    printf("NOT BICOLORABLE.\n");
	else if(print==0)
	    printf("BICOLORABLE.\n");
    }
    return 0;
}

void dfs(int now,int color)
{
    int i,next;
    visited[now]=color;
    color=0-color;
    for(i=0;i<n;i++)
	if(node[now][i]!=0)
	    if(visited[i]==0)
		dfs(i,color);
	    else
		if(visited[now]==visited[i])
		    print=1;
		else
		    print=0;
}
