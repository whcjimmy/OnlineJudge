#include<cstdio>
#include<cstring>
#include<string>
#include<algorithm>
#include<map>
using namespace std;

int v[10001][10001], dis, num;
int dfs(int , int );
int main()
{
    int a, b, d, f;
    char s[100];
    map<int, int> mymap;
    map<int, int>:: iterator it;
    memset(v, 0, sizeof(v));
    f = 1;
    while(f)
    {
	dis = 0, num = 1;
	mymap.clear();
	memset(v, 0, sizeof(v));
	while(1)
	{
	    if(gets(s) == 0)
	    {
		f = 0;
		break;
	    }
	    if(s[0] != '\0')
	    {
		sscanf(s,"%d %d %d",&a,&b,&d);
		it = mymap.find(a);
		if(it == mymap.end())
		    mymap.insert(pair<int, int>(a, num++));
		it = mymap.find(b);
		if(it == mymap.end())
		    mymap.insert(pair<int, int>(b, num++));
		a = mymap.find(a)->second;
		b=  mymap.find(b)->second;
		v[a][b] = v[b][a] = d;
	    }
	    else break;
	}
	dfs(1, 1);
	printf("%d\n", dis);
    }
    return 0;
}

int dfs(int x, int y)
{
    int h1, h2;
    h1 = h2 = 0;
    for(int i=1; i<=num; i++)
	if(v[x][i] && (i!=y))
	{
	    int h = dfs(i, x) + v[x][i];
	    if(h > h1)
		h2 = h1, h1 = h;
	    else if(h > h2)
		h2 = h;
	}
    dis = max(dis, h1+h2);
    return h1;
}
