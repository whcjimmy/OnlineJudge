#include<cstdio>
using namespace std;

int main()
{
    int T;
    long long int n;
    scanf("%d", &T);
    while(T--)
    {
	scanf("%lld", &n);
	if(n == 0 || n == 1 || n == 2)
	    printf("0\n");
	else if(n == 3)
	    printf("1\n");
	else
	    if(n%2 == 0)
		printf("%lld\n", (n/2)*(n/2-1));
	    else
		printf("%lld\n", (n/2)*(n/2-1)/2 + (n/2+1)*(n/2)/2);
    }
    return 0;
}

