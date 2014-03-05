#include<cstdio>
#include<cstring>
#include<algorithm>
#include<cmath>
using namespace std;

struct Point
{
    int x, y;
}p[1003], g[1003];

bool cmp(Point a, Point b)
{
    return ((a.x < b.x) || (a.x == b.x && a.y < b.y));
}

int cross(Point o, Point a, Point b)
{
    return (a.x - o.x)*(b.y - o.y) - (b.x - o.x)*(a.y - o.y);
}

int main()
{
    int N, L, n;
    double length;
    n = length = 0;
    memset(p, 0, sizeof(p));
    memset(g, 0, sizeof(g));
    scanf("%d%d", &N, &L);
    for(int i=0; i<N; i++)
	scanf("%d%d", &p[i].x, &p[i].y);
    sort(p, p+N, cmp);
    for(int i=0; i<N; i++)
    {
	while(n>=2 && cross(g[n-2], g[n-1], p[i])<=0)
	    n--;
	g[n++] = p[i];
    }
    for(int i=N-2, k=n+1;i>=0; i--)
    {
	while(n>=k && cross(g[n-2], g[n-1], p[i])<=0)
	    n--;
	g[n++] = p[i];
    }
    for(int i=1; i<n; i++)
	length += sqrt((double)((g[i].x-g[i-1].x)*(g[i].x-g[i-1].x)+(g[i].y-g[i-1].y)*(g[i].y-g[i-1].y)));
    length += (double)L*acos(-1.0)*2;
    printf("%.lf\n", length);
    return 0;
}

