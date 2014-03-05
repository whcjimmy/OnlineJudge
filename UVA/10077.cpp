#include<cstdio>
using namespace std;

int main()
{
    double m, n, la, lb, ra, rb, a, b;
    double d1, d2;
    while(scanf("%lf%lf", &m, &n) != EOF)
    {
	la = 0, lb = 1, ra = 1, rb = 0, a = 1, b = 1;
	if(m == 1 && n == 1)
	    break;
	d1 = m/n; 
	while(1)
	{
	    d2 = a/b;
	    if(d1 == d2)
		break;
	    else if(d1 > d2)
	    {
		la = a, lb = b, a = a + ra, b = b + rb;
		printf("R");
	    }
	    else if(d1 < d2)
	    {
		ra = a, rb = b, a = a + la, b = b + lb;
		printf("L");
	    }
	}
	printf("\n");
    }
    return 0;
}
