#include<cstdio>
using namespace std;

int gcd(int ,int );
int main()
{
    int step, mod;
    while(scanf("%d%d", &step, &mod) != EOF)
    {
	if(gcd(step, mod) == 1)
	    printf("%10d%10d    Good Choice\n", step, mod);
	else
	    printf("%10d%10d    Bad Choice\n", step, mod);
	printf("\n");
    }
    return 0;
}

int gcd(int a, int b)
{
    int r;
    while(b != 0)
    {
	r = a%b;
	a = b;
	b = r;
    }
    return a;
}

