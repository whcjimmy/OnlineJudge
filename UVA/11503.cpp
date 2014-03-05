#include<iostream>
#include<string>
#include<map>
#define MAX 200010
using namespace std;

struct DisjointSet
{
    int fa[MAX], nu[MAX];

    void init(int n)
    {
	for(int i=1; i<=n; i++)
	{
	    fa[i] = i;
	    nu[i] = 1;
	}
    }

    int Find(int x)
    {
	return x == fa[x] ? x : Find(fa[x]);
    }

    void Union(int a, int b)
    {
	nu[b] += nu[a];
	fa[a] = b;
    }

    int Total(int c)
    {
	return nu[c];
    }
}d;

int main()
{
    int T, F, t1, t2, num;
    string str1, str2;
    map<string, int> mymap;
    while(cin>>T)
	while(T--)
	{
	    num = 1;
	    cin>>F;
	    mymap.clear();
	    d.init(2*F);
	    for(int i=0; i<F; i++)
	    {
		cin>>str1>>str2;
		if(!mymap[str1])
		    mymap[str1] = t1 = num++;
		else
		    t1 = mymap[str1];
		if(!mymap[str2])
		    mymap[str2] = t2 = num++;
		else
		    t2 = mymap[str2];
		t1 = d.Find(t1);
		t2 = d.Find(t2);
		if(t1 != t2)
		    d.Union(t1, t2);
		cout<<d.Total(t2)<<endl;
	    }
	}
    return 0;
}
