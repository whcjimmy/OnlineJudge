#include<cstdio>
#include<cstdlib>
#include<algorithm>
using namespace std;

struct NODE
{
	int T,S,number;
	double r;
	bool operator<(const NODE&t) const
	{
		return r>t.r;
	}
};

int main()
{

	int a,c,i,j,n;
	NODE p[1010];
	while(scanf("%d",&c)!=EOF)
	{
		for(j=0;j<c;j++)
		{
			a=0;
			scanf("%d",&n);
			for(i=0;i<n;i++)
			{
				scanf("%d %d",&p[i].T,&p[i].S);
				p[i].number=i+1;
				p[i].r=p[i].S/p[i].T;
			}
			sort(p,p+n);
			for(i=0;i<n;i++)
				if(a==0)
				{
					printf("%d",p[i].number);
					a=1;
				}
				else
					printf(" %d",p[i].number);

			printf("\n");
			if(j!=c-1)
				printf("\n");
		}
	}
	return 0;
}

