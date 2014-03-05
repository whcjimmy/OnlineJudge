#include<cstdio>
#include<cstring>
#include<cmath>
using namespace std;

int ans[600001];
int main()
{
    int N, sum;
    memset(ans, -1, sizeof(ans));
    for(int t=1; t<=60000; t++)
    {
	sum = 0;
	for(int i=2; i<=(int)sqrt(t); i++)
	    if(t%i == 0)
		if(t != i*i)
		{
		    sum += i;
		    sum += t/i;
		}
		else
		    sum += i;
	sum++;
	if(sum > t)
	    ans[t] = 2;
	else if(sum == t)
	    ans[t] = 1;
	else if(sum < t)
	    ans[t] = 0;
    }
    ans[1] = 0;
    printf("PERFECTION OUTPUT\n");
    while(scanf("%d", &N))
    {
	if(N == 0)
	    break;
	if(ans[N] == 2)
	    printf("%5d  ABUNDANT\n", N);
	else if(ans[N] == 1)
	    printf("%5d  PERFECT\n", N);
	else if(ans[N] == 0)
	    printf("%5d  DEFICIENT\n", N);
    }
    printf("END OF OUTPUT\n");
    return 0;
}
