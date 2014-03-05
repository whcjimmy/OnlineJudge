#include<cstdio>
#include<cstring>
#include<algorithm>
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


