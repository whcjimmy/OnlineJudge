#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;

struct point
{
    int x, y;
}p[1005], m[1000005];

bool cmp(point a, point b)
{
    if(a.x == b.x) return a.y < b.y;
    else return a.x < b.x;
}

int main()
{
    int t, n, x, y, num, ans, temp;
    scanf("%d", &t);
    while(t--)
    {
	num = temp = ans = 0;
	scanf("%d", &n);
	for(int i=0; i<n; i++)
	    scanf("%d%d", &p[i].x, &p[i].y);
	sort(p, p+n, cmp);
	for(int i=0; i<(n-1); i++)
	    for(int j=(i+1); j<n; j++)
	    {
		m[num].x = p[i].x + p[j].x;
		m[num].y = p[i].y + p[j].y;
		num++;
	    }
	sort(m, m+num, cmp);
	temp = 1;
	for(int i=0; i<(num-1); i++)
	    if(m[i].x == m[i+1].x && m[i].y == m[i+1].y)
		temp++;
	    else
	    {
		ans += (temp*(temp-1))/2;
		temp = 1;
	    }
	printf("%d\n", ans);
    }
    return 0;
}
