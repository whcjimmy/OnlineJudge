#include<cstdio>
#include<algorithm>
using namespace std;

int items[20005];

bool cmp(int a, int b)
{
    return a > b;
}
int main()
{
    int t, n, ans;
    scanf("%d", &t);
    while(t--)
    {
	ans = 0;
	scanf("%d", &n);
	for(int i=0; i<n; i++)
	    scanf("%d", &items[i]);
	sort(items, items+n, cmp);
	for(int i=2; i<n; i+=3)
	    ans += items[i];
	printf("%d\n", ans);


    }
    return 0;
}


