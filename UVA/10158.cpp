#include<cstdio>
#include<cstring>
#define MAX 10005
using namespace std;

struct DisjointSet
{
    int fa[MAX];

    void init(int n)
    {
	for(int i=1; i<=n; i++)
	    fa[i] = i;
    }

    int Find(int x)
    {
	return	x == fa[x] ? x : Find(fa[x]);
    }
    
    void Union(int a, int b)
    {
	fa[Find(a)] = Find(b);
    }

    void setFriends(int a, int b)
    {

    }

    void setEnemies(int a, int b)
    {
	
    }

    int areFriends(int a, int b)
    {
	if(Find(a) == Find(b)) return 1;
	else return 0;
    }

    int areEnemies(int a, int b)
    {
	if(Find(a) != Find(b)) return 1;
	else return 0;

    }
}d;
int main()
{
    int n, c, x, y;
    while(scanf("%d", &n) != EOF)
	for(int i=0; i<n; i++)
	{
	    scanf("%d%d%d", &c, &x, &y);
	    if(c == 0 && x == 0 && y == 0)
		break;
	    d.init(n);
	    switch(c)
	    {
		case 1:

		    break;
		case 2:

		    break;
		case 3:

		    break;
		case 4:

		    break;
	    }
	}
    return 0;
}
