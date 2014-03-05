#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;

int m[1001];
int main()
{
    int cases, n, i, t, t1, t2;
    scanf("%d", &cases);
    while(cases--)
    {
	t = t1 = t2 = 0;
	memset(m, 0, sizeof(m));
	scanf("%d", &n);
	for(i=0; i<n; i++)
	    scanf("%d", &m[i]);
	sort(m, m+n);
	for(i = n-1; i >= 3; i -= 2)
	{
	    t1 = m[0] + m[1]*2 + m[i];
	    t2 = m[0]*2 + m[i-1] + m[i];
	    t += min(t1, t2);
	}
	if(i == 2)
	    t += m[0] + m[1] + m[2];
	else if(i== 1)
	    t += m[1];
	else
	    t += m[0];
	printf("%d\n", t);	
	for(i = n-1; i >= 3; i -= 2)
	{
	    t1 = m[0] + m[1]*2 + m[i];
	    t2 = m[0]*2 + m[i-1] + m[i];
	    t += min(t1, t2);
	    if(t1 < t2)
		printf("%d %d\n%d\n%d %d\n%d\n", m[0], m[1], m[0], m[i-1], m[i], m[1]);
	    else
		printf("%d %d\n%d\n%d %d\n%d\n", m[0], m[i], m[0], m[0], m[i-1], m[0]);
	}
	if(i == 2)
	{
	    t += m[0] + m[1] + m[2];
	    printf("%d %d\n%d\n%d %d\n", m[0], m[2], m[0], m[0], m[1]);
	}
	else if(i == 1)
	{
	    t += m[1];
	    printf("%d %d\n", m[0], m[1]);
	}
	else
	{
	    t += m[0];
	    printf("%d\n", m[0]);
	}
	if(cases)
	    printf("\n");
    }
    return 0;
}
