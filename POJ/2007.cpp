#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;

struct Point
{
    int x, y;
}p[52];

bool cmp(Point a, Point b)
{
    return (a.x*b.y - a.y*b.x) > 0;
}

int main()
{
    int t1, t2, n;
    n = 0;
    memset(p, 0, sizeof(p));
    while(scanf("%d %d", &t1, &t2) != EOF)
    {
	p[n].x = t1;
	p[n].y = t2;
	n++;
    }
    sort(p+1, p+n, cmp);
    for(int i=0; i<n; i++)
	printf("(%d,%d)\n", p[i].x, p[i].y);
    return 0;
}
