#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;

int main()
{
	int N;
	while(scanf("%d",&N)!=EOF)
	{
		int dp[2][N],temp,length;
		memset(dp,0,sizeof(dp));
		for(int i=0;i<N;i++)
		{
			scanf("%d",&dp[0][i]);
			dp[1][i]=1;
		}
		for(int i=1;i<N;i++)
		{
			for(int j=0;j<i;j++)
			{
				if(dp[0][j]<dp[0][i])
					if((dp[1][j]+1)>dp[1][i])
						dp[1][i]=dp[1][j]+1;
			}
		}
		printf("%d\n",*max_element(&dp[1][0],&dp[1][0]+N));
	}
	return 0;
}
