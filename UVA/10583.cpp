#include<cstdio>
#include<algorithm>
#include<cstring>
#include<string>
using namespace std;
int p[50005],rank[50005],cases;

void MakeSet(int );
void Union(int ,int );
int FindSet(int );
void Link(int ,int );

int main()
{
    cases=1;
    int n,m,a,b,religions;
    while(scanf("%d%d",&n,&m))
    {
	if(n==0 && m==0)
	    break;
	else
	{
	    religions=0;
	    memset(p,0,sizeof(p));
	    memset(rank,0,sizeof(rank));
	    for(int i=1;i<=n;i++)
		MakeSet(i);
	    for(int i=0;i<m;i++)
	    {
		scanf("%d%d",&a,&b);
		Union(a,b);
	    }
	    for(int i=1;i<=n;i++)
		if(p[i]==i)
		    religions++;
	    printf("Case %d: %d\n",cases++,religions); 
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
	p[y]=x;
    else
    {
	p[x]=y;
	if(rank[x]==rank[y])
	    rank[y]++;
    }
}
