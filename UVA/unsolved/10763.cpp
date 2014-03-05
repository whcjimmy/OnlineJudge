#include<cstdio>
#include<map>
#include<algorithm>
using namespace std;

struct node
{ 
    int a, b;
    
    bool operator<(const node &t) const
    {
	if(a == t.a)
	    return b < t.b;
	else
	    return a < t.a;
    }

};

int main()
{
    int n, t1, t2, f;
    map<node, int> mymap;
    map<node, int>::iterator it;
    node no, ino;
    while(scanf("%d",&n))
    {
	if(n == 0)
	    break;
	f = 0;
	mymap.clear();
	for(int i=0; i<n; i++)
	{
	    scanf("%d%d", &t1, &t2);
	    no.a = t1, no.b = t2;
	    ino.a = t2, ino.b = t1;
	    if(mymap[ino])
		mymap[ino]--;
	    else
		mymap[no]++;
	}
	for(it = mymap.begin(); it != mymap.end(); ++it)
	    if(it->second != 0)
	    {
		f = 1;
		break;
	    }
	if(!f)
	    printf("Yes\n");
	else
	    printf("No\n");
    }
    return 0;
}
