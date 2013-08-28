#include<cstdio>
#include<cstring>
using namespace std;

int m[10005];
int main()
{
    int L, H, R, end, s;
    memset(m, 0, sizeof(m));
    end = s = 0;
    while(scanf("%d%d%d", &L, &H, &R) != EOF)
    {
	for(int i=L; i < R; i++)
	    if(H > m[i])
		m[i] = H;
	if(R > end)
	    end = R;
    }
    for(int i=1; i<=end; i++)
	if(m[i-1] != m[i])
	{
	    if(s)
		printf(" ");
	    s = true;
	    printf("%d %d", i, m[i]);
	}
    printf("\n");
    return 0;
}
