#include<cstdio>
#include<cstring>
#include<map>
using namespace std;

int m[105][105];
int main()
{
    int a, b, cases, n, length;
    map<int, int> mymap;
    map<int, int>::iterator it;
    cases = 1;
    while(scanf("%d%d", &a, &b))
	if(a == 0 && b == 0)
	    break;
	else
	{
	    n = length = 0;
	    for(int i=0; i<105; i++)
		for(int j=0; j<105; j++)
		    m[i][j] = 1e9;
	    mymap.insert(pair<int, int>(a, ++n));
	    a = n;
	    mymap.insert(pair<int, int>(b, ++n));
	    b = n;
	    m[a][b] = 1;
	    while(scanf("%d%d", &a, &b))
		if(a == 0 && b == 0)
		    break;
		else
		{
		    it = mymap.find(a);
		    if(it != mymap.end())
			a = it->second;
		    else
		    {
			mymap.insert(pair<int, int>(a, ++n));
			a = n;
		    }
		    it = mymap.find(b);
		    if(it != mymap.end())
			b = it->second;
		    else
		    {
			mymap.insert(pair<int, int>(b, ++n));
			b = n;
		    }
		    m[a][b] = 1;
		}
	    for(int k=1; k<=n; k++)
		for(int i=1; i<=n; i++)
		    for(int j=1; j<= n; j++)
			if(m[i][k] + m[k][j] < m[i][j])
			    m[i][j] = m[i][k] + m[k][j];
	    for(int i=1; i<=n; i++)
		for(int j=1; j<=n; j++)
		    if(i != j)
			length += m[i][j];
	    printf("Case %d: average length between pages = %.3lf clicks\n", cases++, (double)length/(n*(n-1)));
	    mymap.clear();
	}
    return 0;
}

