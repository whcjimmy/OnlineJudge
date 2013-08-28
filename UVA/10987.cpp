#include<cstdio>
#include<cstring>
#include<string>
using namespace std;
int m[110][110],n,N,cable,cases;

int Floyd_Warshell();
int main()
{
    cases=1;
    while(scanf("%d",&N)!=EOF)
	while(N--)
	{
	    cable=0;
	    memset(m,0,sizeof(m));
	    scanf("%d",&n);
	    for(int i=2;i<=n;i++)
		for(int j=1;j<i;j++)
		{
		    scanf("%d",&m[i][j]);
		    m[j][i]=m[i][j];
		}
	    printf("Case #%d:\n",cases++);
	    if(Floyd_Warshell()!=0)
	    {
	       for(int i=1;i<=n;i++)
		   for(int j=1;j<=n;j++)
		       if(m[i][j]!=0)
			   cable++;
	       cable/=2;
	       printf("%d\n",cable);
		for(int i=2;i<=n;i++)
		    for(int j=1;j<i;j++)
			if(m[i][j]!=0)
			    printf("%d %d %d\n",j,i,m[j][i]);
	    }
	    printf("\n");
	}	
    return 0;
}

int Floyd_Warshell()
{
    for(int k=1;k<=n;k++)
	for(int i=1;i<=n;i++)
	    for(int j=1;j<=n;j++)
		if(m[i][k]+m[k][j]<m[i][j])
		{
		    printf("Need better measurements.\n");
		    return 0;
		}
		else if(i!=j&&j!=k&&k!=i&&m[i][k]!=0&&m[k][j]!=0)
		    if(m[i][k]+m[k][j]==m[i][j])
			m[i][j]=m[j][i]=0;
    return 1;
}
