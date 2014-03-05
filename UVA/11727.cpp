#include<cstdio>
#include<algorithm>
using namespace std;

int  main()
{
    int T, n[3], cases;
    while(scanf("%d", &T) != EOF)
    {
	cases = 1;
	while(T--)
	{
	    scanf("%d%d%d", &n[0], &n[1], &n[2]);
	    sort(n, n+3);
	    printf("Case %d: %d\n", cases++, n[1]);
	}
    }
    return 0;
}
