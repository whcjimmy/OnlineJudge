#include<cstdio>
using namespace std;

int main()
{
    long long int t, a, b, n, temp;
    while(scanf("%lld", &t) != EOF)
    {
	for(int i=0; i<4480; i++)
	    if((i*(i+1)/2) >= t)
	    {
		n = i;
		break;
	    }
	temp = n*(n-1)/2;
	if(n%2 == 1)
	{
	    a = n - (t - temp) + 1;
	    b = t - temp;
	}
	else
	{
	    a = t - temp;
	    b = n - (t - temp) + 1;
	}
	printf("TERM %lld IS %lld/%lld\n", t, a, b);
    }
    return 0;
}
