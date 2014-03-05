#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;

int cow[20005];
int main()
{
    int N, S, ans;
    while(scanf("%d%d", &N, &S) != EOF)
    {
	ans = 0;
	for(int i=0; i<N; i++)
	    scanf("%d", &cow[i]);
	sort(cow, cow+N);
	for(int i=0; i<(N-1); i++)
	    for(int j=(i+1); j<N; j++)
		if(cow[i] + cow[j] <= S)
		    ans++;
		else if(cow[i] + cow[j] > S)
		    break;
	printf("%d\n", ans);
    }

    return 0;
}
