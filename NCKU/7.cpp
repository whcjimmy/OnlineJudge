#include<cstdio>
#include<algorithm>
using namespace std;

struct NODE
{
	int number;
	double ratio;
	bool operator<(const NODE&t)const
	{
		if(ratio==t.ratio&&number>t.number)
			return true;
		if(ratio<t.ratio)
			return true;
		return false;
	}
}n[1001];

int main()
{
	int A,N,i,j,T,S;
	while(scanf("%d",&A)!=EOF)
	{
		for(i=0;i<A;i++)
		{
			if(i)
				printf("\n");
			scanf("%d",&N);
			for(j=0;j<N;j++)
			{
				scanf("%d%d",&T,&S);
				n[j].number=j+1;
				n[j].ratio=(double)S/T;
			}
			sort(n,n+N);
			for(j=(N-1);j>=0;j--)
			{
				printf("%d",n[j].number);
				if(j) printf(" ");
			}
			printf("\n");
		}
	}
	return 0;
}

