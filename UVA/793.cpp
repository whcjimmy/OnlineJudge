#include<iostream>
#include<string>
#include<cstdio>
#include<cstring>
#define MAX 1000005
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
	return x == fa[x] ? x : Find(fa[x]);
    }

    void Union(int a, int b)
    {
	fa[Find(a)] = Find(b);
    }
}d;
int main()
{
    int T, N, a, b, s, u;
    char c;
    string str;
    while(scanf("%d", &T) != EOF)
	while(T--)
	{
	    s = u = 0;
	    scanf("%d", &N);
	    getchar();
	    d.init(N);
	    while(getline(cin, str))
	    {
		if(str == "")
		    break;
		sscanf(str.c_str(), "%c%d%d", &c, &a, &b);
		if(c == 'c')
		    d.Union(a, b);
		else if(c == 'q')
		    if(d.Find(a) != d.Find(b))
			u++;
		    else 
			s++;
	    }
	    printf("%d,%d\n", s, u);
	    if(T) printf("\n");
	}
    return 0;
}
