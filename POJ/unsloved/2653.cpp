#include<cstdio>
#include<cstring>
#include<algorithm>
#include<vector>
using namespace std;

struct Point
{
    double x, y;
};

struct Line
{
    Point a, b;
}l[100010];

bool SegmentIntersect(Line, Line);
bool OnSegment(Point, Point, Point);
int main()
{
    int n;
    vector<Line> myvector;
    vector<int>  mynum; 
    while(scanf("%d", &n) && n != 0)
    {
	memset(l, 0, sizeof(l));
	for(int i=1; i<=n; i++)
	    scanf("%lf%lf%lf%lf", &l[i].a.x, &l[i].a.y, &l[i].b.x, &l[i].b.y);
	myvector.push_back(l[1]);
	mynum.push_back(1);
	for(int i=2; i<=n; i++)
	{
	    for(int j=0; j<myvector.size(); j++)
		if(SegmentIntersect(l[i], myvector[j]))
		{
		    myvector.erase(myvector.begin()+j);
		    mynum.erase(mynum.begin()+j);
		}
	    myvector.push_back(l[i]);
	    mynum.push_back(i);
	}
	printf("Top sticks:");
	for(int i=0; i<myvector.size(); i++)
	    if(i != myvector.size()-1)
		printf(" %d,", mynum[i]);
	    else
		printf(" %d.", mynum[i]);
	printf("\n");
	myvector.clear();
	mynum.clear();
    } 
    return 0;
}

bool SegmentIntersect(Line p, Line q)
{
    double d1, d2, d3, d4;
    d1 = (p.a.x - q.a.x)*(q.b.y - q.a.y) - (p.a.y - q.a.y)*(q.b.x - q.a.x);
    d2 = (p.b.x - q.a.x)*(q.b.y - q.a.y) - (p.b.y - q.a.y)*(q.b.x - q.a.x);
    d3 = (q.a.x - p.a.x)*(p.b.y - p.a.y) - (q.a.y - p.a.y)*(p.b.x - p.a.x);
    d4 = (q.b.x - p.a.x)*(p.b.y - p.a.y) - (q.b.y - p.a.y)*(p.b.x - p.a.x);
    if((d1*d2 < 0) && (d3*d4 < 0))
	return true;
    if((d1 == 0) && OnSegment(q.a, q.b, p.a))
	return true;
    if((d2 == 0) && OnSegment(q.a, q.b, p.b))
	return true;
    if((d3 == 0) && OnSegment(p.a, p.b, q.a))
	return true;
    if((d4 == 0) && OnSegment(p.a, p.b, q.b))
	return true;
    return false;
}

bool OnSegment(Point i, Point j, Point k)
{
    if(((min(i.x, j.x) <= k.x) && (max(i.x, j.x) >= k.x)) && ((min(i.y, j.y) <= k.y) && (max(i.y, j.y) >= k.y)))
	return true;
    else
	return false;
}
