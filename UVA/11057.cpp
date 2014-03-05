#include<cstdio>
#include<cstring>
#include<map>
#include<cmath>
using namespace std;

int main()
{
    int N, M, t, a, b, diff;
    map<int, int> mymap;
    map<int, int>::iterator it;
    while(scanf("%d", &N) != EOF)
    {
	mymap.clear();
	a = b = 0;
	diff = 1e9;
	for(int i=0; i<N; i++)
	{
	    scanf("%d", &t);
	    mymap[t]++;
	}
	scanf("%d", &M);
	for(it = mymap.begin(); it != mymap.end(); ++it)
	{
	    if((it->first == (M - it->first)) && it->second >= 2)
	    {
		a = b = it->first;
		diff = 0;
	    }
	    else
		if(mymap.find(M-it->first) != mymap.end() && (it->first != M-it->first) && (abs(M-it->first-it->first)<diff))
		{
		    a = M - it->first;
		    b = it->first;
		    diff = abs(M - it->first - it->first);
		}
	}
	if(a > b) swap(a, b);
	printf("Peter should buy books whose prices are %d and %d.\n\n", a, b);
    }
    return 0;
}
