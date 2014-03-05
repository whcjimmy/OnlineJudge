#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;

int d[20005], k[20005];
int main()
{
    int n, m, a, cost;
    while(scanf("%d%d", &n, &m))
    {
	if(n == 0 && m == 0) break;
	a = cost = 0;
	memset(d, 0, sizeof(d));
	memset(k, 0, sizeof(k));
	for(int i=0; i<n; i++)
	    scanf("%d", &d[i]);
	for(int i=0; i<m; i++)
	    scanf("%d", &k[i]);
	sort(d, d+n);
	sort(k, k+m);
	for(int i=0; i<m; i++)
	    if(k[i] >= d[a])
	    {
		cost += k[i];
		a++;
		if(a >= n) break;
	    }
	if(a < n)
	    printf("Loowater is doomed!\n");
	else
	    printf("%d\n", cost);
    }
    return 0;
}
