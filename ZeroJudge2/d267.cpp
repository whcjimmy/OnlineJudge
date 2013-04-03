#include<cstdio>
#include<algorithm>
#include<cstring>
using namespace std;
int map[110][110],rasp[110][110],bur[110][110];

int main()
{
	int	Nr,Nc;
	while(scanf("%d%d",&Nr,&Nc)!=EOF)
	{
		memset(map,0,sizeof(map));
		memset(rasp,0,sizeof(rasp));
		memset(bur,0,sizeof(bur));
		if(Nr!=0 && Nc!=0)
		{
			for(int i=0;i<Nr;i++)
				for(int j=0;j<Nc;j++)
				{
					scanf("%d",&map[i][j]);
					rasp[i+1][j+1]=map[i][j];
				}				
			for(int i=0;i<Nr;i++)
				for(int j=0;j<Nc;j++)
					rasp[i+1][j+1]+=max(rasp[i+1][j],rasp[i][j+1]);
		}
	}
	return 0;
}
