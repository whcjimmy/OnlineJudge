#include<cstdio>
using namespace std;

int main()
{
    int t,N,P;
    while(scanf("%d",&t)!=EOF)
	for(int T=0;T<t;T++)
	{
	    scanf("%d%d",&N,&P);
	    int h[P],day[3700]={0},total=0;
	    for(int i=0;i<P;i++)
		scanf("%d",&h[i]);
	    for(int i=0;i<P;i++)
		for(int j=h[i];j<=N;j+=h[i])
		    if(day[j]==0&&(j%7!=6&&j%7!=0))
		    {
			total++;
			day[j]=1;
		    }
	    printf("%d\n",total);
	}
    return 0;
}
