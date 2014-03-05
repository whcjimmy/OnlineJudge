#include<cstdio>
#include<cstring>
using namespace std;
int dp[7501];
int v[5]={1,5,10,25,50};
int coins;
int main()
{
        memset(dp,0,sizeof(dp));
    dp[0]=1;
        for(int i=0;i<5;i++)
                for(int j=v[i];j<7500;j++)
                                dp[j]+=dp[j-v[i]];
        while(scanf("%d",&coins)!=EOF)
        {
        printf("%d\n",dp[coins]);
        }
        return 0;
}

