#include<cstdio>
#include<set>
using namespace std;

int main()
{
    int C, N, cases, check, temp, sum, O;
    set<int> happy;
    cases = 1;
    scanf("%d", &C);
    while(C--)
    {
	scanf("%d", &N);
	O = N;
	sum = check = 0;
	while(1)
	{
	    sum = 0;
	    if(N == 1)
	    {
		check = 1;
		break;
	    }
	    else if(happy.count(N) == 1)
	    {
		check = 0;
		break;
	    }
	    happy.insert(N);
	    while(N)
	    {
		sum += (N%10)*(N%10);
		N = (N - N%10)/10;
	    }
	    N = sum;
	}
	if(check)
	    printf("Case #%d: %d is a Happy number.\n", cases++, O);
	else
	    printf("Case #%d: %d is an Unhappy number.\n", cases++, O);
	happy.clear();
    }
    return 0;
}
