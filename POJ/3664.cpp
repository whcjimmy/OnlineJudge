#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<algorithm>
using namespace std;

struct cow
{
    int id, A, B, f;
}m[50005];
bool cmp1(const cow& a, const cow &b)
{
    return a.A > b.A;
}
bool cmp2(const cow& a,const cow& b)
{
    return a.B > b.B;
}

int main()
{
    int N, K, c;
    while(scanf("%d%d", &N, &K) != EOF)
    {
	memset(m, 0, sizeof(m));
	for(int i=0; i<N; i++)
	{
	    scanf("%d%d", &m[i].A, &m[i].B);
	    m[i].id = i+1;
	}
	sort(m, m+N, cmp1);
	for(int i=0; i<K; i++)
	    m[i].f = 1;
	sort(m, m+N, cmp2);
	for(int i=0; i<N; i++)
	    if(m[i].f == 1)
	    {
		printf("%d\n", m[i].id);
		break;
	    }
    }
    return 0;
}
