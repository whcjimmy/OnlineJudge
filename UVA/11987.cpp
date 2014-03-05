#include<cstdio>
#include<cstring>
#define MAX 200005
using namespace std;

struct DisjointSet
{
    int fa[MAX], sum[MAX], num[MAX];

    void init(int n)
    {
	for(int i=1; i<=n; i++)
	{
	    fa[i] = fa[i+n] = i+n;
	    sum[i+n] = i; 
	    num[i+n] = 1;
	}
    }

    int Find(int x)
    {
	return x == fa[x] ? x : Find(fa[x]);
    }

    void Union(int a, int b)
    {
	int x = Find(a), y = Find(b);
	if(x == y)
	    return ;
	sum[y] += sum[x];
	num[y] += num[x];
	fa[x] = y;
    }

    void Move(int a, int b)
    {
	int x = Find(a), y = Find(b);
	if(x == y)
	    return ;
	sum[y] += a;
	num[y] += 1;
	fa[a] = y;
	sum[x] -= a;
	num[x] -= 1;
    }

    void Output(int a)
    {
	int t = Find(a);
	printf("%d %d\n", num[t], sum[t]);
    }

}d;
int main()
{
    int n, m, c, p, q;
    while(scanf("%d%d", &n, &m) != EOF)
    {
	d.init(n);
	for(int i=0; i<m; i++)
	{
	    scanf("%d", &c);
	    if(c == 3)
	    {
		scanf("%d", &p);
		d.Output(p);
	    }
	    else
	    {
		scanf("%d%d", &p, &q);
		if(c == 1)
		    d.Union(p, q);
		else if(c == 2)
		    d.Move(p, q);
	    }
	}
    }
    return 0;
}
