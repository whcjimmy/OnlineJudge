#include<cstdio>
using namespace std;

int main()
{
    int T, a, b, sum, cases;
    while(scanf("%d", &T) != EOF)
    {
	cases = 1;
	while(T--)
	{
	    sum = 0;
	    scanf("%d%d", &a, &b);
	    if(a%2 == 0)
		a += 1;
	    if(b%2 == 0)
		b -= 1;
	    for(int i=a; i<=b; i+=2)
		sum += i;
	    printf("Case %d: %d\n",cases++, sum);
	}
    }
    return 0;
}
