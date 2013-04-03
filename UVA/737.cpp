#include<cstdio>
using namespace std;
int c[4][1010];

int main()
{
	int cases,xa,xb,ya,yb,za,zb,temp,result;
	while(scanf("%d",&cases)!=EOF && (cases!=0))
	{
		temp=result=0;
		for(int i=0;i<cases;i++)
			scanf("%d%d%d%d",&c[0][i],&c[1][i],&c[2][i],&c[3][i]);
		xa=c[0][0];
		xb=c[0][0]+c[3][0];
		ya=c[1][0];
		yb=c[1][0]+c[3][0];
		za=c[2][0];
		zb=c[2][0]+c[3][0];
		for(int i=1;i<cases;i++)
		{
			if((c[0][i]<=xa && (c[0][i]+c[3][i])<=xa) || (c[0][i]>=xb && (c[0][i]+c[3][i]>=xb)))
				temp=1;
			if((c[1][i]<=ya && (c[1][i]+c[3][i])<=ya) || (c[1][i]>=yb && (c[1][i]+c[3][i]>=yb)))
				temp=1;
			if((c[2][i]<=za && (c[2][i]+c[3][i])<=za) || (c[2][i]>=xb && (c[2][i]+c[3][i]>=zb)))
				temp=1;
			if(c[0][i]>=xa)
				xa=c[0][i];
			if((c[0][i]+c[3][i]<=xb))
				xb=c[0][i]+c[3][i];
			if(c[1][i]>=ya)
				ya=c[1][i];
			if((c[1][i]+c[3][i]<=yb))
				yb=c[1][i]+c[3][i];
			if(c[2][i]>=za)
				za=c[2][i];
			if((c[2][i]+c[3][i]<=zb))
				zb=c[2][i]+c[3][i];
		}			
		if(temp==0)
			result=(xb-xa)*(yb-ya)*(zb-za);
		printf("%d\n",result);	
	}
	return 0;
}
