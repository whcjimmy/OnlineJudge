#include<cstdio>
#include<cstring>
#define MAX 105
using namespace std;

void MCO();
void POP(int, int );
int N, a[MAX][2], m[MAX][MAX], s[MAX][MAX], p[MAX];
int main()
{
    int cases = 1;
    while(scanf("%d", &N))
    {
	if(N == 0)
	    break;
	memset(a, 0, sizeof(a));
	memset(m, 0, sizeof(m));
	memset(s, 0, sizeof(s));
	memset(p, 0, sizeof(p));
	for(int i=1; i<=N; i++)
	{
	    scanf("%d%d", &a[i][0], &a[i][1]);
	    p[i] = a[i][1];
	}
	p[0] = a[1][0];
	MCO();
	printf("Case %d: ", cases++);
	POP(1, N);
	printf("\n");
    }
    return 0;
}

void MCO()
{
    int j, q;
    for(int l=2; l<=N; l++)
	for(int i=1; i<=(N-l+1); i++)
	{
	    j = i + l - 1;
	    m[i][j] = 100000000;
	    for(int k=i; k<=(j-1); k++)
	    {
		q = m[i][k] + m[k+1][j] + p[i-1]*p[k]*p[j];
		if(q < m[i][j])
		{
		    m[i][j] = q;
		    s[i][j] = k;
		}
	    }
	}
}

void POP(int x, int y)
{
    if(x == y)
	printf("A%d", x);
    else 
    {
	printf("(");
	POP(x, s[x][y]);
	printf(" x ");
	POP(s[x][y]+1, y);
	printf(")");
    }
}
