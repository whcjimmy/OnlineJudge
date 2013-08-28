#include<csdtio>
#include<cstring>
using namespace std;
int v[6]={5,10,20,50,100,200};
int nv[6];
int dp[600];

int main()
{
	while(scanf("%d%d%d%d%d%d",&nv[0],&nv[1],&nv[2],&nv[3],&nv[4],&nv[5])!=EOF)
		if(nv[0]!=0&&nv[1]!=0&&nv[2]!=0&&nv[3]!=0&&nv[4]!=0&&nv[5]!=0)
		{
			int a,b,value;
			scanf("%d.%d",&a,&b);
			value=a*100+b;	
			for(int i=0;i<501;i++)

	return 0;
}
