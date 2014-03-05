#include<cstdio>
#include<cstring>
using namespace std;

int m[80];
int main()
{
    int n;
    m[1] = 1;
    m[2] = 2;
    m[3] = 2;
    m[4] = 3;
    for(int i=5; i<=76; i++)
	m[i] = m[i-2] + m[i-3];
    while(scanf("%d", &n) != EOF)
    {
	printf("%d\n", m[n]);
    }
    return 0;
}
