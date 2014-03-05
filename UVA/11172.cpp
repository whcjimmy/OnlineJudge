#include<cstdio>
using namespace std;

int main()
{
    long long int t, a, b;
    while(scanf("%lld", &t) != EOF)
	while(t--)
	{
	    scanf("%lld%lld", &a, &b);
	    if(a < b)
		printf("<\n");
	    else if(a > b)
		printf(">\n");
	    else if(a == b) 
		printf("=\n");
	}
    return 0;
}
