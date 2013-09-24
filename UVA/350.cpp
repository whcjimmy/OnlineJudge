#include<cstdio>
#include<map>
using namespace std;

int main()
{
    map<int, int> mymap;
    map<int, int>::iterator it;
    int Z, I, M, L, cases, cycle;
    cases = 1;
    while(scanf("%d%d%d%d", &Z, &I, &M, &L))
	if(Z == 0 && I == 0 && M == 0 && L == 0)
	    break;
	else
	{
	    cycle = 1;
	    mymap.insert(pair<int, int>(L, cycle));
	    while(1)
	    {
		cycle++;
		L = ((Z * L ) + I) % M;
		it = mymap.find(L);
		if(it != mymap.end())
		{
		    printf("Case %d: %d\n", cases++, cycle-it->second);
		    break;
		}
		else
		    mymap.insert(pair<int, int>(L, cycle));
	    }
	    mymap.clear();
	}
    return 0;
}
