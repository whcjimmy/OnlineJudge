#include<cstdio>
using namespace std;

int main()
{
    int n, cases;
    cases = 1;
    while(scanf("%d", &n) != EOF)
    {
	if(n == 0)
	    break;

	printf("Case %d: %d\n", cases++, n/2);
    }

    return 0;
}
