#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;

struct str
{
    char seq[105];
    int inversions;
}s[105];

bool cmp(str a, str b)
{
    return a.inversions < b.inversions;
}
int main()
{
    int	N, M, temp;
    while(scanf("%d%d", &N, &M) != EOF)
    {
	memset(s, 0, sizeof(s));
	for(int i=0; i<M; i++)
	{
	    temp = 0;
	    scanf("%s", s[i].seq);
	    for(int j=0; j<(N-1); j++)
		for(int k=(j+1); k<N; k++)
		{
		    if(s[i].seq[j] > s[i].seq[k])
			temp++;
		}
	    s[i].inversions = temp;
	}
	sort(s, s+M, cmp);
	for(int i=0; i<M; i++)
	    printf("%s\n", s[i].seq);
    }
    return 0;
}
