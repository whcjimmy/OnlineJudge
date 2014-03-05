#include<cstdio>
#include<cstring>
using namespace std;

int t[10005], n[10005];
int main()
{
    int N, Q, temp, max, cases;
    cases = 1;
    while(scanf("%d%d", &N, &Q))
    {
	max = 0;
	memset(t, 0, sizeof(t));
	memset(n, 0, sizeof(n));
	if(N == 0 && Q == 0)
	    break;
	for(int i=0; i<N; i++)
	{
	    scanf("%d", &temp);
	    t[temp]++;
	    n[temp]++;
	    if(temp > max)
		max = temp;
	}
	for(int i=1; i<=max; i++)
	    n[i] += n[i-1];
	printf("CASE# %d:\n", cases++);
	for(int i=0; i<Q; i++)
	{
	    scanf("%d", &temp);
	    if(t[temp])
		printf("%d found at %d\n", temp, n[temp-1]+1);
	    else
		printf("%d not found\n", temp);
	}
    }
    return 0;
}
