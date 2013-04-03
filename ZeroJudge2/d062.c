#include<stdio.h>
#include<stdlib.h>

void MakeSet(int );
void Union(int ,int );
int FindSet(int );
void Link(int ,int );
int p[30001],rank[30001],s[30001];

int main()
{
	long long int N;
	while(scanf("%lld",&N)!=EOF)
	{
		int n,m,i,j,k,a,b;
		for(i=0;i<N;i++)
		{
			scanf("%d%d",&n,&m);
			for(j=1;j<=n;j++)
			{
				p[j]=j;
				rank[j]=0;
				s[j]=1;
			}
			for(j=1;j<=m;j++)
			{
				scanf("%d%d",&a,&b);
				if(FindSet(a)!=FindSet(b))
					Union(a,b);
			}
			j=0;
			for(k=1;k<=n;k++)
				if(j<=s[FindSet(k)])
					j=s[FindSet(k)];
			printf("%d\n",j);
		}
	}
	return 0;
}

void MakeSet(int x)
{
	p[x]=x;
	rank[x]=0;
}

void Union(int x,int y)

{
	Link(FindSet(x),FindSet(y));
}

int FindSet(int x)
{
	if(x!=p[x])
		p[x]=FindSet(p[x]);
	return p[x];
}

void Link(int x,int y)
{
	if(rank[x]>rank[y])
	{
		p[y]=x;
		s[x]+=s[y];
	}
	else
	{
		p[x]=y;
		s[y]+=s[x]; 
		if(rank[x]==rank[y])
			rank[y]++;
	}
}
