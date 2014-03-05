#include<cstdio>
using namespace std;

int sub(int, int);
int main()
{
    int t, N, K, ans;
    scanf("%d", &t);
    while(t--)
    {
	ans = 0;
	scanf("%d%d", &N, &K);
	ans = sub(N, K);
	printf("%d\n", ans);
    }
    return 0;
}

int sub(int a, int b)
{
    if((a == 0) || (b == 1))
	return 1;
    if(a < b)
	return sub(a, a);
    return sub(a, b-1) + sub(a-b, b);
}
