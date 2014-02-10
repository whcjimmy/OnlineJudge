#include<cstdio>
#include<cstring>
#define MAX 20000000
using namespace std;

bool isprime[MAX];
int ans[MAX];
int main()
{
    int num, S;
    num = 1;
    memset(isprime, true, sizeof(isprime));
    memset(ans, 0, sizeof(ans));
    isprime[0] = isprime[1] = false;
    for(int i=2; i<MAX; i++)
	if(isprime[i])
	    for(int j = i+i; j<MAX; j+= i)
		isprime[j] = false;
    for(int i = 5; i<MAX; i += 2)
	if(isprime[i-2] && isprime[i])
	    ans[num++] = (i-2);
    while(scanf("%d", &S) != EOF)
    {
	printf("(%d, %d)\n", ans[S], ans[S]+2);
    }
    return 0;
}






