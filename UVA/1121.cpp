#include<cstdio>
#include<cstring>
#include<algorithm>
#define INF 1000000000
using namespace std;

int m[100005];
int main()
{
    int N, S, L, R, sum, end, minima;
    while(scanf("%d%d", &N, &S) != EOF)
    {
	L = R = sum = end = 0;
	minima = INF;
	for(int i=0; i<N; i++)
	    scanf("%d", &m[i]);
	sum += m[L];
	while(L <= (N-1))
	    if(sum < S)
	    {
		if(R == (N-1))
		    end = 1;
		if(end == 0)
		{
		    R++;
		    sum += m[R];
		}
		else break;
	    }
	    else
	    {
		minima = min(minima, (R-L+1));
		sum -= m[L];
		L++;
	    }	
	if(minima == INF)
	    printf("0\n");
	else
	    printf("%d\n", minima);
    }
    return 0;
}
