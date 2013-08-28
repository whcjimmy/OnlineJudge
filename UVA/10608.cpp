#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
int p[30009],rank[30009],num[30009];

void MakeSet(int );
void Union(int ,int );
int FindSet(int );
void Link(int ,int );
int main()
{
    int cases,N,M,a,b;
    scanf("%d",&cases);
    while(cases--)
    {
	memset(p,0,sizeof(p));
	memset(rank,0,sizeof(rank));
	memset(num,0,sizeof(num));
	scanf("%d%d",&N,&M);
	for(int i=0;i<M;i++)
	{	
	    scanf("%d%d",&a,&b);
	    if(p[a]==0)
		MakeSet(a);
	    if(p[b]==0)
		MakeSet(b);
	    if(FindSet(a)!=FindSet(b))
		Union(a,b);
	}		
	printf("%d\n",*max_element(num+1,num+N+1));
    }
    return 0;
}
void MakeSet(int x)
{
    p[x]=x;
    rank[x]=0;
    num[x]++;
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
	num[x]+=num[y];
    }
    else
    {
	p[x]=y;
	num[y]+=num[x];
	if(rank[x]==rank[y])
	    rank[y]++;
    }
}	
