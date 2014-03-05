#include<cstdio>
#include<cstring>
#include<map>
using namespace std;

int num[100005];
int main()
{
    map<int, int> mymap;
    int n, total, ans;
    while(scanf("%d", &n) != EOF)
    {
	mymap.clear();
	total = ans = 0;
	memset(num, 0, sizeof(num));
	for(int i=0; i<n; i++)
	{
	    scanf("%d", &num[i]);
	    total += num[i];
	    mymap[total] = 1;
	}
	total = 0;
	for(int i=(n-1); i>=0; i--)
	{
	    total += num[i];
	    if(mymap[total])
		ans++;
	}
	printf("%d", ans);

    }

    return 0;
}
